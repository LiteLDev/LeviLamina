#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/ActorLocation.h"

// auto generated forward declare list
// clang-format off
class CompoundTag;
class IBlockSource;
class Vec3;
struct ActorUniqueID;
// clang-format on

namespace GameEvents {

class PositionSource {
public:
    // prevent constructor by default
    PositionSource& operator=(PositionSource const&);
    PositionSource(PositionSource const&);
    PositionSource();

public:
    // NOLINTBEGIN
    MCAPI std::optional<class Vec3> getPosition(class IBlockSource const& region) const;

    MCAPI void serializeTo(class CompoundTag& tag) const;

    MCAPI static class GameEvents::PositionSource forActor(struct ActorUniqueID id, ::ActorLocation attachPos);

    MCAPI static class GameEvents::PositionSource forFixedPos(class Vec3 const& pos);

    // NOLINTEND
};

}; // namespace GameEvents
