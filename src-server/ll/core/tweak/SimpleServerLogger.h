#pragma once

#include <memory>

namespace ll {
struct SimpleServerLoggerConfig {
    bool enabled          = false;
    bool playerChat       = true;
    bool playerCommand    = true;
    bool playerPermission = true;
};
struct SimpleServerLogger {
    struct Impl;
    std::unique_ptr<Impl> impl;

    void call(SimpleServerLoggerConfig const&);
    SimpleServerLogger();
    ~SimpleServerLogger();
};
} // namespace ll
