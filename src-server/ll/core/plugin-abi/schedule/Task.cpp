#include "ll/core/plugin-abi/schedule/Task.h"

#include <atomic>
#include <chrono>
#include <ctime>
#include <iomanip>
#include <optional>
#include <string_view>
#include <thread>

#include <spanstream>

#include "ll/api/io/Logger.h"
#include "ll/api/utils/ErrorUtils.h"
#include "ll/core/LeviLamina.h"

#include "fmt/std.h" // IWYU pragma: keep

namespace ll::schedule::detail {
void printScheduleError(Task& task) noexcept {
    try {
        getLogger().error(
            "Error in schedule task[{}] of {}:",
            task.getId(),
            task.modPtr.expired() ? "unknown mod" : task.modPtr.lock()->getName()
        );
    } catch (...) {}
    error_utils::printCurrentException(getLogger());
}
uint64 nextTaskId() noexcept {
    static std::atomic_uint64_t id{0};
    return id++;
}
static std::optional<time_t> tryParseTime(std::string_view expression, std::string_view format) {
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
} // namespace ll::schedule::detail
