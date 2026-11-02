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
    MCNAPI EditorNetworkPacketVariantPayload(::EditorNetworkPacketVariantPayload const&);

    MCNAPI ::EditorNetworkPacketVariantPayload& operator=(::EditorNetworkPacketVariantPayload&&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::EditorNetworkPacketVariantPayload const&);
    // NOLINTEND
};
