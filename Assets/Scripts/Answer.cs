using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Answer : MonoBehaviour
{
    public bool isCorrect = false;
    public QuizManager quizManager;

    public void Answers()
    {
        if (isCorrect == true)
        {
            Debug.Log(isCorrect);
            quizManager.UpdateScore(20);
            Debug.Log("Correct Answer");
            quizManager.correct();
        }
        else
        {
            Debug.Log(isCorrect);
            Debug.Log("Wrong Answer");
            quizManager.correct();
        }
    }
}
