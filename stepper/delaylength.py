#calculate delaylength from motor rpm, step angle and steps/revolution


alpha = 1.8 #degrees
spr =200.00


def dl(rpm):

  StepsPerSecond = rpm/spr *(60.00)

  dell= 1000.00/StepsPerSecond

  print('delay in ms: %s') %dell


  #notes

  """ http://www.atmel.com/images/doc8017.pdf"""

"""
Current Sequence

1. A forward
2. B Backwards
3. B forwards
4. A backwards

Suggested Sequence from schematic

0. A and B forward
1. A backwards, B forwards
2. A backwards, B backwards
3. A forwards, B backwards
4. A forwards, B forwards

datasheet says 60Hz
so..."""

#suggested rpm is 18, which makes delaylength 185.18
#will try it tomorrow
#stackexchange suggests that if cycling through steps too fast, motor will just
#sit there and vibrate

#high-torque mode means energize two coils at the same time
