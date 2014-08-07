# Installer Behat med Drupal Extension #

Følg denne vejledning: [http://dspeak.com/drupalextension/](http://dspeak.com/drupalextension/)

# Opsætning af selenium #

Installér selenium med `brew install selenium-server-standalone`

Homebrew slutter af med at fortælle hvordan man starter selenium direkte på kommandonlinjen, det er noget i retning af
`java -jar /usr/local/opt/selenium-server-standalone/selenium-server-standalone-VERSIONSNUMMER.jar -p 4444`
(opdater VERSIONSNUMMER)

## Test med chrome ##
* Download driver fra http://chromedriver.storage.googleapis.com/index.html og pak ud et sted
* Start selenium med -Dwebdriver.chrome.driver=/sti/til/executable

# Brug af tags #

Dette er en oversigt over de tags det anbefales at bruge i dette projekt. 

Der er tags til udvælgelse af hvilke tests der skal køres baseret på testens karakteristika, hvilken del af sitet testen hører ind under og tags til at hooke ind i testprocessen.

## Tags der beskriver test karakteristika ##

`@smoke`
	Feature eller scenarie der skal køres før hvert commit.

`@ci`
	Feature eller scenarie skal inkluderes i vores continous integration.
   
`@dependent` 
	Bruges til at angive at et scenarie er afhængigt af data oprettet tidligere i samme feature fil. I den perfekte verden vil scenarier som dette aldrig eksisterer. Tagget er tænkt som hjælp til at finde afhængige scenarier, hvis vi en dag kommer på en bedre løsning. Scenarier bør ALDRIG være afhængige af data fra en anden feature fil.

`@flaky`
    Bruges til at angive at en test kan have et tilfældigt udfald. Bør kun bruges midlertidigt indtil årsagen er afklaret. Der kan feks. være tale om en race condition.

`@javascript`
    Bruges når feature eller scenarie afhænger af CSS eller javascript og har behov for en rigtig browser.
    For at køre tests markeret med @javascript er det nødvendigt at have startet Selenium Server - eller vil testen fejle.

`@slow`
    Bruges til scenarier der tager meget lang tid at køre.

`@wip`
    Angiver at testen er under uarbejdelse (work in progres), og derfor skal filtreres fra ved kørsel af hele test suiten, da de ellers vil fejle.

`@anon`
    Bruges til features/scenarier der ikke behøver user authentication for at køre testen.

`@specific_text`
    Angiver tests der afhænger af en specifik tekststreng og derfor har større sandsynlighed for at kræve løbende opdatering.


## Tags der beskriver site tilhørsforhold ##

Disse tags er beregnet til at identificere features (ikke individuelle scenarier) der tilhører samme del af et site. Disse tags bør være det første tag til venstre ovenover feature beskrivelsen.

`Der er endnu ikke defineret tags i denne kategori`


## Tags til at hooke ind i testprocessen ##

Se [http://docs.behat.org/en/v2.5/guides/3.hooks.html](http://docs.behat.org/en/v2.5/guides/3.hooks.html) for at læse mere om hvordan hooks fungere.

`Der er endnu ikke defineret tags i denne kategori`

## Introducering af nye tags ##

Nye tags der introduceres i en feature eller scenarie skal dokumenteres her.

