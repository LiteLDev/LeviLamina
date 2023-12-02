#include "ll/api/schedule/Task.h"
#include "ll/api/Logger.h"
#include "ll/api/base/ErrorInfo.h"

namespace ll::schedule {
std::atomic_ullong TaskId{0};

std::optional<time_t> tryParseTime(std::string const& expression, std::string_view format) {
    std::stringstream ss(expression);
    auto              time_now = std::chrono::system_clock::to_time_t(std::chrono::system_clock::now());
    std::tm           tm{};
    localtime_s(&tm, &time_now);
    if ((ss >> std::get_time(&tm, format.data())).fail()) {
        return std::nullopt;
    }
    return std::mktime(&tm);
}

std::chrono::system_clock::time_point parseTime(std::string const& expression) {

    if (auto res = tryParseTime(expression, "%H:%M:%S"); res) {
        auto time = std::chrono::system_clock::from_time_t(res.value());
        if (std::chrono::system_clock::now() > time) {
            time += std::chrono::hours(24);
        }
        return time;
    }
    return std::chrono::system_clock::from_time_t(
        tryParseTime(expression, "%Y-%m-%d %H:%M:%S")
            .value_or(tryParseTime(expression, "%Y/%m/%d %H:%M:%S").value_or(0))
    );
}

namespace detail {
void printScheduleError() noexcept {
    static Logger logger("Scheduler");

    auto lock = ll::Logger::lock();
    try {
        logger.error("Error in schedule thread [{}]:", std::this_thread::get_id());
    } catch (...) {}
    error_info::printCurrentException(logger);
}
} // namespace detail

} // namespace ll::schedule
