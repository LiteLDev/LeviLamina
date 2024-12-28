#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/ActorLocation.h"

// auto generated forward declare list
// clang-format off
class CompoundTag;
class Vec3;
struct ActorUniqueID;
// clang-format on

namespace GameEvents {

class PositionSource {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnk60d9f6;
    // NOLINTEND

public:
    // prevent constructor by default
    PositionSource& operator=(PositionSource const&);
    PositionSource(PositionSource const&);
    PositionSource();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void serializeTo(::CompoundTag& tag) const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::GameEvents::PositionSource forActor(::ActorUniqueID id, ::ActorLocation attachPos);

    MCAPI static ::GameEvents::PositionSource forFixedPos(::Vec3 const& pos);
    // NOLINTEND
};

} // namespace GameEvents
