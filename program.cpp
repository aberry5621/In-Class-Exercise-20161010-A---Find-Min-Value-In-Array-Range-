//
//  main.cpp
//  In Class Exercise 20161010-A - Print Random Numbers
//
//  Created by ax on 10/10/16.
//  Copyright © 2016 COMP130. All rights reserved.
//

#include <iostream>
#include <ctime>
using namespace std;

int find_min_number(int input_array[], int array_size, int min_idx, int max_idx) {
    
    int min_number = input_array[min_idx];
    
    if ((min_idx < max_idx) && (min_idx >= 0) && (max_idx <= array_size))
    {
        cout << "Searching array from index " << min_idx << " to " << max_idx << endl;
        
        for (int i = min_idx; i < max_idx; i++) {
            
            if (input_array[i] < min_number) {
            
                min_number = input_array[i];
            }
        }
    }
    else
    {
        min_number = -1;
    }
    
    return min_number;
    
}

int main() {
    
    cout << "Print Random Numbers, Find Min Number Between Indexes \n";
    
    // Initialize data storage
    const int ARRAY_SIZE = 15;
    int random_numbers[ARRAY_SIZE] = {0};
    srand(time(0)); // random seed
    int arr_size, min_idx = 0, max_idx = 0;
    
    cout << "Enter indices to start and end search between 0 and 15: ";
    cin >> min_idx >> max_idx;
    
    // populate with random numbers between 15 and 55
    for (int i = 0; i < ARRAY_SIZE; i++) {
        int rand_number = 15 + (rand() % 40 + 1);
        random_numbers[i] = rand_number;
    }
    
    // then find minimum number in the array
    int min_number_found_in_range = find_min_number(random_numbers, ARRAY_SIZE, min_idx, max_idx);
    
    if (min_number_found_in_range != -1)
    {
        cout << "Min number is: " << min_number_found_in_range << endl;
    } else 
    {
        cout << "Input error, check input range." << endl;
    }
    
    return 0;
}
