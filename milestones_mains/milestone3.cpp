    // 3/25/26 Milestone 3 attempt 
    // - it worked, needed to get rid of hot glue on treads to prevent slipping
    detectStart();
    turn(speed, NINETYDEG_COUNTS/2);
    moveForwardEncoder(speed, getCounts(12));
    Sleep(0.2);
    // RCS to the good position
    moveForwardEncoder(speed, getCounts(19));
    Sleep(0.2);
    turn(-speed, NINETYDEG_COUNTS + 1);
    moveForwardEncoder(35, getCounts(17));
    moveForwardEncoder(-35, getCounts(12));
    moveForwardEncoder(-speed, getCounts(13));
    while(!LCD.Touch(&x,&y)); //Wait for screen to be pressed
    while(LCD.Touch(&x,&y)); //Wait for screen to be unpressed
    moveForwardEncoder(-speed, getCounts(10));
    while(!LCD.Touch(&x,&y)); //Wait for screen to be pressed
    while(LCD.Touch(&x,&y)); //Wait for screen to be unpressed
    writeLight();