#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct UpdateTradePacketPayload {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 1>  mUnkc26f28;
    ::ll::UntypedStorage<1, 1>  mUnk367f34;
    ::ll::UntypedStorage<8, 32> mUnk9e9fc5;
    ::ll::UntypedStorage<4, 4>  mUnkc984b3;
    ::ll::UntypedStorage<4, 4>  mUnk8de02d;
    ::ll::UntypedStorage<8, 8>  mUnk619313;
    ::ll::UntypedStorage<8, 8>  mUnke7c3cf;
    ::ll::UntypedStorage<8, 24> mUnkaf2f33;
    ::ll::UntypedStorage<1, 1>  mUnk368855;
    ::ll::UntypedStorage<1, 1>  mUnk41dffa;
    // NOLINTEND

public:
    // prevent constructor by default
    UpdateTradePacketPayload& operator=(UpdateTradePacketPayload const&);
    UpdateTradePacketPayload();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI UpdateTradePacketPayload(::UpdateTradePacketPayload&&);

    MCNAPI UpdateTradePacketPayload(::UpdateTradePacketPayload const& other);

    MCNAPI ::UpdateTradePacketPayload& operator=(::UpdateTradePacketPayload&&);

    MCNAPI ~UpdateTradePacketPayload();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::UpdateTradePacketPayload&&);

    MCNAPI void* $ctor(::UpdateTradePacketPayload const& other);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
