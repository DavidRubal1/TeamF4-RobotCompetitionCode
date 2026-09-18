// MILESTONE 5  -  26/20
// Code used in main for milestone 5
detectStart();
// turn(-DEFAULT_SPEED, NINETYDEG_COUNTS/2);
// // turn a little more to face the bin
// turn(-DEFAULT_SPEED, NINETYDEG_COUNTS/8);
//turn(-DEFAULT_SPEED, getHeadingCounts(40.0));
turn(-DEFAULT_SPEED, NINETYDEG_COUNTS/2);
turn(-DEFAULT_SPEED, NINETYDEG_COUNTS/5);
// put arm in down position
int lowerPos = 180, highPos = 105;
// move to bin
//moveForwardEncoder(DEFAULT_SPEED, getXYCountsRCS(21.7, 4.0));
moveForwardEncoder(DEFAULT_SPEED, getCounts(5.3));
//moveForwardEncoder(DEFAULT_SPEED, getCounts(7.0));
// turn clockwise, starting from the high pos
int armSpeedDiv = 8;
float moveDist = 1.5;
// make these into function calls to prevent copied code
moveArm(highPos, lowerPos, armSpeedDiv);
moveForwardEncoder(-DEFAULT_SPEED, getCounts(moveDist));
moveArm(lowerPos, highPos, armSpeedDiv);
moveForwardEncoder(DEFAULT_SPEED, getCounts(moveDist));
moveArm(highPos, lowerPos, armSpeedDiv);
moveForwardEncoder(-DEFAULT_SPEED, getCounts(moveDist));
moveArm(lowerPos, highPos, armSpeedDiv);
moveForwardEncoder(DEFAULT_SPEED, getCounts(moveDist));
moveArm(highPos, lowerPos, armSpeedDiv);
moveForwardEncoder(-DEFAULT_SPEED, getCounts(moveDist));
moveArm(lowerPos, highPos, armSpeedDiv);
moveForwardEncoder(DEFAULT_SPEED, getCounts(moveDist));
moveArm(highPos, lowerPos, armSpeedDiv);
//do this all in reverse to turn counterclockwise
moveArm(lowerPos, highPos, armSpeedDiv);
moveForwardEncoder(-DEFAULT_SPEED, getCounts(moveDist));
moveArm(highPos, lowerPos, armSpeedDiv);
moveForwardEncoder(DEFAULT_SPEED, getCounts(moveDist));
moveArm(lowerPos, highPos, armSpeedDiv);
moveForwardEncoder(-DEFAULT_SPEED, getCounts(moveDist));
moveArm(highPos, lowerPos, armSpeedDiv - 1);
moveForwardEncoder(DEFAULT_SPEED, getCounts(moveDist));
moveArm(lowerPos, highPos, armSpeedDiv);
moveForwardEncoder(-DEFAULT_SPEED, getCounts(moveDist));
moveArm(highPos, lowerPos, armSpeedDiv - 1);
moveForwardEncoder(DEFAULT_SPEED, getCounts(moveDist));
moveArm(lowerPos, highPos, armSpeedDiv);
moveForwardEncoder(-DEFAULT_SPEED, getCounts(moveDist));
moveArm(highPos, lowerPos, armSpeedDiv - 1);
moveForwardEncoder(DEFAULT_SPEED, getCounts(moveDist));
moveArm(lowerPos, highPos, armSpeedDiv);
// turn to rotate bin
// turn(DEFAULT_SPEED, getHeadingCounts(18));
// lower arm to finish rotating
// moveArm(highPos, lowerPos);
// turn(-DEFAULT_SPEED, getHeadingCounts(22.0));
// // do previous in reverse
// turn(DEFAULT_SPEED, getHeadingCounts(18));
// moveArm(lowerPos, highPos);
// turn(-DEFAULT_SPEED, getHeadingCounts(22.0));
// moveArm(highPos, lowerPos);
// go back to start
moveForwardEncoder(-DEFAULT_SPEED, getCounts(5.3));
//turn(DEFAULT_SPEED, getHeadingCounts(300));
turn(DEFAULT_SPEED, NINETYDEG_COUNTS/2);
// turn(DEFAULT_SPEED, NINETYDEG_COUNTS/8);
moveForwardEncoder(-DEFAULT_SPEED, getCounts(2.2));