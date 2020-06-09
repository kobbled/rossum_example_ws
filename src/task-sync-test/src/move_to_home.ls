/PROG MOVE_TO_HOME
/ATTR
COMMENT = "pose home";
TCD:  STACK_SIZE	= 0,
      TASK_PRIORITY	= 50,
      TIME_SLICE	= 0,
      BUSY_LAMP_OFF	= 0,
      ABORT_REQUEST	= 0,
      PAUSE_REQUEST	= 0;
DEFAULT_GROUP = 1,*,*,*,*;
/MN
 : ! ***************** ;
 : ! Home Position ;
 : ! ***************** ;
 :  ;
 :  ;
 :  ;
 : UTOOL_NUM=1 ;
 : UFRAME_NUM=0 ;
 :  ;
 : J P[1:home] 15% FINE ;
 :  ;
 :  ;
/POS
P[1:""]{
   GP1:
  UF : 0, UT : 1, 
  J1 = 127.834 deg, 
  J2 = 24.311 deg, 
  J3 = -29.462 deg, 
  J4 = -110.295 deg, 
  J5 = 121.424 deg, 
  J6 = 54.899 deg
};
/END
