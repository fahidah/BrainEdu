using System.Collections;
using System.Collections.Generic;
using TMPro;
using UnityEngine;

public class QuizManager : MonoBehaviour
{
    //Create an array of questions to be tested
    public List<QandA> QnA;

    //make reference to the options buttton
    public GameObject[] options;

    //track the index of current question
    public int currentQuestion;

    //declare variable for the score
    private int score;

    //text for the score
    public TextMeshPro scoreText;

    //text for the question
    public TextMeshPro questionTxt;


    private void Start()
    {
        generateQuestion();
    }

    public void correct()
    {
        QnA.RemoveAt(currentQuestion);
        generateQuestion();

    }


    void generateQuestion()
    {
        if (QnA.Count > 0)
        {
            currentQuestion = Random.Range(0, QnA.Count);
            questionTxt.text = QnA[currentQuestion].questions;
            setAnswers();
        }
    }

    void setAnswers()
    {
        for (int i = 0; i < options.Length; i++)
        {
            //options[i].GetComponent<Answers>().isCorrect = false;
            options[i].transform.GetChild(0).GetComponent<TextMeshProUGUI>().text = QnA[currentQuestion].answers[i];

            if (QnA[currentQuestion].correctAnswer == i + 1)
            {
                options[i].GetComponent<Answer>().isCorrect = true;

            }
        }
    }

    // This keeps track of scores
    public void UpdateScore(int scoreToAdd)
    {
        score += scoreToAdd;
        scoreText.text = "Weldone! Your Score is: " + score + "/30";
    }
}
