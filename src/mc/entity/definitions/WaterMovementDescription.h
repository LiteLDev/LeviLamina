#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/ActorComponentDescription.h"

// auto generated forward declare list
// clang-format off
struct DeserializeDataParams;
// clang-format on

struct WaterMovementDescription : public ::ActorComponentDescription {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnk23a354;
    // NOLINTEND

public:
    // prevent constructor by default
    WaterMovementDescription& operator=(WaterMovementDescription const&);
    WaterMovementDescription(WaterMovementDescription const&);
    WaterMovementDescription();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual char const* getJsonName() const /*override*/;

    virtual void deserializeData(::DeserializeDataParams deserializeDataParams) /*override*/;

    virtual ~WaterMovementDescription() /*override*/ = default;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI char const* $getJsonName() const;

    MCNAPI void $deserializeData(::DeserializeDataParams deserializeDataParams);


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
