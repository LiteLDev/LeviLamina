#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class SynchedActorDataWriter;
class Vec3;
struct ActorDataDirtyFlagsComponent;
struct ActorDataSeatOffsetComponent;
struct SeatDescription;
// clang-format on

struct SeatDescriptionUtility {
public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void setValuesToSynchedActorData(::ActorDataSeatOffsetComponent& seatOffsetComponent, ::ActorDataDirtyFlagsComponent& dirtyFlagsComponent, ::SynchedActorDataWriter synchedActorData, ::Vec3 const& offset, ::SeatDescription const& seat, float seatRotation);
    // NOLINTEND

};
