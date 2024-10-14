#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct Bounds {
public:
    // Bounds inner types define
    enum class Option {};

public:
    // prevent constructor by default
    Bounds& operator=(Bounds const&);
    Bounds(Bounds const&);
    Bounds();

public:
    // NOLINTBEGIN
    MCAPI Bounds(class ChunkPos const&, class ChunkPos const&);

    MCAPI Bounds(class BlockPos const&, class BlockPos const&, int, ::Bounds::Option);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    template <class... Args>
    auto* ctor$(Args... args) {
        return std::construct_at(this, std::forward<Args>(args)...);
    }

    // NOLINTEND
};
