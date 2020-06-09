/PROG FOO_MOVE
/ATTR
COMMENT = "move2JPOS";
TCD:  STACK_SIZE	= 0,
      TASK_PRIORITY	= 50,
      TIME_SLICE	= 0,
      BUSY_LAMP_OFF	= 0,
      ABORT_REQUEST	= 0,
      PAUSE_REQUEST	= 0;
DEFAULT_GROUP = 1,*,*,*,*;
/MN
 : ! ***************** ;
 : ! Move to PR Pos with offset ;
 : ! ======== ;
 : ! AR[1] = store JPOS pr ;
 : ! AR[1] = PR Offset Address ;
 : ! AR[2] = Speed in % ;
 : ! ***************** ;
 :  ;
 :  ;
 :  ;
 :  ;
 :  ;
 : R[90:jnt_speed]=AR[3] ;
 :  ;
 : PR[49:jpos_1]=JPOS ;
 : PR[AR[1]]=PR[49:jpos_1] ;
 :  ;
 : J PR[AR[1]] R[90:jnt_speed]% FINE Offset,PR[AR[2]] ;
/END
