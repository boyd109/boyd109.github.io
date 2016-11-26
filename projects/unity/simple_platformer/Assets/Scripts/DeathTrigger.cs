using UnityEngine;
using System.Collections;

public class DeathTrigger : MonoBehaviour {

	void OnTriggerEnter2D (Collider2D other)
	{
		if (other.gameObject.CompareTag ("Player"))
			Application.LoadLevel (Application.loadedLevel);
	}
}
