#calculate delaylength from motor rpm, step angle and steps/revolution


alpha = 1.8 #degrees
spr =200.00


def dl(rpm):

  StepsPerSecond = rpm/spr *(60.00)

  dell= 1000.00/StepsPerSecond

  print('delay in ms: %s') %dell


  #notes

  """ http://www.atmel.com/images/doc8017.pdf"""
