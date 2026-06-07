#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct EditorNetworkPacketVariantPayload {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::std::string> mRawVariantName;
    ::ll::TypedStorage<8, 32, ::std::string> mRawVariantData;
    ::ll::TypedStorage<1, 1, bool>           mRouteToManager;
    // NOLINTEND

public:
    // prevent constructor by default
    EditorNetworkPacketVariantPayload& operator=(EditorNetworkPacketVariantPayload const&);
    EditorNetworkPacketVariantPayload();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI EditorNetworkPacketVariantPayload(::EditorNetworkPacketVariantPayload const&);

    MCFOLD ::EditorNetworkPacketVariantPayload& operator=(::EditorNetworkPacketVariantPayload&&);

    MCAPI ~EditorNetworkPacketVariantPayload();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCFOLD void* $ctor(::EditorNetworkPacketVariantPayload const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};
