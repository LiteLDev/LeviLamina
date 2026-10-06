#pragma once

#include <chrono>
#include <filesystem>
#include <functional>
#include <string>

#include "ll/api/base/Macro.h"
#include "ll/api/base/StdInt.h"
#include "ll/api/data/TmWithMs.h"

namespace ll::io {

/// How often a file is rotated on a time boundary, independent of its size.
enum class RotateInterval : int {
    None,   ///< Never rotate on time, only on size.
    Hourly, ///< Rotate when the hour of the message changes.
    Daily,  ///< Rotate when the date of the message changes.
};

/// The information available when naming an archive.
/// @note Carries no trace of the active file: the sink prepends its own stem and appends its
/// extension, so a namer only decides how the timestamp and index in between are spelled.
struct ArchiveNameInfo {
    data::TmWithMs time;     ///< The time the rotation was triggered at.
    size_t         index;    ///< Rotations already made within the current interval.
    RotateInterval interval; ///< The policy's interval, which decides the timestamp's precision.
};

/// The subset of a RotatePolicy that is plain data, so it can be reflected into a config file.
/// @note Kept separate from RotatePolicy because the latter carries a std::function, which the
/// reflection based serializer cannot handle.
struct RotateConfig {
    /// Archives an existing, non-empty file when the sink opens it, so each run owns its own file
    /// instead of appending to the previous run's output.
    bool rotateOnOpen = true;

    /// Rotates once writing the next message would grow the file past this many bytes. 0 disables
    /// the size trigger.
    /// @note A single message is never split across files, so one oversized message produces one
    /// oversized file.
    uint64 maxFileSize = 32ull * 1024 * 1024;

    /// Rotates when the message's timestamp crosses this boundary. Evaluated against the time the
    /// message was created rather than the time it reaches the file.
    RotateInterval interval = RotateInterval::Daily;

    /// Compresses archives to gzip on a background thread. The active file is never compressed.
    bool compress = true;

    /// Leaves this many of the newest archives uncompressed, so recently rotated output stays
    /// greppable without unpacking it first.
    size_t keepUncompressed = 7;

    /// Deletes archives that fall outside the limits below. When false, nothing is ever removed.
    bool cleanup = true;

    /// Keeps at most this many archives, counting compressed and plain alike. 0 disables the limit.
    size_t maxFiles = 1024;

    /// Removes archives last modified more than this many days ago. 0 disables the limit.
    int maxAgeDays = 120;

    /// Removes the oldest archives until their total size on disk falls below this. 0 disables the
    /// limit.
    /// @note This counts compressed sizes, so the reachable history depends on `compress`.
    uint64 totalSizeCap = 512ull * 1024 * 1024;
};

/// Describes when a log file is rotated and what happens to the archives afterwards.
/// @note The settings fall into three groups that are evaluated at different times: once when the
/// file is opened, before every message is written, and asynchronously after an archive is created.
class RotatePolicy : public RotateConfig {
public:
    RotatePolicy() = default;
    RotatePolicy(RotateConfig const& config) : RotateConfig(config) {}

    /// The default middle section, `2026-09-19`, plus `.1`, `.2` and so on for later rotations within
    /// the same interval. Hourly rotation adds the hour.
    LLNDAPI static std::string defaultNamer(ArchiveNameInfo const& info);

    /// Spells an archive's name, to which the active file's extension is appended, so a file rotated
    /// on that date archives as `2026-09-19.log`.
    /// @note A custom scheme has to start with a four digit year, otherwise compression and retention
    /// will not recognize its own output.
    std::function<std::string(ArchiveNameInfo const&)> namer{&defaultNamer};

    /// A policy that never rotates
    LLNDAPI static RotatePolicy disabled();
};

} // namespace ll::io
