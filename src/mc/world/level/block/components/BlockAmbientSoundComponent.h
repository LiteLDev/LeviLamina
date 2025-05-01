#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/platform/brstd/move_only_function.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
class BlockSource;
// clang-format on

struct BlockAmbientSoundComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 64, ::brstd::move_only_function<bool(::BlockSource&, ::BlockPos const&) const>> mCanPlay;
    ::ll::TypedStorage<4, 4, int>                                                                         mOneInChance;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~BlockAmbientSoundComponent();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
