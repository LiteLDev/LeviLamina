#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace ChunkVolume {

template <typename T>
class SubVolumeViewOf {
public:
    using ViewType = gsl::span<T const*>;

    SubVolumeViewOf<T const*>::ViewType mView;
};

} // namespace ChunkVolume
