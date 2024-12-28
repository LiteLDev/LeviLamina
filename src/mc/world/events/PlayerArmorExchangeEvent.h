#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct PlayerArmorExchangeEvent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24>  mUnk3120b4;
    ::ll::UntypedStorage<4, 4>   mUnk3121f8;
    ::ll::UntypedStorage<8, 152> mUnkd3390a;
    ::ll::UntypedStorage<8, 152> mUnkc98ff5;
    ::ll::UntypedStorage<4, 4>   mUnkb22b98;
    // NOLINTEND

public:
    // prevent constructor by default
    PlayerArmorExchangeEvent& operator=(PlayerArmorExchangeEvent const&);
    PlayerArmorExchangeEvent(PlayerArmorExchangeEvent const&);
    PlayerArmorExchangeEvent();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ~PlayerArmorExchangeEvent();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
