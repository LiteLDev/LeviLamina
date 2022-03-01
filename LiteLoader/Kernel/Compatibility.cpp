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

LIAPI std::wstring ANSI2Unicode(const std::string& str)
{
    std::wstring ret;
    std::mbstate_t state = {};
    const char* src = str.data();
    size_t len = std::mbsrtowcs(nullptr, &src, 0, &state);
    if (static_cast<size_t>(-1) != len) {
        std::unique_ptr< wchar_t[] > buff(new wchar_t[len + 1]);
        len = std::mbsrtowcs(buff.get(), &src, len, &state);
        if (static_cast<size_t>(-1) != len) {
            ret.assign(buff.get(), len);
        }
    }
    return ret;
}