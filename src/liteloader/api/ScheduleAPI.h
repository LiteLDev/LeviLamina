/*
MIT License

Copyright (c) 2022 LiteLDev

Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the "Software"), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in all
copies or substantial portions of the Software.
*/

#pragma once

#include <functional>

#include "liteloader/api/Global.h"
#include "liteloader/api/utils/WinHelper.h"

/**
 * @brief The scheduled task
 */
class ScheduleTask {
public:
    /**
     * @brief Cancel the scheduled task.
     *
     * @return True if canceled; otherwise false.
     */
    LLAPI bool cancel();

    LLAPI ScheduleTask() = default;
    LLAPI ScheduleTask(unsigned int taskId);

    inline unsigned int getTaskId() {
        return taskId;
    }

    /**
     * @brief Check if the scheduled task is finished.
     *
     * @return True if finished; otherwise false.
     */
    LLAPI bool isFinished() const;

private:
    unsigned int taskId;
};

/**
 * @brief The schedule system
 *
 * @par Example:
 * @code
 * // Do some thing after 20 ticks
 * auto task = Schedule::delay(
 *   [](){
 *     // Do some thing
 *   },
 *   20
 * );
 *
 * // Cancel the task
 * task.cancel();
 * @endcode
 * 
 * @note You should not assume a 0.05s gap between two ticks, for Minecraft does not guarantee 20 ticks per second.
 */
namespace Schedule {

/**
 * @brief Delay `tickDelay` ticks to execute the function.
 * 
 * @param task The function to execute
 * @param tickDelay The delayed ticks
 * @return The scheduled task
 */
LLAPI ScheduleTask delay(std::function<void(void)> task, unsigned long long tickDelay, HMODULE handle = GetCurrentModule());

/**
 * @brief Execute the function every `tickInterval` ticks.
 * 
 * @param task The function to execute
 * @param tickInterval The ticks in an interval
 * @param maxCount The maximum number of executions, -1 means the function will always execute
 * @return The scheduled task
 */
LLAPI ScheduleTask repeat(std::function<void(void)> task, unsigned long long tickInterval, int maxCount = -1, HMODULE handle = GetCurrentModule());

/**
 * @brief After `tickDelay` ticks, execute the function every `tickInterval` ticks.
 * 
 * @param task The function to execute
 * @param tickDelay The delayed ticks
 * @param tickInterval The ticks in an interval
 * @param maxCount The maximum number of executions, -1 means the function will always execute
 * @return The scheduled task
 */
LLAPI ScheduleTask delayRepeat(std::function<void(void)> task, unsigned long long tickDelay, unsigned long long tickInterval, int maxCount = -1, HMODULE handle = GetCurrentModule());

/**
 * @brief Execute the function the next tick.
 * 
 * @param task The function to execute
 * @return The scheduled task
 */
LLAPI ScheduleTask nextTick(std::function<void(void)> task, HMODULE handle = GetCurrentModule());

}; // namespace Schedule