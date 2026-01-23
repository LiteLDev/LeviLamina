#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/network/packet/GraphicsOverrideParameterType.h"

// auto generated forward declare list
// clang-format off
class Vec3;
// clang-format on

struct GraphicsOverrideParameterPacketPayload {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 64, ::std::unordered_map<float, ::Vec3>> mKeyframes;
    ::ll::TypedStorage<8, 32, ::std::string>                       mBiomeID;
    ::ll::TypedStorage<1, 1, ::GraphicsOverrideParameterType>      mParameterId;
    ::ll::TypedStorage<1, 1, bool>                                 mResetParameter;
    // NOLINTEND

public:
    // prevent constructor by default
    GraphicsOverrideParameterPacketPayload(GraphicsOverrideParameterPacketPayload const&);
    GraphicsOverrideParameterPacketPayload();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::GraphicsOverrideParameterPacketPayload& operator=(::GraphicsOverrideParameterPacketPayload&&);

    MCAPI ::GraphicsOverrideParameterPacketPayload& operator=(::GraphicsOverrideParameterPacketPayload const&);

    MCAPI ~GraphicsOverrideParameterPacketPayload();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
