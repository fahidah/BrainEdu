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
            quizManager.UpdateScore(20);
            quizManager.correct();
        }
        else
        {
            quizManager.correct();
        }
    }
}
