using UnityEngine;
using System.Collections;

public class SpawnManager : MonoBehaviour {

	public int MaxPlatforms = 20;
	public GameObject platform;
	public float horizontalMin = 6.5f;
	public float horizontalMax = 14f;
	public float verticalMin = -6f;
	public float verticalMax = 6f;

	private Vector2 originPosition;

	// Use this for initialization
	void Start () {

		originPosition = transform.position;
		Spawn ();
	
	}

	void Spawn()
	{
		for (int i = 0; i < MaxPlatforms; i++) 
		{
			Vector2 randomPosition = originPosition + new Vector2 (Random.Range (horizontalMin, horizontalMax), Random.Range (verticalMin, verticalMax));
			Instantiate (platform, randomPosition, Quaternion.identity);
			originPosition = randomPosition;
		}
	}
}
