using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Answer : MonoBehaviour
{
    public bool isCorrect;
    public QuizManager quizManager;

    public void Answers()
    {
        if (isCorrect)
        {
            quizManager.UpdateScore(20);
            Debug.Log("Correct Answer");
            quizManager.correct();
        }
        else
        {
            Debug.Log("Wrong Answer");
            quizManager.correct();
        }
    }
}
