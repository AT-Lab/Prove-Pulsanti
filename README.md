# Prove-Pulsanti
Prove Pulsanti con il raspberry e la libreria wiringPi

# Video YouTube
Per maggiori info guardate il video ufficiale sul canale di AT Lab

# Istruzioni per l'uso
Per compilare i file, scaricate i file
```
git clone https://github.com/AT-Lab/Prove-Pulsanti
```
e compilateli con gcc
```
gcc -o Prova0 ProvaPulsanti0 -lwiringPi
gcc -o Prova1 ProvaPulsanti1 -lwiringPi
gcc -o Prova2 ProvaPulsanti2 -lwiringPi
```
e fate partire il file con permessi di amministratore.
```
sudo ./Prova0
sudo ./Prova1
sudo ./Prova2
```

