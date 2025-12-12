#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct ResourcePackDataInfoPacketPayload {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnk31789a;
    ::ll::UntypedStorage<4, 4>  mUnkaa5067;
    ::ll::UntypedStorage<4, 4>  mUnk4b939f;
    ::ll::UntypedStorage<8, 8>  mUnkdfa288;
    ::ll::UntypedStorage<8, 32> mUnk9eea6b;
    ::ll::UntypedStorage<1, 1>  mUnk7b4dd6;
    ::ll::UntypedStorage<1, 1>  mUnkec6725;
    // NOLINTEND

public:
    // prevent constructor by default
    ResourcePackDataInfoPacketPayload& operator=(ResourcePackDataInfoPacketPayload const&);
    ResourcePackDataInfoPacketPayload(ResourcePackDataInfoPacketPayload const&);
    ResourcePackDataInfoPacketPayload();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::ResourcePackDataInfoPacketPayload& operator=(::ResourcePackDataInfoPacketPayload&&);

    MCNAPI ~ResourcePackDataInfoPacketPayload();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
