#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/structure/Projection.h"

struct JigsawJunction {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 12> mUnk4d5c4c;
    ::ll::UntypedStorage<4, 4>  mUnk43184a;
    ::ll::UntypedStorage<4, 4>  mUnkdb77fd;
    ::ll::UntypedStorage<1, 1>  mUnkbf844f;
    ::ll::UntypedStorage<1, 1>  mUnk4368b8;
    // NOLINTEND

public:
    // prevent constructor by default
    JigsawJunction& operator=(JigsawJunction const&);
    JigsawJunction(JigsawJunction const&);
    JigsawJunction();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI JigsawJunction(
        int          sourceX,
        int          sourceZ,
        int          deltaSourceY,
        int          deltaTargetY,
        ::Projection sourceProjection,
        ::Projection targetProjection
    );

    MCAPI int getDeltaTargetY() const;
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        int          sourceX,
        int          sourceZ,
        int          deltaSourceY,
        int          deltaTargetY,
        ::Projection sourceProjection,
        ::Projection targetProjection
    );
    // NOLINTEND
};
