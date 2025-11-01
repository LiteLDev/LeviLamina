#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/nbt/CompoundTag.h"

struct EditorNetworkPacketPayload {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::CompoundTag> mBinaryPayload;
    ::ll::TypedStorage<1, 1, bool> mRouteToManager;
    // NOLINTEND

public:
    // prevent constructor by default
    EditorNetworkPacketPayload& operator=(EditorNetworkPacketPayload const&);
    EditorNetworkPacketPayload(EditorNetworkPacketPayload const&);
    EditorNetworkPacketPayload();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::EditorNetworkPacketPayload& operator=(::EditorNetworkPacketPayload&&);

    MCAPI ~EditorNetworkPacketPayload();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND

};
