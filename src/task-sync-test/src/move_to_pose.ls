/PROG MOVE_TO_POSE
/ATTR
COMMENT = "gp1 pose move";
TCD:  STACK_SIZE	= 0,
      TASK_PRIORITY	= 50,
      TIME_SLICE	= 0,
      BUSY_LAMP_OFF	= 0,
      ABORT_REQUEST	= 0,
      PAUSE_REQUEST	= 0;
DEFAULT_GROUP = 1,*,*,*,*;
/MN
 : ! ***************** ;
 : ! Move to Pose ;
 : ! --------------- ;
 : ! for moving robot linearly to ;
 : ! next pose in karel path ;
 : ! ***************** ;
 :  ;
 :  ;
 : ! move to PR[80: pr1] ;
 : L PR[80:pr1] R[156:speed1]mm/sec FINE ;
/END
