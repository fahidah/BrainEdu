using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class GameManager : MonoBehaviour
{

    //Load Learn Scene
    public void LearnScene(string name)
    {
        SceneManager.LoadScene("MainScene");
    }

    //Load Quiz Scene
    public void QuizScene(string name)
    {
        SceneManager.LoadScene("TestScene");
    }


    //Reload Quiz Scene
    public void ReloadLearnScene(string name)
    {
        SceneManager.LoadScene(SceneManager.GetActiveScene().name);
    }
}
