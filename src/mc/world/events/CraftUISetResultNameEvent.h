#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct CraftUISetResultNameEvent {
public:
    // CraftUISetResultNameEvent inner types define
    enum class BlockType : int {
        Anvil = 0,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, ::CraftUISetResultNameEvent::BlockType const> mType;
    ::ll::TypedStorage<8, 32, ::std::string const>                         mName;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI_C ~CraftUISetResultNameEvent();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD_C void $dtor();
    // NOLINTEND
};
