
#pragma once
#include "mc/math/Vec3.h"
#include "mc/network/NetworkIdentifier.h"
#include "mc/world/ActorRuntimeID.h"

namespace ll::dimension {

class DimensionUtils {
public:
    LLAPI static void
    sendEmptyChunks(const NetworkIdentifier& netId, const Vec3& position, int radius, bool forceUpdate);
    LLAPI static void fakeChangeDimension(
        const NetworkIdentifier& netId,
        ActorRuntimeID           runtimeId,
        DimensionType            fakeDimId,
        const Vec3&              pos
    );
};
} // namespace ll::dimension