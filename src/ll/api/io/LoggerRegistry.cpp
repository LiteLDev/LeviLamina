#include "ll/api/io/LoggerRegistry.h"

#include <mutex>

#include "ll/api/base/Containers.h"

namespace ll::io {
struct LoggerRegistry::Impl {
    std::mutex                                   mutex;
    DenseMap<std::string, std::weak_ptr<Logger>> loggers;
};
LoggerRegistry::LoggerRegistry() : impl(std::make_unique<Impl>()) {}
LoggerRegistry::~LoggerRegistry() = default;

LoggerRegistry& LoggerRegistry::getInstance() {
    static LoggerRegistry ins;
    return ins;
}

std::shared_ptr<Logger> LoggerRegistry::getOrCreate(std::string_view title) {
    std::lock_guard lock{impl->mutex};
    auto&           weak = impl->loggers[title];

    std::shared_ptr<ll::io::Logger> shared = weak.lock();
    if (!shared) {
        shared = std::make_shared<Logger>(Logger::PrivateTag{}, title);
        weak   = shared;
    }
    return shared;
}
std::shared_ptr<Logger> LoggerRegistry::tryGet(std::string_view title) {
    std::lock_guard                 lock{impl->mutex};
    std::shared_ptr<ll::io::Logger> shared;
    impl->loggers.if_contains(title, [&](auto const& pair) { shared = pair.second.lock(); });
    return shared;
}
bool LoggerRegistry::erase(std::string_view title) {
    std::lock_guard lock{impl->mutex};
    return impl->loggers.erase(title);
}
coro::Generator<Logger&> LoggerRegistry::iter() {
    std::lock_guard lock{impl->mutex};
    for (auto& p : impl->loggers) {
        auto shared = p.second.lock();
        if (shared) {
            co_yield *shared;
        }
    }
}

} // namespace ll::io
