#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct AnimateEntityPacketPayload {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnkc7bfd8;
    ::ll::UntypedStorage<8, 32> mUnk50137d;
    ::ll::UntypedStorage<8, 32> mUnkf5c160;
    ::ll::UntypedStorage<8, 32> mUnk6e733f;
    ::ll::UntypedStorage<2, 2>  mUnk63300b;
    ::ll::UntypedStorage<8, 32> mUnkd84d71;
    ::ll::UntypedStorage<4, 4>  mUnkbe7bc6;
    // NOLINTEND

public:
    // prevent constructor by default
    AnimateEntityPacketPayload(AnimateEntityPacketPayload const&);
    AnimateEntityPacketPayload();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI AnimateEntityPacketPayload(::AnimateEntityPacketPayload&&);

    MCNAPI ::AnimateEntityPacketPayload& operator=(::AnimateEntityPacketPayload&&);

    MCNAPI ::AnimateEntityPacketPayload& operator=(::AnimateEntityPacketPayload const&);

    MCNAPI ~AnimateEntityPacketPayload();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::AnimateEntityPacketPayload&&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
