#calculate rpm from motor delaylength, step angle and steps/revolution


alpha = 1.8 #degrees
spr =200.00


def rpm(dl):

  StepsPerSecond=dl/1000.00
  rpm=(spr*StepsPerSecond*60.00)
  print('stepper rpm: %s') %rpm

  #notes

  """ http://www.atmel.com/images/doc8017.pdf"""
