#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/deps/core/math/Vec2.h"
#include "mc/deps/core/math/Vec3.h"
#include "mc/world/level/ChangeDimensionRequest.h"


class TeleportTarget {
public:
    struct TeleportData {
        Vec3 mDestination;      // this+0x0
        bool mShouldStopRiding; // this+0xC
        int  mCause;            // this+0x10
        int  mEntityType;       // this+0x14
    };

    std::optional<Vec2>                     mRotation;      // this+0x0
    std::optional<TeleportData>             mData;          // this+0xC
    std::unique_ptr<ChangeDimensionRequest> mChangeRequest; // this+0x28
};
