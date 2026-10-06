#pragma once

#include <memory>
#include <vector>

#include "ll/api/io/FileSink.h"
#include "ll/api/io/Sink.h"

namespace ll::io {

/// The shared sink behind `logs/latest.log`, rotated according to the loader's configuration.
/// @note Every logger writes into this one instance, so changing its formatter or flush level
/// affects the whole log file rather than a single logger's share of it.
LLNDAPI std::shared_ptr<FileSink> const& getDefaultFileSink();

/// The console and file sinks a logger starts out with.
LLNDAPI std::vector<std::shared_ptr<SinkBase>> makeDefaultSinks();

/// Applies a rotation policy to the shared log file, and rotates immediately when the policy asks
/// for it.
/// @note Called by the loader once its configuration is available. The file starts out unrotated
/// because loading that configuration already writes to it.
LLAPI void initDefaultFileSink(RotateConfig const& config);

} // namespace ll::io
