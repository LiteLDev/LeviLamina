#include <string>
#include <Global.h>
#include <LoggerAPI.h>
#include <ScheduleAPI.h>
extern Logger logger;

LIAPI void OutputEventError(const std::string& errorMsg, const std::string& eventName, const std::string& pluginName)
{
	logger.error("Please upgrade the plugin <{}>, or it will not work properly!!!", pluginName);
}

namespace Schedule
{
    LIAPI ScheduleTask delay(std::function<void(void)> task, unsigned long long tickDelay)
    { return delay(task, tickDelay, nullptr); }
    LIAPI ScheduleTask repeat(std::function<void(void)> task, unsigned long long tickInterval, int maxCount = -1)
    { return repeat(task, tickInterval, maxCount, nullptr); }
    LIAPI ScheduleTask delayRepeat(std::function<void(void)> task, unsigned long long tickDelay, unsigned long long tickInterval, int maxCount = -1)
    { return delayRepeat(task, tickDelay, tickInterval, maxCount, nullptr); }
    LIAPI ScheduleTask nextTick(std::function<void(void)> task)
    { return nextTick(task, nullptr); }
}