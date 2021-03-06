/*
 * File:   global.h
 * Author: pehladik
 *
 * Created on 21 avril 2011, 12:14
 */

#include "global.h"

RT_TASK tServeur;
RT_TASK tconnect;
RT_TASK tmove;
RT_TASK tenvoyer;
RT_TASK tcalibrationArene;
RT_TASK ttraitementImage;
RT_TASK treloadWatchdog;
RT_TASK tetatBatterie;

RT_MUTEX mutexEtat;
RT_MUTEX mutexMove;
RT_MUTEX mutexCompteurRobot; // Mutex pour consulter la variable partagée compteurRobot
RT_MUTEX mutexTypeCalibration;
RT_MUTEX mutexAreneSauvegarde;
RT_MUTEX mutexCalibration;
RT_MUTEX mutexCalculPosition;
RT_MUTEX mutexCommCamera;


RT_SEM semConnecterRobot;
RT_SEM semCalibrationArene;
RT_SEM semWatchdog;
RT_SEM semConnecterCamera;
RT_QUEUE queueMsgGUI;

int etatCommMoniteur = 1;
int etatCommCamera = 1;
int etatCommRobot = 1;
int compteurRobot = 0;
int typeCalibration=1;
DArena *areneSauvegarde=NULL;
int calibration=0;
int calculPosition = 0;

DRobot *robot;
DMovement *move;
DServer *serveur;
DCamera *camera;
DBattery *batterie;


int MSG_QUEUE_SIZE = 10;

int PRIORITY_TSERVEUR = 50;
int PRIORITY_TCONNECT = 50;
int PRIORITY_TMOVE = 40;
int PRIORITY_TENVOYER = 55;
int PRIORITY_TETATBATTERIE = 10;
int PRIORITY_TRELOADWATCHDOG = 45;
int PRIORITY_TTRAITEMENTIMAGE = 30;
int PRIORITY_TCALIBRATION = 35 ;


