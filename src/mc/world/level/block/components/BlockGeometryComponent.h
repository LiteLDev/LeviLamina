#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
struct BlockGeometryDescription;
// clang-format on

struct BlockGeometryComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 48> mUnk6e411c;
    ::ll::UntypedStorage<8, 16> mUnk9fb2e8;
    ::ll::UntypedStorage<1, 1>  mUnk124ffe;
    ::ll::UntypedStorage<1, 1>  mUnk9dda52;
    ::ll::UntypedStorage<8, 16> mUnka02555;
    ::ll::UntypedStorage<1, 1>  mUnk2575c2;
    // NOLINTEND

public:
    // prevent constructor by default
    BlockGeometryComponent& operator=(BlockGeometryComponent const&);
    BlockGeometryComponent(BlockGeometryComponent const&);
    BlockGeometryComponent();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit BlockGeometryComponent(::BlockGeometryDescription const& blockGeometryDescription);

    MCAPI ::BlockGeometryComponent& operator=(::BlockGeometryComponent&&);

    MCAPI ~BlockGeometryComponent();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::BlockGeometryDescription const& blockGeometryDescription);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
