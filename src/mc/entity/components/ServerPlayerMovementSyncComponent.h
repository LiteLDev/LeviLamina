#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
struct ActorDataBoundingBoxComponent;
struct ActorDataFlagComponent;
struct ActorUniqueID;
struct MovementAttributesComponent;
// clang-format on

struct ServerPlayerMovementSyncComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::ActorUniqueID>                  mActorID;
    ::ll::TypedStorage<8, 16, ::ActorDataFlagComponent>        mActorDataFlag;
    ::ll::TypedStorage<4, 12, ::ActorDataBoundingBoxComponent> mActorDataBoundingBox;
    ::ll::TypedStorage<4, 48, ::MovementAttributesComponent>   mMovementAttributes;
    // NOLINTEND
};
