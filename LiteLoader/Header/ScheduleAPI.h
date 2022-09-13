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

#include <Global.h>
#include <Utils/WinHelper.h>

/**
 * \~chinese
 * @brief 计划任务
 *
 *
 * \~english
 * @brief The scheduled task
 */
class ScheduleTask {
public:
    /**
     * \~chinese
     * @brief 取消该计划任务。
     *
     * @return 若成功取消，为真；否则为假。
     *
     *
     * \~english
     * @brief Cancel the scheduled task.
     *
     * @return True if canceled; otherwise false.
     */
    LIAPI bool cancel();

    LIAPI ScheduleTask() = default;
    LIAPI ScheduleTask(unsigned int taskId);

    inline unsigned int getTaskId() {
        return taskId;
    }

    /**
     * \~chinese
     * @brief 查询该计划任务是否已完成。
     *
     * @return 若已完成，为真；否则为假。
     *
     * \~english
     * @brief Check if the scheduled task is finished.
     *
     * @return True if finished; otherwise false.
     */
    LIAPI bool isFinished() const;

private:
    unsigned int taskId;
};

/**
 * \~chinese
 * @brief 计划任务系统
 *
 * @par 示例程序：
 * @code
 * // 在20个游戏刻后做一些事情
 * auto task = Schedule::delay(
 *   [](){
 *     // 做一些事情
 *   },
 *   20
 * );
 *
 * // 取消计划任务
 * task.cancel();
 * @endcode
 * 
 * @note 你不应假设每两个游戏刻间隔0.05秒，因为Minecraft并不能保证每秒20个游戏刻。
 *
 *
 * \~english
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
 * \~chinese
 * @brief 在 `tickDelay` 个游戏刻后执行函数。
 *
 * @param task 被执行的函数
 * @param tickDelay 延迟的游戏刻
 * @return 计划任务
 * 
 * 
 * \~english
 * @brief Delay `tickDelay` ticks to execute the function.
 * 
 * @param task The function to execute
 * @param tickDelay The delayed ticks
 * @return The scheduled task
 */
LIAPI ScheduleTask delay(std::function<void(void)> task, unsigned long long tickDelay, HMODULE handle = GetCurrentModule());

/**
 * \~chinese
 * @brief 每 `tickInterval` 个游戏刻执行一次函数。
 *
 * @param task 被执行的函数
 * @param tickInverval 每个执行周期的游戏刻
 * @param maxCount 最多执行的次数，-1为永远执行
 * @return 计划任务
 * 
 * 
 * \~english
 * @brief Execute the function every `tickInterval` ticks.
 * 
 * @param task The function to execute
 * @param tickInterval The ticks in an interval
 * @param maxCount The maximum number of executions, -1 means the function will always execute
 * @return The scheduled task
 */
LIAPI ScheduleTask repeat(std::function<void(void)> task, unsigned long long tickInterval, int maxCount = -1, HMODULE handle = GetCurrentModule());

/**
 * \~chinese
 * @brief 在 `tickDelay` 个游戏刻后，每 `tickInterval` 个游戏刻执行一次函数。
 *
 * @param task 被执行的函数
 * @param tickDelay 延迟的游戏刻
 * @param tickInverval 每个执行周期的游戏刻
 * @param maxCount 最多执行的次数，-1为永远执行
 * @return 计划任务
 * 
 * 
 * \~english
 * @brief After `tickDelay` ticks, execute the function every `tickInterval` ticks.
 * 
 * @param task The function to execute
 * @param tickDelay The delayed ticks
 * @param tickInterval The ticks in an interval
 * @param maxCount The maximum number of executions, -1 means the function will always execute
 * @return The scheduled task
 */
LIAPI ScheduleTask delayRepeat(std::function<void(void)> task, unsigned long long tickDelay, unsigned long long tickInterval, int maxCount = -1, HMODULE handle = GetCurrentModule());

/**
 * \~chinese
 * @brief 在下一个游戏刻执行函数。
 * 
 * @param task 被执行的函数
 * @return 计划任务
 * 
 * 
 * \~english
 * @brief Execute the function the next tick.
 * 
 * @param task The function to execute
 * @return The scheduled task
 */
LIAPI ScheduleTask nextTick(std::function<void(void)> task, HMODULE handle = GetCurrentModule());

}; // namespace Schedule