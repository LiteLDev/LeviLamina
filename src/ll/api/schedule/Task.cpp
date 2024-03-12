#include "ll/api/schedule/Task.h"

#include <atomic>
#include <chrono>
#include <ctime>
#include <iomanip>
#include <optional>
#include <spanstream>
#include <string_view>
#include <thread>

#include "ll/api/Logger.h"
#include "ll/api/utils/ErrorUtils.h"
#include "ll/core/LeviLamina.h"

#include "fmt/std.h" // IWYU pragma: keep

namespace ll::schedule {
inline namespace task {
std::atomic_ullong taskId{0};

std::optional<time_t> tryParseTime(std::string_view expression, std::string_view format) {
    std::tm tm{};
    auto    time_now = std::chrono::system_clock::to_time_t(std::chrono::system_clock::now());
    localtime_s(&tm, &time_now);
    if (std::ispanstream{expression} >> std::get_time(&tm, format.data())) {
        return std::mktime(&tm);
    }
    return std::nullopt;
}

std::chrono::system_clock::time_point parseTime(std::string_view expression) {

    if (auto res = tryParseTime(expression, "%H:%M:%S"); res) {
        auto time = std::chrono::system_clock::from_time_t(*res);
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
} // namespace task
namespace detail {
void printScheduleError() noexcept {
    auto lock = ll::Logger::lock();
    try {
        logger.error("Error in schedule thread [{}]:", std::this_thread::get_id());
    } catch (...) {}
    error_utils::printCurrentException(logger);
}
} // namespace detail

} // namespace ll::schedule
