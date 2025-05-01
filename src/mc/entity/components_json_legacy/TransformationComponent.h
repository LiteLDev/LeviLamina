#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Actor;
class Level;
struct ActorUniqueID;
struct TransformationDescription;
// clang-format on

class TransformationComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, int> mDelayTicks;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void initFromDefinition(::Actor& actor);

    MCNAPI void maintainOldData(
        ::Actor&                           originalActor,
        ::Actor&                           transformed,
        ::TransformationDescription const& transformation,
        ::ActorUniqueID const&             ownerID,
        ::Level const&                     level
    );

    MCNAPI void reloadComponent(::Actor& actor);

    MCNAPI void transformIfAble(::Actor& actor, bool shouldRemove);
    // NOLINTEND
};
