//
//  CTDAppDelegate.h
//  Countdown
//
//  Created by Chris Cieslak on 6/18/13.
//  Copyright (c) 2013 Stand Alone. All rights reserved.
//

#import <Cocoa/Cocoa.h>
#import "FMDatabase.h"
#import "MLCalendarView.h"

@interface CTDAppDelegate : NSObject <NSApplicationDelegate, NSWindowDelegate,MLCalendarViewDelegate>
{
    bool ShowOnTop;
    int count;
    bool Paused;
    
    int IRQCount;
    NSDate *BreaktimeStart;
    int PlanTime;
    NSTimer *BlinkTimer;
    NSTimer *TipsTimer;
    bool MouseMoved;
    int MouseSleepSecond;
    int days;
    
    NSTimer * pauseTimer;
    NSDate *BeginDay;
}


@property (weak) IBOutlet NSButton *Pause2MinsButton;

@property (weak) IBOutlet NSButton *SaveButton;

@property (weak) IBOutlet NSTextField *GitStatus;


@property (weak) IBOutlet NSButton *StartButton2;


@property (weak) IBOutlet NSTextField *Today;

@property (weak) IBOutlet NSDateFormatter *dateFormatter;

@property (weak) IBOutlet NSTextField *EndDate;

@property (strong) NSPopover* calendarPopover;

@property (strong) MLCalendarView*calendarView;



@property (weak) IBOutlet NSTextField *GoalTextview;

@property (unsafe_unretained) IBOutlet NSTextView *notes;


@property (weak) IBOutlet NSView *GoalBox;


@property (unsafe_unretained) IBOutlet NSWindow *GoalWindow;
@property (weak) IBOutlet NSTextField *GoalInfo;

@property (nonatomic, retain) NSString * dbPath;
@property (assign) IBOutlet NSWindow *window;

@property (unsafe_unretained) IBOutlet NSWindow *BreakTimeWindow;
@property (weak) IBOutlet NSTextField *BreakInfo;


@property (strong) IBOutlet NSWindow *WorkingTable;

-(void)CheckMouse:(NSTimer *)timer;
- (void)timerFired:(NSTimer *)timer;
- (IBAction)quit:(id)sender;
- (IBAction)showHidePanel:(id)sender;
- (IBAction)showDatePanel:(id)sender;
- (IBAction)TapedStart:(NSButton *)sender;
-(void)SaveData;
-(void)ShowTime:(long)minutes seconds:(long)seconds;


@property (weak) IBOutlet NSTextField *CurrentGoal;

@property (weak) IBOutlet NSButton *CurrentGoalButton;


@property (weak) IBOutlet NSButton *StartButton;

@property (unsafe_unretained) IBOutlet NSTextView *APlanView;


@property (unsafe_unretained) IBOutlet NSTextView *A7DaysPlanView;

@property (unsafe_unretained) IBOutlet NSTextView *GoalView;

@property (unsafe_unretained) IBOutlet NSTextView *BPlanView;

@property (weak) IBOutlet NSView *TimerView;
@property (weak) IBOutlet NSProgressIndicator *ProgressBar;
@property (weak) IBOutlet NSTextField *CommandLine;

@property (weak) IBOutlet NSTextField *TimeLabel;
@property (weak) IBOutlet NSMenu *menu;
@property (weak) IBOutlet NSWindow *datePickerPanel;
@property (weak) IBOutlet NSDatePicker *datePicker;

@property (strong) NSCalendar *calendar;
@property (strong) NSTimer *timer;
@property (strong) NSDate *countdownDate;
@property (strong) NSStatusItem *statusItem;
@property (assign) BOOL timerWindowVisible;


@property (weak) IBOutlet NSButton *Days;



@end
