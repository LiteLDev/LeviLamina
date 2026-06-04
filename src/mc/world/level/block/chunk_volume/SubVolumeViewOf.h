#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace ChunkVolume {

template <typename T>
class SubVolumeViewOf {
public:
    using ViewType = gsl::span<const T *>;

    SubVolumeViewOf<const T *>::ViewType mView;
};

} // namespace ChunkVolume
