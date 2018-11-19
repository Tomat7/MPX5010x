# MPX5010x

Light library to collect data from mpx5010dp pressure module 

# ReadOnly now!
use https://github.com/Tomat7/ADCmulti 
or  https://github.com/Tomat7/ADCmultiplexer

MPX data PIN need to be connected to analog input of Arduino.
Library configure ADC to **Free Running Mode**.
#### So, library use ISR(ADC_vect) interruption to collect data set.

It is necessary to use method **check()** to perform calculation before getting Press_mmHg.

Feel free to see the code and uncomment Press_kPa.

