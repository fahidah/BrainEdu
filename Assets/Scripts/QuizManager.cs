using System.Collections;
using System.Collections.Generic;
using TMPro;
using UnityEngine;

public class QuizManager : MonoBehaviour
{
    public List<QandA> QnA;
    public GameObject[] options;
    public int currentQuestion;
    private int score;
    public TextMeshPro scoreText;

    public GameObject quizCanvas, scoreDialog;

    public TextMeshProUGUI questionTxt;


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
        else
        {
            quizCanvas.gameObject.SetActive(false);
            scoreDialog.gameObject.SetActive(true);
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
