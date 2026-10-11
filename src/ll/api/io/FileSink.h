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

    LLNDAPI static std::shared_ptr<FileSink> const& getDefault();

    LLAPI void setFormatter(Polymorphic<Formatter> fmter) override;

    LLAPI void append(LogMessageView const& view) override;

    LLAPI void flush() override;

    LLAPI void setFlushLevel(LogLevel level) override;

    LLAPI void setPolicy(RotatePolicy policy);

    LLAPI void rotate();
};
} // namespace ll::io
