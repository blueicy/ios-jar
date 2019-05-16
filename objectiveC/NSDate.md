
Find timeInterval of day
-------------------------
<            int year = 2019;
            int month = 5;
            int day = 8;
            int hour = 23;
            int minute = 4;
            int second = 59;
            
            NSCalendar *calendar = [NSCalendar currentCalendar];
            NSDateComponents *components = [[NSDateComponents alloc] init];
            [components setYear:year];
            [components setMonth:month];
            [components setDay:day];
            [components setHour:hour];
            [components setMinute:minute];
            [components setSecond:second];
            NSDate *resultDate = [calendar dateFromComponents:components];
            
            NSTimeInterval dateInterval = [resultDate timeIntervalSince1970];
	
	[components release];			
>


NSDate to int
-----------------
<
    SDateFormatter *formatter = [[NSDateFormatter alloc] init];
    [formatter setDateFormat:@"dd"];

    NSString *stringFromDate = [formatter stringFromDate:[NSDate date]];
    NSInteger integerDate = [stringFromDate integerValue];          
>


