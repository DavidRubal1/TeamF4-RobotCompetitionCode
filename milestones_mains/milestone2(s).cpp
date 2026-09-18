    // Collection of attempts for Milestone 2
    
    // MILESTONE 2 - initial attempt
    // 15 inches from light to ramp
    // 12 ramp is 12 inches long and 3 inches high, 12.36 inches hypotenuse
    // 11.5 inches from top of ramp to middle of line
    // 8? inches up to the light,
    // 8.5 ish inches to the lights, make sure the robot actually pushes it
    // Milestone 2 Code
    // (cds cell detected light)
    moveForwardsNoEncoder(-speed, 1.0);
    Sleep(0.2);
    moveForwardsNoEncoder(speed, 1.0);
    Sleep(0.2);
    //turn(speed - 5, 27);
    turnRightNoEncoder(speed, 2.0);
    Sleep(0.2);
    moveForwardsNoEncoder(speed, 20);
    Sleep(0.2);
    // turn(-1 * (speed - 5), 27);
    Sleep(0.2);
    moveForwardEncoder(speed, getCounts(12));
    Sleep(0.2);
    displayLightColor(5);
    moveForwardsEncoder(-1  * speed, getCounts(1.5));
    moveForwardsEncoder(speed, getCounts(1.5));
    turn(speed, 18); // 45 deg turn right
    to ramp
    moveForwardsEncoder(speed, getCounts(12));
    sleep(0.2);
    up ramp
    moveForwardsEncoder(speed, getCounts(12.36));
    moveForwardsEncoder(speed, getCounts(8));
    turn(-1 * speed, 38);
    move to light, probably write new code for moving until light is sensed?
    moveForwardsEncoder(speed, getCounts(8));
    (cds cell detected light), (getCorrectLight from cdscell)
    turn approc 12.5 degrees either direction
    (based on light from cds cell), turn(speed, 5)

    // TODO: Redo
    // Milestone 2 Attempt 2
    detectStart();
    turn(DEFAULT_SPEED, getHeadingCounts(N));
    check_heading(N);
    moveForwardEncoder(DEFAULT_SPEED, getXYCountsRCS(0, 47));
    // make sure it understeers so that we turn the correct direction
    // maybe change how getHeadingCounts works so that we get the direction back as well********
    // maybe change getheading counts to instead take a coordinate instead of an angle 
    // Get the heading conuts for coordinates
    turn(-DEFAULT_SPEED, getHeadingCounts(W));
    check_heading(W);
    moveForwardEncoder(DEFAULT_SPEED, getXYCountsRCS(14.3,0));
    int directionMult = -1; 
    if(displayLightColor(3.0)){
        directionMult = 1;
    }
    moveForwardEncoder(-DEFAULT_SPEED, getCounts(2.0));
    turn(DEFAULT_SPEED * directionMult, NINETYDEG_COUNTS/9);
    moveArm(80, 170, 3);
    moveForwardEncoder(35, getCounts(2.5));
    moveForwardEncoder(-35, getCounts(2.5));
    moveArm(170, 80, 3);
    turn(DEFAULT_SPEED, getHeadingCounts(E));
    check_heading(E);
    moveForwardEncoder(DEFAULT_SPEED, getXYCountsRCS(28.2, 0));
    turn(DEFAULT_SPEED, getHeadingCounts(S));
    turn(DEFAULT_SPEED, getHeadingCounts(S));
    turn(DEFAULT_SPEED, getHeadingCounts(S));
    moveForwardEncoder(DEFAULT_SPEED, getXYCountsRCS(30, 3));

    // MILESTONE 2 No-RCS Backup
    // make sure to disable RCS initialization for this one
    detectStart();
    turn(DEFAULT_SPEED, NINETYDEG_COUNTS/2);
    moveForwardEncoder(DEFAULT_SPEED, getCounts(25.0));
    turn(-DEFAULT_SPEED, NINETYDEG_COUNTS);
    moveForwardEncoder(DEFAULT_SPEED, getCounts(28.2 - 14.34));
    int directionMult = -1; 
    if(displayLightColor(3.0)){
        directionMult = 1;
    }
    moveForwardEncoder(-DEFAULT_SPEED, getCounts(2.0));
    turn(DEFAULT_SPEED * directionMult, NINETYDEG_COUNTS/9);
    moveArm(80, 170, 3);
    moveForwardEncoder(DEFAULT_SPEED, getCounts(2.5));
    moveForwardEncoder(-DEFAULT_SPEED, getCounts(2.5));
    moveArm(170, 80, 3);
    turn(-DEFAULT_SPEED * directionMult, NINETYDEG_COUNTS/9);
    moveForwardEncoder(-DEFAULT_SPEED, 28.2 - 14.34);
    turn(-DEFAULT_SPEED, NINETYDEG_COUNTS);
    moveForwardEncoder(DEFAULT_SPEED, getCounts(25.0));
