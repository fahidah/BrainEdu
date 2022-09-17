using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class GameManager : MonoBehaviour
{

    //Load Learn Scene
    public void MainScene()
    {
        SceneManager.LoadScene("Main Scene");
    }

    //Load Quiz Scene
    public void TestScene()
    {
        SceneManager.LoadScene("Test Scene");
    }


    //Reload Quiz Scene
    public void ReloadScene()
    {
        SceneManager.LoadScene(SceneManager.GetActiveScene().name);
    }
}
