// Milestone 4 - 4/20
// we need arm movement code, more precise movement code (RCS) to account for slipping, and 
detectStart();  
reset arm
Put a while here or a switchcase here to make the detect start a major requirement
moveArm(82, 80);
//turn(DEFAULT_SPEED, NINETYDEG_COUNTS/2);
// move to y coord for apple lineup
moveForwardEncoder(DEFAULT_SPEED, getCounts(17.0));
check_y(22.0, FORWARDS);
//turn to face apple
turn(-DEFAULT_SPEED, NINETYDEG_COUNTS/2);
//move to apple
moveArm(80, 165);
moveForwardEncoder(DEFAULT_SPEED, getCounts(2.0));
//check_x(10.0, FORWARDS);
// Arm movement code
// FIND ARM MIN AND MAX and the range of the the arm mechanism
moveArm(165, 135);
moveForwardEncoder(-DEFAULT_SPEED, getCounts(2.0));
//turn slightly away from ramp
turn(DEFAULT_SPEED, 25);
// back up
moveForwardEncoder(-DEFAULT_SPEED, getCounts(3.0));
// turn back to align
turn(-DEFAULT_SPEED, 25);
// back up to ramp
moveForwardEncoder(-DEFAULT_SPEED, getCounts(10.0));
check_x(30.5, BACKWARDS); // make sure this x aligns well with the 
// turn to ramp
turn(DEFAULT_SPEED, NINETYDEG_COUNTS + 20);
// go up ramp 
moveForwardEncoder(DEFAULT_SPEED, getCounts(15.0));
// get to line
check_y(48.0, FORWARDS);
turn(-DEFAULT_SPEED, NINETYDEG_COUNTS/2);
moveForwardEncoder(DEFAULT_SPEED, getCounts(3.0));
turn(DEFAULT_SPEED, NINETYDEG_COUNTS/2);
check_heading(N);
moveForwardEncoder(DEFAULT_SPEED, getCounts(5.0));
moveArm(140, 170);
moveForwardEncoder(-DEFAULT_SPEED, getCounts(5.0));
turn(-DEFAULT_SPEED, NINETYDEG_COUNTS/2);
moveArm(170, 100);
moveForwardEncoder(DEFAULT_SPEED, getCounts(5.0));
moveArm(100, 165);