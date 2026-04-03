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
    EditorNetworkPacketVariantPayload(EditorNetworkPacketVariantPayload const&);
    EditorNetworkPacketVariantPayload();

public:
    // member functions
    // NOLINTBEGIN
    MCFOLD ::EditorNetworkPacketVariantPayload& operator=(::EditorNetworkPacketVariantPayload&&);

    MCFOLD ::EditorNetworkPacketVariantPayload& operator=(::EditorNetworkPacketVariantPayload const&);

    MCAPI ~EditorNetworkPacketVariantPayload();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};
