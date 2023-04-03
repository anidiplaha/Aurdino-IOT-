#define ntc_pin A0         
#define vd_power_pin 2        
#define nominal_resistance 10000       
#define nominal_temeprature 25   
#define samplingrate 5   
#define beta 3950  
#define Rref 10000   
int samples = 0;  

void setup(void) 
{
pinmode(vd_power_pin,OUTPUT);
 Serial.begin(9600);   
}


void loop(void) 
{
  uint8_t i;
  float average;
  sample = 0;
digitalWrite(vd_power_pin,HIGH);
  for (i=0; i< samplingrate; i++) 
  {
   samples += analogRead(ntc_pin);
   delay(10);
  }
digitalWrite(vd_power_pin,LOW)
  average = 0;
  average = samples/ samplingrate;
  Serial.print("ADC readings ");
  Serial.println(average);
  average = 1023 / average - 1;
  average = Rref/ average;
  Serial.print("Thermistor resistance ");
  Serial.println(average);
  float temperature;
  temperature = average / nominal_resistance;     
  temperature = log(steinhart);                  
  temperature /= beta;                   
  temperature += 1.0 / (nominal_temeprature + 273.15); 
  temperature = 1.0 / temperature;                 
  temperature -= 273.15;                         
  Serial.print("Temperature ");
  Serial.print(temperature);
  Serial.println(" *C");
  delay(1000);
}