/PROG foo_move
  /ATTR
  COMMENT = "foo_move";
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
 : R[90:speed_Pos]=(AR[3]) ;
 :  ;
 : PR[AR[1]]=JPOS ;
 :  ;
 : J PR[AR[1]] R[90:speed_Pos]% FINE Offset,PR[AR[2]] ;
 :  ;
 /END
 