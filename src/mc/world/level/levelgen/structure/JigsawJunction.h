#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/enums/Projection.h"

struct JigsawJunction {
public:
    // prevent constructor by default
    JigsawJunction& operator=(JigsawJunction const&);
    JigsawJunction(JigsawJunction const&);
    JigsawJunction();

public:
    // NOLINTBEGIN
    // symbol: ??0JigsawJunction@@QEAA@HHHHW4Projection@@0@Z
    MCAPI JigsawJunction(
        int          sourceX,
        int          sourceZ,
        int          deltaSourceY,
        int          deltaTargetY,
        ::Projection sourceProjection,
        ::Projection targetProjection
    );

    // symbol: ?getDeltaTargetY@JigsawJunction@@QEBAHXZ
    MCAPI int getDeltaTargetY() const;

    // NOLINTEND
};
