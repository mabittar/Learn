from gtts import gTTS
import os
tts = gTTS(text='Oi Mundo', lang='pt_br')
tts.save("ola.mp3")
os.system("mpg321 ola.mp3")
