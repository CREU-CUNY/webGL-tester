﻿using UnityEngine;
using System.Collections;
using UnityEngine.Analytics;
using System.Collections.Generic;


public class Checkpoint : MonoBehaviour {

	public bool checkpointActive;
	// Use this for initialization
	void Start () {
	
	}
	
	// Update is called once per frame
	void Update () {
	
	}

	void OnTriggerEnter2D(Collider2D other){
		if (other.tag == "Player") {
			checkpointActive = true;
            Analytics.CustomEvent("Checkpoint1");
		}
	}
}
