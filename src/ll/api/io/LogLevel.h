#pragma once

namespace ll::io {
class Logger;
enum class LogLevel : int {
    Off = -1,
    Fatal,
    Error,
    Warn,
    Info,
    Debug,
    Trace,
};
} // namespace ll::io
