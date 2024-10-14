#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/structure/StructureStart.h"

class NetherFortressStart : public ::StructureStart {
public:
    // prevent constructor by default
    NetherFortressStart& operator=(NetherFortressStart const&);
    NetherFortressStart(NetherFortressStart const&);
    NetherFortressStart();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~NetherFortressStart() = default;

    MCAPI NetherFortressStart(class Random& random, short seaLevel, int chunkX, int chunkZ);

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
