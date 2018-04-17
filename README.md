# MPX5010x

Ligth library to collect data from mpx5010dp pressure module 

MPX data PIN need to be connected to analog input of Arduino.
Library configure ADC to **Free Running Mode**.
So, library use ISR(ADC_vect) to collect data set.

It is necessary to use method check() before getting Press_mmHg.

Feel free to see the code and uncomment Press_kPa.

