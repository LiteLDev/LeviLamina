#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/entity/definitions/MoveControlDescription.h"

// auto generated forward declare list
// clang-format off
struct DeserializeDataParams;
// clang-format on

struct SlimeMoveControlDescription : public ::MoveControlDescription {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 8> mUnk55085e;
    // NOLINTEND

public:
    // prevent constructor by default
    SlimeMoveControlDescription& operator=(SlimeMoveControlDescription const&);
    SlimeMoveControlDescription(SlimeMoveControlDescription const&);
    SlimeMoveControlDescription();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual char const* getJsonName() const /*override*/;

    // vIndex: 2
    virtual void deserializeData(::DeserializeDataParams deserializeDataParams) /*override*/;

    // vIndex: 1
    virtual ~SlimeMoveControlDescription() /*override*/;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI char const* $getJsonName() const;

    MCAPI void $deserializeData(::DeserializeDataParams deserializeDataParams);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
