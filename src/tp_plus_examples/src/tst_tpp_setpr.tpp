# *****************
# Example showing how to set position with Ka-Boost
# *****************

# ..warning:: set position register numbers for each controller
pr1 := PR[60]
pr2 := PR[61]
pr3 := PR[62]
pr4 := PR[63]
pr5 := PR[64]

use_uframe 1
use_utool 1

#show user
userclear()
usershow()

#setting cartesians poses
# -----------

#set parent frame
pos_setxyz(500, 500, 0, 90, 0, 180, &pr1, 1)
pos_setcfg('F U T, 0, 0, 0', &pr1, 1)

#set child frame
pos_setxyz(1000, 1000, 0, 45, 45, 0, &pr2, 1)

#child frame with respect to world frame
pos_mult(&pr1, &pr2, &pr3)

#print frame
printpr(&pr3, 1)

pause

#setting joint poses
# -----------

#set first pr joints
pos_setjnt6(0, -20, 0, 180, 90, 0, &pr4, 1)

#set addition
pos_setjnt6(0, 20, 0, -180, -90, 0, &pr5, 1)

#add joints together
pos_addjoint(&pr4, &pr5, &pr5)

#print pr
printpr(&pr5, 1)




