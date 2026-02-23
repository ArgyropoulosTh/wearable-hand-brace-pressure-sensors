int fsrPin1 = 0;     // the FSR and 4.7kohm pulldown are connected to a0
int fsrReading;     // the analog reading from the FSR resistor divider
int fsrVoltage;     // the analog reading converted to voltage
unsigned long fsrResistance;  // The voltage converted to resistance, can be very big so make "long"
unsigned long fsrConductance; 
//float fsrForce;       // Finally, the resistance converted to force
 
int fsrPin2 = 1;     // the FSR and 4.7kohm pulldown are connected to a1
int fsrReading2;     // the analog reading from the FSR resistor divider
int fsrVoltage2;     // the analog reading converted to voltage
unsigned long fsrResistance2;  // The voltage converted to resistance, can be very big so make "long"
unsigned long fsrConductance2; 
//float fsrForce2;       // Finally, the resistance converted to force

int fsrPin3 = 2;     // the FSR and 4.7kohm pulldown are connected to a1
int fsrReading3;     // the analog reading from the FSR resistor divider
int fsrVoltage3;     // the analog reading converted to voltage
unsigned long fsrResistance3;  // The voltage converted to resistance, can be very big so make "long"
unsigned long fsrConductance3; 
//float fsrForce2;       // Finally, the resistance converted to force

float a1 = 26974849;
float a2 = -1.2968;

void setup(void) {
 Serial.begin(9600);   // We'll send debugging information via the Serial monitor
 
}
 
void loop(void) {
  
 fsrReading = analogRead(fsrPin);
 
 fsr2Reading = analogRead(fsr2Pin);

 fsr3Reading = analogRead(fsr3Pin);

  Serial.print("Analog reading A0= " );
  Serial.println(fsrReading);

  Serial.print("Analog reading A1= " );
  Serial.println(fsr2Reading);

  Serial.print("Analog reading A2= " );
  Serial.println(fsr3Reading);

  // analog voltage reading ranges from about 0 to 1023 which maps to 0V to 3.3V (= 3300mV)
  fsrVoltage = map(fsrReading, 0, 1023, 0, 3300);

  fsr2Voltage = map(fsr2Reading, 0, 1023, 0, 3300);

  fsr3Voltage = map(fsr3Reading, 0, 1023, 0, 3300);

  Serial.print("Voltage_A0 reading in mV = ");
  Serial.println(fsrVoltage);

  Serial.print("Voltage_A1 reading in mV = ");
  Serial.println(fsr2Voltage);

  Serial.print("Voltage_A2 reading in mV = ");
  Serial.println(fsr3Voltage);
 
  if (fsrVoltage == 0){
    Serial.println("No pressure A0");
    }
  else{
     fsrResistance = ((3300 - fsrVoltage) * 4700) / fsrVoltage; // fsrVoltage is in millivolts so 5V = 5000mV
  
    Serial.print("FSR_A0 resistance in ohms = ");
    Serial.println(fsrResistance);
  }
    
  if (fsrResistance >1500  && fsrResistance <22000){
    fsrForce = a1*pow(fsrResistance,a2);
  
    Serial.print("Force_A0 in Grams: ");
    Serial.println(fsrForce);
    } 
  else{
   Serial.println("Resistance A0 out of range");
  }

  if (fsr2Voltage == 0){
   Serial.println("No pressure A1");
   }
  else{
   fsrResistance2 = ((3300 - fsrVoltage2) * 4700) / fsrVoltage2; // fsrVoltage is in millivolts so 5V = 5000mV

    
    Serial.print("FSR_A1 resistance in ohms = ");
    Serial.println(fsrResistance);
  }

  if (fsr2Resistance>1500 && fsr2Resistance < 22000){
    fsr2Force = a1*pow(fsr2Resistance,a2);

    Serial.print("Force_A1 in Grams: ");
    Serial.println(fsrForce);
   }
  else{
  Serial.println("Resistance A1 out of range");
  }

  if (fsr3Voltage == 0){
   Serial.println("No pressure A2");
   }
  else{
   fsrResistance3 = ((3300 - fsrVoltage3) * 4700) / fsrVoltage3; // fsrVoltage is in millivolts so 5V = 5000mV

    
    Serial.print("FSR_A2 resistance in ohms = ");
    Serial.println(fsrResistance);
  }

  if (fsr2Resistance>1500 && fsr2Resistance < 22000){
    fsr2Force = a1*pow(fsr2Resistance,a2);

    Serial.print("Force_A1 in Grams: ");
    Serial.println(fsrForce);
   }
  else{
  Serial.println("Resistance A1 out of range");
  }

  Serial.println("--------------------");
  delay(1000);

}




  
  
