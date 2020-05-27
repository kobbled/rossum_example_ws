# *****************
# Move to Pose
# ---------------
# for moving robot linearly to
# next pose in karel path
# *****************

TP_GROUPMASK = "1,*,*,*,*"
TP_COMMENT = "gp1 pose move"

# move to PR[80: pr1]
linear_move.to(pr1).at(speed1, 'mm/s').term(FINE)
