#include "ll/api/io/Logger.h"

#include <mutex>

#include "ll/api/io/DefaultSink.h"
#include "ll/api/io/LogMessage.h"
#include "ll/api/io/PatternFormatter.h"
#include "ll/api/utils/ErrorUtils.h"
#include "ll/api/utils/StringUtils.h"
#include "ll/api/utils/SystemUtils.h"
#include "ll/core/io/Output.h"

#include "pl/Config.h"

#include "ll/api/thread/ThreadPoolExecutor.h"

namespace ll::io {

static void printLogError(std::string_view msg) noexcept try {
    io::defaultOutput(fmt::format(
        "\x1b[31mERROR IN LOGGER API:\n{}\x1b[91m\n{}\x1b[0m\n",
        error_utils::makeExceptionString(std::current_exception()),
        string_utils::tou8str(msg)
    ));
} catch (...) {
    try {
        io::defaultOutput(fmt::format("\x1b[31mUNKNOWN ERROR IN LOGGER API\x1b[0m\n"));
    } catch (...) {}
}

static thread::ThreadPoolExecutor& getLogPool() {
    static thread::ThreadPoolExecutor ins("logger", 1); // logger need keep some order
    return ins;
}

struct Logger::Impl {
    std::string title;
    LogLevel    level;

    thread::ThreadPoolExecutor& pool;

    std::vector<std::shared_ptr<SinkBase>> sinks;
    std::mutex                             sinkMutex;

    Impl(std::string_view title, thread::ThreadPoolExecutor& pool) : title(title), pool(pool) {}
};
Logger::~Logger() = default;

Logger::Logger(PrivateTag, std::string_view title) : impl(std::make_unique<Impl>(title, getLogPool())) {
    impl->level = (LogLevel)(std::clamp(pl::pl_log_level - 1, 0, 5));
    impl->sinks.push_back(std::make_shared<DefaultSink>());
}

std::string const& Logger::getTitle() { return impl->title; }

LogLevel Logger::getLevel() { return impl->level; }

void Logger::printView(LogLevel level, std::string_view msg) const noexcept {
    if (level > impl->level) {
        return;
    }
    printStr(level, std::string{msg});
}

void Logger::printStr(LogLevel level, std::string&& msg) const noexcept try {
    if (level > impl->level) {
        return;
    }
    impl->pool.execute([logger = shared_from_this(),
                        msg    = LogMessage{std::move(msg), impl->title, level, sys_utils::getLocalTime()}] {
        try {
            std::lock_guard lock{logger->impl->sinkMutex};
            for (auto& sink : logger->impl->sinks) {
                sink->append(msg);
            }
        } catch (...) {
            printLogError(msg.msg);
        }
    });
} catch (...) {
    printLogError(msg);
}

void Logger::setLevel(LogLevel level) { impl->level = level; }

void Logger::setFlushLevel(LogLevel level) {
    std::lock_guard lock{impl->sinkMutex};
    for (auto& sink : impl->sinks) {
        sink->setFlushLevel(level);
    }
}
void Logger::setFormatter(Polymorphic<Formatter> formatter) {
    std::lock_guard lock{impl->sinkMutex};
    for (auto& sink : impl->sinks) {
        sink->setFormatter(formatter);
    }
}
void Logger::flush() const {
    std::lock_guard lock{impl->sinkMutex};
    for (auto& sink : impl->sinks) {
        sink->flush();
    }
}
void Logger::clearSink() const {
    std::lock_guard lock{impl->sinkMutex};
    impl->sinks.clear();
}

size_t Logger::addSink(std::shared_ptr<SinkBase> sink) const {
    std::lock_guard lock{impl->sinkMutex};
    impl->sinks.emplace_back(std::move(sink));
    return impl->sinks.size() - 1;
}

std::shared_ptr<SinkBase> Logger::getSink(size_t index) const {
    std::lock_guard lock{impl->sinkMutex};
    return impl->sinks.at(index);
}

coro::Generator<SinkBase&> Logger::sinks() const {
    std::lock_guard lock{impl->sinkMutex};
    for (auto& sink : impl->sinks) {
        co_yield *sink;
    }
}
} // namespace ll::io
