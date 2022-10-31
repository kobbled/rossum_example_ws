# *****************
# Example showing how to set position with Ka-Boost
# *****************

use_uframe 1
use_utool 1

#show user
userclear()
usershow()

#setting cartesians poses
# -----------

#set parent frame (x, y, z, w, p, r)
pr1 := LPR[]
pr1.group(1) = Pos::setxyz(500, 500, 0, 90, 0, 180)
pr1.group(1) = Pos::setcfg('F U T, 0, 0, 0')

#set child frame
pr2 := LPR[]
pr2.group(1) = Pos::setxyz(1000, 1000, 0, 45, 45, 0)

#child frame with respect to world frame
pr3 := LPR[]
pr3 = Pos::mult(&pr1, &pr2)

#print frame (reg num, group)
printpr(&pr3, 1)


#setting joint poses
# -----------

#set first pr joints
pr4 := LPR[]
pr4.group(1) = Pos::setjnt6(0, -20, 0, 180, 90, 0)

#set addition
pr5 := LPR[]
pr5.group(1) = Pos::setjnt6(0, 20, 0, -180, -90, 0)

#add joints together
pr5 = Pos::addjoint(&pr4, &pr5)

#print pr
printpr(&pr5, 1)




