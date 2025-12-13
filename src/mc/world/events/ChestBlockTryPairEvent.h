#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/math/Vec3.h"

// auto generated forward declare list
// clang-format off
class BlockSourceHandle;
// clang-format on

struct ChestBlockTryPairEvent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::BlockSourceHandle> const> mBlockSourceHandle;
    ::ll::TypedStorage<4, 12, ::Vec3 const>                                 mBlockPos;
    ::ll::TypedStorage<4, 12, ::Vec3 const>                                 mOtherBlockPos;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~ChestBlockTryPairEvent();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
