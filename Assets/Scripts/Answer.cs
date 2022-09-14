using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Answer : MonoBehaviour
{
    public bool isCorrect = false;
    public QuizManager quizManager;

    public void Answers()
    {
        if (isCorrect)
        {
            Debug.Log("Correct Answer");
            quizManager.UpdateScore(10);
            quizManager.correct();
        }
        else
        {
            Debug.Log("Wrong Answer");
            quizManager.correct();
        }
    }
}
