#pragma once

#include <filesystem>
#include <fstream>
#include <mutex>

#include "ll/api/io/Sink.h"

namespace ll::io {
class FileSink : public Sink {
    std::ofstream file;
    std::mutex    mutex;
    LogLevel      flushLevel;

public:
    LLAPI
    FileSink(
        std::filesystem::path const& path,
        Polymorphic<Formatter>       formatter,
        std::ios::openmode           mode = std::ios::out
    );

    LLAPI ~FileSink() override;

    LLAPI void setFormatter(Polymorphic<Formatter> fmter) override;

    LLAPI void append(LogMessageView const& view) override;

    LLAPI void flush() override;

    LLAPI void setFlushLevel(LogLevel level) override;
};
} // namespace ll::io
