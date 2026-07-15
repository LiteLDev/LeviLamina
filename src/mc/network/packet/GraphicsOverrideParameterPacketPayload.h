#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/math/Vec3.h"
#include "mc/network/packet/GraphicsOverrideParameterType.h"

struct GraphicsOverrideParameterPacketPayload {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 64, ::std::unordered_map<float, ::Vec3>> mKeyframes;
    ::ll::TypedStorage<4, 8, ::std::optional<float>>               mFloatValue;
    ::ll::TypedStorage<4, 16, ::std::optional<::Vec3>>             mVec3Value;
    ::ll::TypedStorage<8, 32, ::std::string>                       mBiomeID;
    ::ll::TypedStorage<8, 40, ::std::optional<::std::string>>      mPlayerID;
    ::ll::TypedStorage<1, 1, ::GraphicsOverrideParameterType>      mParameterId;
    ::ll::TypedStorage<1, 1, bool>                                 mResetParameter;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ~GraphicsOverrideParameterPacketPayload();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
