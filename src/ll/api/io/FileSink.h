#pragma once

#include <filesystem>
#include <memory>

#include "ll/api/io/RotatePolicy.h"
#include "ll/api/io/Sink.h"

namespace ll::io {

class FileSink : public Sink {
    struct Impl;
    std::shared_ptr<Impl> impl;
    LogLevel              flushLevel{LogLevel::Off};

public:
    LLAPI
    FileSink(
        std::filesystem::path const& path,
        Polymorphic<Formatter>       formatter,
        RotatePolicy                 policy = RotatePolicy::disabled()
    );

    LLAPI ~FileSink() override;

    /// The sink behind `logs/latest.log`, which the loader gives the rotation policy from its config.
    /// @note Each logger writes to the file through a copy of this sink, so they all share its file
    /// state and policy while keeping their own formatter and flush level.
    LLNDAPI static std::shared_ptr<FileSink> const& getDefault();

    LLAPI void setFormatter(Polymorphic<Formatter> fmter) override;

    LLAPI void append(LogMessageView const& view) override;

    LLAPI void flush() override;

    LLAPI void setFlushLevel(LogLevel level) override;

    LLAPI void setPolicy(RotatePolicy policy);

    LLAPI void rotate();
};
} // namespace ll::io
