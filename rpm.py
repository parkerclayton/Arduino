#calculate rpm from motor delaylength, step angle and steps/revolution


alpha = 1.8 #degrees
spr =200.00
f= 60.00 #Hz value obtained from data sheet


def rpm(dl):

  StepsPerSecond=dl/1000.00
  rpm=(spr*StepsPerSecond*60.00)
  print('stepper rpm: %s') %rpm

  #alternative
  rpm1=((f*alpha)/360.00)*60.00
  #print('stepper rpm from suggested frequency: %s') %rpm1

  #notes

  """ http://www.atmel.com/images/doc8017.pdf"""


#suggested rpm is 18 which seems about right
