#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct EditorNetworkPacketPayload {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnk7deb75;
    ::ll::UntypedStorage<1, 1>  mUnk3bdbee;
    // NOLINTEND

public:
    // prevent constructor by default
    EditorNetworkPacketPayload& operator=(EditorNetworkPacketPayload const&);
    EditorNetworkPacketPayload(EditorNetworkPacketPayload const&);
    EditorNetworkPacketPayload();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::EditorNetworkPacketPayload& operator=(::EditorNetworkPacketPayload&&);

    MCNAPI ~EditorNetworkPacketPayload();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
