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
    ::ll::UntypedStorage<4, 4>  mUnk50abf5;
    ::ll::UntypedStorage<8, 32> mUnk6efa06;
    // NOLINTEND

public:
    // prevent constructor by default
    CraftUISetResultNameEvent& operator=(CraftUISetResultNameEvent const&);
    CraftUISetResultNameEvent(CraftUISetResultNameEvent const&);
    CraftUISetResultNameEvent();
};
