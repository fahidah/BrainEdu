using UnityEngine;
[System.Serializable]
public class QandA
{
    public string questions;
    public string[] answers = new string[4];
    public int correctAnswer;
    public GameObject referencedPart;
    public GameObject[] otherBrainParts;
}
