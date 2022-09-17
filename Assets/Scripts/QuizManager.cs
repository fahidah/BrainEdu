using System.Collections;
using System.Collections.Generic;
using TMPro;
using UnityEngine;
using System.Linq;
using Microsoft.MixedReality.Toolkit.SpatialManipulation;

public class QuizManager : MonoBehaviour
{
    //Create an array of questions to be tested
    public QandA[] QnA;

    //List to update questions being displayed
    private static List<QandA> unasweredQnA;

    //make reference to the options buttton
    public GameObject[] options;

    //track the index of current question
    private QandA currentQuestion;

    //declare variable for the score
    private int score;

    //text for the score
    public TextMeshPro scoreText;

    //text for the question
    public TextMeshPro questionTxt, finalFeedback;

    [SerializeField]
    //transparent material
    private Material transparentMaterial, mainMaterial;

    public GameObject brainModel;
    public GameObject finalpage;
    public GameObject questionPhase;



    [SerializeField]
    private GameObject answerButtons;
    private void Start()
    {
        if(unasweredQnA == null || unasweredQnA.Count == 0)
        {
            unasweredQnA = QnA.ToList<QandA>();
        }
        generateQuestion();
    }

    public void correct()
    {
        unasweredQnA.Remove(currentQuestion);
        generateQuestion();
    }


    void generateQuestion()
    {
        if(unasweredQnA.Count != 0)
        {
            int randomQuestionIndex = Random.Range(0, unasweredQnA.Count);
            currentQuestion = unasweredQnA[randomQuestionIndex];

            questionTxt.text = currentQuestion.questions;

            UpdateBrainMaterial();
            setAnswers();
        }
        else
        {
            finalFeedback.text = "\t\t  Weldone!\n\t Your Total score is " + score + " of 100. \n\t  Would you like to retry?";
            questionPhase.SetActive(false);
            finalpage.SetActive(true);
        }
    }

    void setAnswers()
    {
        for (int i = 0; i < options.Length; i++)
        {
            options[i].GetComponent<Answer>().isCorrect = false;
            options[i].transform.GetChild(1).GetComponentInChildren<TextMeshPro>().text = currentQuestion.answers[i];
            

            if (currentQuestion.correctAnswer == i + 1)
            {
                options[i].GetComponent<Answer>().isCorrect = true;
            }
        }
    }


    void UpdateBrainMaterial()
    {
        
        string referencedPart = currentQuestion.referencedPart.name;
        int brainParts = brainModel.transform.childCount;

        //Debug.Log(brainParts);
        for(int b = 0; b < brainParts; b++)
        {
            brainModel.transform.GetChild(b).GetComponent<MeshRenderer>().material = mainMaterial;

            if (brainModel.transform.GetChild(b).name != referencedPart)
            {
                brainModel.transform.GetChild(b).GetComponent<MeshRenderer>().material = transparentMaterial;
                brainModel.transform.GetChild(b).GetComponent<ObjectManipulator>().enabled = false;
            }
        }
    }

    // This keeps track of scores
    public void UpdateScore(int scoreToAdd)
    {
        score += scoreToAdd;
        scoreText.text =  score.ToString();
    }
}
