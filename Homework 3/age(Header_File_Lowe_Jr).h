#pragma once
#ifndef AGE_H
#define AGE_H

#include <string>
#include <iostream>

using namespace std;

int GetInfo(string &name); // the refeerence parameter for person's name and year

void Categories(string name, int year); //input name and birth year by value

int CalculateAge(string name, int year); // calculate ages of random person for 2026

void FindYoungest(string name1, int age1, string name2, int age2, string name3, int age3); // discover which person is the youngest

void FindOldest(string name1, int age1, string name2, int age2, string name3, int age3);   // discover which person is the oldest

#endif