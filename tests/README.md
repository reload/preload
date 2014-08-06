# Opsætning af selenium
Installér selenium med brew install selenium-server-standalone
Homebrew slutter af med at fortælle hvordan man starter selenium direkte på kommandonlinjen, det er noget i retning af
java -jar /usr/local/opt/selenium-server-standalone/selenium-server-standalone-VERSIONSNUMMER.jar -p 4444
(opdater VERSIONSNUMMER)

## Test med chrome
* Download driver fra http://chromedriver.storage.googleapis.com/index.html og pak ud et sted
* Start selenium med -Dwebdriver.chrome.driver=/sti/til/executable
