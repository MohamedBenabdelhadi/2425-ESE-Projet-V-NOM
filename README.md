# 2425-ESE-Projet-V-NOM
Groupe: Mohamed Benabdelhadi, Nouhaila Faris, Oliver Belliard, Valerian Priou.


## BOM (Build Of Mateirals)
### Liste des composants
- Microcontrôleur : STM32G431CBU6 [(ST-Microelectronics)](https://www.st.com/en/microcontrollers-microprocessors/stm32g431cb.html)
- Quartz 16 MHz [(Farnell : 2853935)](https://fr.farnell.com/multicomp/mcsjk-7u-16-00-10-30-80-b-30/quartz-16mhz-10pf-3-2mm-x-2-5mm/dp/2853935?srsltid=AfmBOopnM4CmIZbCnYPaPceE-P2LMk88lLX2_RwnxhyCD5bpNZaeiR3n)
- Connecteur SWD/STLink [(Farnell : 3226055)](https://fr.farnell.com/harwin/m50-3600742/conn-btb-header-14-voies-2-rangs/dp/3226055?srsltid=AfmBOor9wrCqsNTtS0W1yuL9x_f5FiK8xT4XoT9aEqTOFeltcxXGvdPQ)
- Driver moteur : ZXBM5210-SP-13 [(Farnell : 3946343)](https://ch.farnell.com/fr-CH/diodes-inc/zxbm5210-sp-13/motortreiber-40-bis-105-c/dp/3946343?CMP=KNC-GFR-GEN-KWL-AOV-Offer-WF3781360&gad_source=1&gclid=CjwKCAjw3P-2BhAEEiwA3yPhwGV5aPJYUKD97SgLbRqu1EroNwTg01IXEdbgGeSrMMuvoeATZ1GqERoCIYEQAvD_BwE)
- Moteurs : DfRobot FIT0520 ou FIT0521 [(Farnell : 4308214)](https://fr.farnell.com/dfrobot/fit0521/motor-ducteur-cc-34-1-210rpm-6v/dp/4308214)
- Accéléromètre : ADXL343BCCZ-RL [(Farnell : 4030100)](https://fr.farnell.com/analog-devices/adxl343bccz-rl/acc-l-rom-tre-mems-num-axes-x/dp/4030100?srsltid=AfmBOoro-h5zpF1LSuoTRTKOyh85rKB_GdqCSWf61a05DiefwqK19_Ev)
- Régulateur 5V : MP1475S [(Farnell : 3357926)](https://fr.farnell.com/monolithic-power-systems-mps/mp1475sgj-p/conv-dc-dc-sync-buck-500khz-125/dp/3357926)  (à dessiner)
- Régulateur 3.3V : BU33SD5WG-TR [(Farnell : 3011248)](https://fr.farnell.com/rohm/bu33sd5wg-tr/ldo-fixe-3-3v-0-5a-40-a-105-c/dp/3011248)  (à dessiner)
- Batterie NIMH 7.2V 1.3Ah [(RS : 777-0377)](https://fr.rs-online.com/web/p/blocs-batteries-rechargeables/7770377?srsltid=AfmBOoqrzm-2xAbhXLv9pRw4Oh5hJvgaiMIRUeVsAtR-6kuSAeCwSjIW)
- Capteur bordure : GP2Y0A41SK0F [(Farnell : 1618431)](https://fr.farnell.com/sharp/gp2y0a41sk0f/capteur-de-distance/dp/1618431)  (à dessiner)
- Lidar : YDLIDAR X4
- Connecteurs JST 2.54mm
- LED + R/C en 0603
- Cable avec Connecteur du capteur de bordure : A03SR03SR30K152A [(Digikey : 455-3703-ND)](https://www.digikey.fr/fr/products/detail/jst-sales-america-inc./A03SR03SR30K152A/6708479?utm_adgroup=&utm_source=google&utm_medium=cpc&utm_campaign=PMax%20Shopping_Product_High%20ROAS&utm_term=&productid=6708479&utm_content=&utm_id=go_cmp-19538087217_adg-_ad-__dev-c_ext-_prd-6708479_sig-EAIaIQobChMI266NvsG6iAMVgkRBAh3lExJ7EAQYASABEgJQt_D_BwE&gad_source=1&gclid=EAIaIQobChMI266NvsG6iAMVgkRBAh3lExJ7EAQYASABEgJQt_D_BwE)
- Port pour câble du capteur de bordure : BM03B-SRSS-TB(LF)(SN) [(Farnell : 1679128)](https://fr.farnell.com/jst-japan-solderless-terminals/bm03b-srss-tb-lf-sn/embase-entree-sur-le-dessus-3/dp/1679128?&CMP=KNC-GFR-GEN-SKU-MDC-Connectors-Cables-Testing-with-Restricted-MPNs-14-March&mckv=s_dc%7Cpcrid%7C648720547172%7Ckword%7Cbm03b%20srss%20tblfsn%7Cmatch%7Cp%7Cplid%7C%7Cslid%7C%7Cproduct%7C%7Cpgrid%7C129493161308%7Cptaid%7Ckwd-1185703700119%7C&gad_source=1&gclid=Cj0KCQjw9Km3BhDjARIsAGUb4nwrscZTVEgmP52M6HoGuYSXzhf93gxqATGiTRUDuMloynbn5Pj27rIaAikjEALw_wcB) *This product displays (LF)(SN) on the label to indicate RoHS compliance.* (JST_EH_S3B-EH_1x03_P2.50mm_Horizontal)

### Sources d'empreintes
Pour les empreintes officielles (serveur utilisé par Farnell, Mouser...) : https://componentsearchengine.com/ 
> La création de compte est gratuite. <u> **/!\\**</u> La recherche et le téléchargement des empreintes composants doit se faire directement depuis le site et non pas depuis les sites de fournisseurs de composants pour éviter les bugs !

## Diagramme d'architecture
```mermaid
---
title: V-NOM
---

graph TD;
subgraph Robot
    subgraph PCB principal
        subgraph Déplacement
            D[Driver] -..-> Mot[Moteurs];
        end

        subgraph Contrôle
            M(("Microcontroleur fa:fa-twitter")) -- PWM --> D;
            Q[Quartz] ----> M;
        end

        subgraph Interface utilisateur
            M ----> LEDR[**Retour d'état :** LED Rouge, *mode chat*]
            M ----> LEDV[**Retour d'état :** LED Verte, *mode souris*]
            Bo[**Bouttons :** *switch* On/Off, Start, Mode] ----> M;
            Con[**Connecteur ST-Link :** Programmation/Debug, *debug* UART] ----> M;
        end

        subgraph Acquisition
            CD[**Détecter le bord :**Capteurs de distance] -- Analog --> M;
            L[**Détecter des robots environants :** Lidar] -- UART --> M;
            AG[**Détecter les mpacts et l'orientation :** Accéléromètre & Gyroscope] -- SPI / I2C --> M;
        end

        subgraph Déplacement
            Mot == Encodeur : 4 câbles ==> M;
        end

        subgraph Alimentation
            Batterie -- 7.2V --> R5V[Régulateur 5V : **Buck**];
            R5V -- 5V --> R3V[Régulateur 3.3V : **LDO**];

            R3V -- 3.3V --> M;
            R3V -- 3.3V --> AG;

            R5V -- 5V --> L;
            R5V -- 5V --> CD;
        end
    end
end
```


## Strategie
La stratégie de déplacement retenue a été de détecter les bords de la surface de l'arène grâce à des capteurs de distance à l'avant et à l'arrière du robot.  
**En mode souris :** le robot cherche à garder la plus grande distance possible du robot adverse ("chat"), tout en évitant les bords.  
**En mode chat :** le robot cherche à entrer en contact avec le robot adverse ("souris") par colision.  
La détection de la position du robot adverse se fait grâce au capteur Lidar qui permet de déterminer une trajectoire en temps réel. La détection de la colision est faite grâce à l'accéléromètre.


## Schémas utiles
![image](https://github.com/user-attachments/assets/46c6d10b-ff33-4031-baca-c4026fec3046)


## Astuces
Pour mettre à jour une branche à partir de la branche principale (```main```) : 
```bash
git rebase master
```
Pour se lancer avec le **protocole SPI** en STM32 c'est plutôt utile de regarder [le site officiel](https://wiki.st.com/stm32mcu/wiki/Getting_started_with_SPI#What_is_Serial_Peripheral_Interface_-28SPI-29--).


## Notes popur finir le schéma électronique

> - Il faut prévoir un pin GPIO pour le Chip Select (CS) du SPI de l'accéléromètre.  
> - Il faut prévoir un pin pour le bouton RESET.
> - Il faut prévoir un pin pour le BOOT.