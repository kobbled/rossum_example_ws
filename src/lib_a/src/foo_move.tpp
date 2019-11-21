#*****************
# Move to PR Pos with offset
# ========
# AR[1] = store JPOS pr
# AR[1] = PR Offset Address
# AR[2] = Speed in %
#*****************

TP_GROUPMASK = "1,*,*,*,*"
TP_COMMENT = "move2JPOS"

FINE :=  -1

jnt_speed          := R[90]
jpos_1      := PR[49]

prJPos         := AR[1]
prOffset       := AR[2]
pctspd         := AR[3]

jnt_speed = pctspd

get_joint_position(jpos_1)
indirect('pr', prJPos) = jpos_1

joint_move.to(indirect('pr', prJPos)).
          at(jnt_speed, '%').term(FINE).offset(indirect('pr', prOffset))
