#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/entity/definitions/MoveControlDescription.h"

// auto generated forward declare list
// clang-format off
struct DeserializeDataParams;
// clang-format on

struct GlideMoveControlDescription : public ::MoveControlDescription {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnk173bc9;
    ::ll::UntypedStorage<4, 4> mUnke59e29;
    // NOLINTEND

public:
    // prevent constructor by default
    GlideMoveControlDescription& operator=(GlideMoveControlDescription const&);
    GlideMoveControlDescription(GlideMoveControlDescription const&);
    GlideMoveControlDescription();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual char const* getJsonName() const /*override*/;

    virtual void deserializeData(::DeserializeDataParams deserializeDataParams) /*override*/;

    virtual ~GlideMoveControlDescription() /*override*/;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
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
