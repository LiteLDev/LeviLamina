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
    ::ll::UntypedStorage<4, 4> mUnk8b34f8;
    // NOLINTEND

public:
    // prevent constructor by default
    TransformationComponent& operator=(TransformationComponent const&);
    TransformationComponent(TransformationComponent const&);

public:
    // member functions
    // NOLINTBEGIN
    MCAPI TransformationComponent();

    MCAPI int getDelayTicks() const;

    MCAPI void initFromDefinition(::Actor& actor);

    MCAPI void maintainOldData(
        ::Actor&                           originalActor,
        ::Actor&                           transformed,
        ::TransformationDescription const& transformation,
        ::ActorUniqueID const&             ownerID,
        ::Level const&                     level
    );

    MCAPI void reloadComponent(::Actor& actor);

    MCAPI void setDelayTicks(int delayTicks);

    MCAPI void transformIfAble(::Actor& actor, bool shouldRemove);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();
    // NOLINTEND
};
