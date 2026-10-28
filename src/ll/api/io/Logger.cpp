#include "ll/api/io/Logger.h"

#include <shared_mutex>

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

class SinkMap : public ConcurrentDenseMap<std::string, std::shared_ptr<SinkBase>> {
    using Base  = ConcurrentDenseMap<std::string, std::shared_ptr<SinkBase>>;
    using Inner = typename Base::Inner;

public:
    class LockedSubmap {
        Inner const*                        inner;
        std::shared_lock<std::shared_mutex> lock;

    public:
        explicit LockedSubmap(Inner const& inner) : inner(&inner), lock(const_cast<Inner&>(inner)) {}

        auto begin() const { return inner->set_.begin(); }
        auto end() const { return inner->set_.end(); }
    };

    LockedSubmap lockedSubmap(size_t index) const { return LockedSubmap{this->get_inner(index)}; }
};

struct Logger::Impl {
    std::string title;
    LogLevel    level;

    thread::ThreadPoolExecutor& pool;

    SinkMap sinks;

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
            logger->impl->sinks.for_each_m([&](auto& pair) { pair.second->append(msg); });
        } catch (...) {
            printLogError(msg.msg);
        }
    });
} catch (...) {
    printLogError(msg);
}

void Logger::setLevel(LogLevel level) { impl->level = level; }

void Logger::setFlushLevel(LogLevel level) {
    impl->sinks.for_each_m([&](auto& pair) { pair.second->setFlushLevel(level); });
}
void Logger::setFormatter(Polymorphic<Formatter> formatter) {
    impl->sinks.for_each_m([&](auto& pair) { pair.second->setFormatter(formatter); });
}
void Logger::flush() const {
    impl->sinks.for_each_m([&](auto& pair) { pair.second->flush(); });
}

std::shared_ptr<SinkBase> Logger::setSink(std::string_view name, std::shared_ptr<SinkBase> sink) const {
    if (!sink) {
        return removeSink(name);
    }
    std::shared_ptr<SinkBase> old;
    impl->sinks.lazy_emplace_l(
        name,
        [&](auto& pair) { old = std::exchange(pair.second, std::move(sink)); },
        [&](auto const& ctor) { ctor(std::string{name}, std::move(sink)); }
    );
    return old;
}

std::shared_ptr<SinkBase> Logger::removeSink(std::string_view name) const {
    std::shared_ptr<SinkBase> sink;
    impl->sinks.erase_if(name, [&](auto& pair) {
        sink = std::move(pair.second);
        return true;
    });
    return sink;
}

std::shared_ptr<SinkBase> Logger::getSink(std::string_view name) const {
    std::shared_ptr<SinkBase> sink;
    impl->sinks.if_contains(name, [&](auto const& pair) { sink = pair.second; });
    return sink;
}

void Logger::clearSinks() const { impl->sinks.clear(); }

coro::Generator<std::pair<std::string_view, SinkBase&>> Logger::sinks() const {
    for (size_t index = 0; index < impl->sinks.subcnt(); ++index) {
        auto submap = impl->sinks.lockedSubmap(index);
        for (auto const& [name, sink] : submap) {
            co_yield {name, *sink};
        }
    }
}
} // namespace ll::io
