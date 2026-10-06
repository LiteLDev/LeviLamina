#pragma once

#include <filesystem>
#include <memory>

#include "ll/api/io/RotatePolicy.h"
#include "ll/api/io/Sink.h"

namespace ll::io {

/// A sink that writes to a file, optionally rotating it by size and by date.
/// @note Rotation is off by default, so the file is only appended to. Pass a `RotatePolicy` to have
/// it archived; `RotatePolicy{}`'s own defaults are a sensible starting point.
class FileSink : public Sink {
    struct Impl;
    std::unique_ptr<Impl> impl;

public:
    LLAPI
    FileSink(
        std::filesystem::path const& path,
        Polymorphic<Formatter>       formatter,
        RotatePolicy                 policy = RotatePolicy::disabled()
    );

    LLAPI ~FileSink() override;

    LLAPI void setFormatter(Polymorphic<Formatter> fmter) override;

    LLAPI void append(LogMessageView const& view) override;

    LLAPI void flush() override;

    LLAPI void setFlushLevel(LogLevel level) override;

    /// Replaces the rotation policy.
    /// @note Honours `rotateOnOpen` if the file still holds content inherited from a previous run,
    /// so a policy supplied shortly after construction behaves as if it had been passed to it.
    LLAPI void setPolicy(RotatePolicy policy);

    /// Rotates now, regardless of what the policy would decide. Does nothing when the active file is
    /// empty.
    LLAPI void rotate();
};
} // namespace ll::io
