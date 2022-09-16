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
    public TextMeshPro questionTxt;

    [SerializeField]
    //transparent material
    private Material transparentMaterial;

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
        int randomQuestionIndex = Random.Range(0, unasweredQnA.Count);
        currentQuestion = unasweredQnA[randomQuestionIndex];

        questionTxt.text = currentQuestion.questions;
        setAnswers();
    }

    void setAnswers()
    {
        for (int i = 0; i < options.Length; i++)
        {
            //options[i].GetComponent<Answers>().isCorrect = false;
            options[i].transform.GetChild(0).GetComponent<TextMeshPro>().text = currentQuestion.answers[i];

            currentQuestion.referencedPart.GetComponent<MeshRenderer>().enabled = true;
            for (int j = 0; j < currentQuestion.otherBrainParts.Length; j++)
            {
                currentQuestion.otherBrainParts[j].GetComponent<MeshRenderer>().material = transparentMaterial;
                currentQuestion.otherBrainParts[j].GetComponent<ObjectManipulator>().enabled = false;
            }
            

            if (currentQuestion.correctAnswer == i + 1)
            {
                options[i].GetComponent<Answer>().isCorrect = true;
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
