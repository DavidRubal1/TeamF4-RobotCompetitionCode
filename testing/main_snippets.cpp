// ---- small blocks of code used in the main at one point for testing ---- //
    // 3/23/26 movement test - GOOD
    moveForwardsNoEncoder(speed, 3.0);
    turnRightNoEncoder(25, 5.0);
    moveForwardsNoEncoder(-1 * speed, 3.0);

    // 3/24/26 encoder movement test - Alright, Encoders slightly inconsistent
    writeLight();
    moveForwardEncoder(speed, getCounts(3.0));
    turn(25, 36);
    turn(-25, 36);
    moveForwardEncoder(-1 * speed, getCounts(3.0));
    writeLight();


    //***** *ENCODER MOVEMENT TEST* ******//
    // //Test move forwards 5 inches
    turn(speed, 36);
    turn(-1 * speed, 18);
    moveForwardEncoder(speed, getCounts(5.0));

    //********* Encoder output test *********//
    float inches = 3;
    encoderExploration(inches);
    while(!LCD.Touch(&x,&y)); //Wait for screen to be pressed
    while(LCD.Touch(&x,&y)); //Wait for screen to be unpressed
    turn(speed, 72);
    Sleep(0.1);
    turn(-speed, 36);
    Sleep(0.1);

    //3/24/26  Find the threshold for light values using filters
    writeLight();
    //*** 0.44 for on, 1.9 for off ***


    // Movement tests
    moveForwardsNoEncoder(speed, 7.0);
    Sleep(0.5);
    moveForwardsNoEncoder(-1 * speed, 7.0);
    Sleep(0.5);
    moveForwardsNoEncoder(speed, 1);
    Sleep(0.5);
    turnRightNoEncoder(speed, 3.0);
    Sleep(0.5);
    moveForwardsNoEncoder(speed, 20.0);

    moveForwardsNoEncoder(speed, 7.4);
    Sleep(0.5);
    moveForwardsNoEncoder(-1 * speed, 7.4);

    
    while(!LCD.Touch(&x,&y)); //Wait for screen to be pressed
    while(LCD.Touch(&x,&y)); //Wait for screen to be unpressed

    moveForwardsNoEncoder(speed, 8.0);
    Sleep(0.5);
    moveForwardsNoEncoder(-1 * speed, 8.0);

    //encoder movement
    moveForwards(speed, 472);
    Sleep(1.0);
    turnLeft(speed, 239);
    Sleep(1.0);
    moveForwards(speed, 337);
    Sleep(1.0);
    turnRight(speed, 239);
    Sleep(1.0);
    moveForwards(speed, 135);