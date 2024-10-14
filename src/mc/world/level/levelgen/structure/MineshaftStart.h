#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/structure/StructureStart.h"

class MineshaftStart : public ::StructureStart {
public:
    // prevent constructor by default
    MineshaftStart& operator=(MineshaftStart const&);
    MineshaftStart(MineshaftStart const&);
    MineshaftStart();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~MineshaftStart() = default;

    MCAPI MineshaftStart(
        class Dimension const&                   dimension,
        class BiomeSource const&                 biomeSource,
        class Random&                            random,
        class ChunkPos const&                    pos,
        class IPreliminarySurfaceProvider const& preliminarySurfaceLevel
    );

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** $vftable();

    template <class... Args>
    auto* ctor$(Args... args) {
        return std::construct_at(this, std::forward<Args>(args)...);
    }

    // NOLINTEND
};
