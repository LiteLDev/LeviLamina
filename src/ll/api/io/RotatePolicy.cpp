#include "ll/api/io/RotatePolicy.h"

#include "fmt/format.h"

namespace ll::io {

std::string RotatePolicy::defaultNamer(ArchiveNameInfo const& info) {
    std::string name = info.interval == RotateInterval::Hourly ? fmt::format("{:%Y-%m-%d_%H}", info.time)
                                                               : fmt::format("{:%Y-%m-%d}", info.time);
    if (info.index > 0) {
        name += fmt::format(".{}", info.index);
    }
    return name;
}

RotatePolicy RotatePolicy::disabled() {
    RotatePolicy res{};
    res.rotateOnOpen = false;
    res.maxFileSize  = 0;
    res.interval     = RotateInterval::None;
    return res;
}

} // namespace ll::io
