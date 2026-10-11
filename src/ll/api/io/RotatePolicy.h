#pragma once

#include <chrono>
#include <filesystem>
#include <functional>
#include <string>

#include "ll/api/base/Macro.h"
#include "ll/api/base/StdInt.h"
#include "ll/api/data/TmWithMs.h"

namespace ll::io {

enum class RotateInterval : int {
    None,
    Hourly,
    Daily,
};

struct ArchiveNameInfo {
    data::TmWithMs time;
    size_t         index;
    RotateInterval interval;
};

struct RotateConfig {
    bool rotateOnOpen = true;

    uint64 maxFileSize = 32ull * 1024 * 1024;

    RotateInterval interval = RotateInterval::Daily;

    bool compress = true;

    size_t keepUncompressed = 7;

    bool cleanup = true;

    size_t maxFiles = 1024;

    int maxAgeDays = 120;

    uint64 totalSizeCap = 512ull * 1024 * 1024;
};

class RotatePolicy : public RotateConfig {
public:
    RotatePolicy() = default;
    RotatePolicy(RotateConfig const& config) : RotateConfig(config) {}

    LLNDAPI static std::string defaultNamer(ArchiveNameInfo const& info);

    std::function<std::string(ArchiveNameInfo const&)> namer{&defaultNamer};

    LLNDAPI static RotatePolicy disabled();
};

} // namespace ll::io
