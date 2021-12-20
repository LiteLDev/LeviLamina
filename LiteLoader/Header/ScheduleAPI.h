#pragma once
#include "Global.h"
#include <functional>

///////////////////////////////////////////////////////
// Schedule future callback plans
//
// [Usage]
// 
//   Schedule::nextTick([](){
//      Logger::Error("hello");
//   }, 20);                        // Delay this callback to next game tick (20 ticks = 1 second)
//
//   Schedule::delay([](){
//      Logger::Error("hello");
//   }, 20);                        // Delay this callback for 20 ticks (20 ticks = 1 second)
//
//   Schedule::repeat([](){
//      Logger::Error("hello");
//   }, 40);                        // Schedule this callback once per 40 ticks (20 ticks = 1 second)
//
//   auto sche = Schedule::delayRepeat([](){
//      Logger::Error("hello");
//   }, 20, 60);                    // Delay first call to callback for 20 ticks
//                                  // then schedule this callback once per 60 ticks (20 ticks = 1 second)
//
//   //......
//   sche.cancel();                 // Cancel the schedule
//
/////////////////////////////////////////////////////

class ScheduleTask
{
    unsigned int taskId;

public:
    LIAPI bool cancel();
    LIAPI ScheduleTask(unsigned int taskId);

    inline unsigned int getTaskId()
    {
        return taskId;
    }
};

namespace Schedule
{
    LIAPI ScheduleTask delay(std::function<void(void)> task, unsigned long long tickDelay);
    LIAPI ScheduleTask repeat(std::function<void(void)> task, unsigned long long tickInterval, int maxCount = -1);
    LIAPI ScheduleTask delayRepeat(std::function<void(void)> task, unsigned long long tickDelay, unsigned long long tickInterval, int maxCount = -1);
    LIAPI ScheduleTask nextTick(std::function<void(void)> task);
};