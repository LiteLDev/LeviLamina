#include "ll/api/io/Logger.h"

#include <mutex>

#include "ll/api/base/Containers.h"
#include "ll/api/io/ConsoleSink.h"
#include "ll/api/io/FileSink.h"
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
    io::defaultOutput(
        fmt::format(
            "\x1b[31mERROR IN LOGGER API:\n{}\x1b[91m\n{}\x1b[0m\n",
            error_utils::makeExceptionString(std::current_exception()),
            string_utils::tou8str(msg)
        )
    );
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

    SmallStringMap<std::shared_ptr<SinkBase>> sinks;
    std::mutex                                sinkMutex;

    Impl(std::string_view title, thread::ThreadPoolExecutor& pool) : title(title), pool(pool) {}
};
Logger::~Logger() = default;

Logger::Logger(PrivateTag, std::string_view title) : impl(std::make_unique<Impl>(title, getLogPool())) {
    impl->level = (LogLevel)(std::clamp(pl::pl_log_level - 1, 0, 5));
    impl->sinks.emplace("ll_default_console", std::make_shared<ConsoleSink>());
    impl->sinks.emplace("ll_default_file", std::make_shared<FileSink>(*FileSink::getDefault()));
}

std::string const& Logger::getTitle() const noexcept { return impl->title; }

LogLevel Logger::getLevel() const noexcept { return impl->level; }

bool Logger::shouldLog(LogLevel level) const noexcept { return level <= impl->level; }

void Logger::printStr(LogLevel level, std::string&& msg) const noexcept try {
    impl->pool.execute([logger = shared_from_this(),
                        msg    = LogMessage{std::move(msg), impl->title, level, sys_utils::getLocalTime()}] {
        try {
            std::lock_guard lock{logger->impl->sinkMutex};
            for (auto& [name, sink] : logger->impl->sinks) {
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
    for (auto& [name, sink] : impl->sinks) {
        sink->setFlushLevel(level);
    }
}
void Logger::setFormatter(Polymorphic<Formatter> formatter) {
    std::lock_guard lock{impl->sinkMutex};
    for (auto& [name, sink] : impl->sinks) {
        sink->setFormatter(formatter);
    }
}
void Logger::flush() const {
    std::lock_guard lock{impl->sinkMutex};
    for (auto& [name, sink] : impl->sinks) {
        sink->flush();
    }
}

std::shared_ptr<SinkBase> Logger::setSink(std::string_view name, std::shared_ptr<SinkBase> sink) const {
    if (!sink) {
        return removeSink(name);
    }
    std::lock_guard lock{impl->sinkMutex};
    return std::exchange(impl->sinks[name], std::move(sink));
}

std::shared_ptr<SinkBase> Logger::removeSink(std::string_view name) const {
    std::lock_guard lock{impl->sinkMutex};
    auto            it = impl->sinks.find(name);
    if (it == impl->sinks.end()) {
        return nullptr;
    }
    auto sink = std::move(it->second);
    impl->sinks.erase(it);
    return sink;
}

std::shared_ptr<SinkBase> Logger::getSink(std::string_view name) const {
    std::lock_guard lock{impl->sinkMutex};
    auto            it = impl->sinks.find(name);
    return it == impl->sinks.end() ? nullptr : it->second;
}

void Logger::clearSinks() const {
    std::lock_guard lock{impl->sinkMutex};
    impl->sinks.clear();
}

coro::Generator<std::pair<std::string_view, SinkBase&>> Logger::sinks() const {
    std::lock_guard lock{impl->sinkMutex};
    for (auto& [name, sink] : impl->sinks) {
        co_yield {name, *sink};
    }
}
} // namespace ll::io
