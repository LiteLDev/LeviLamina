#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/math/Color.h"
#include "mc/deps/core/math/Vec3.h"
#include "mc/scripting/modules/minecraft/debugdrawer/ScriptDebugShapeType.h"

namespace ScriptModuleDebugUtilities {

struct PacketShapeData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, uint64>                                                              mNetworkId;
    ::ll::TypedStorage<1, 2, ::std::optional<::ScriptModuleDebugUtilities::ScriptDebugShapeType>> mShapeType;
    ::ll::TypedStorage<4, 16, ::std::optional<::Vec3>>                                            mLocation;
    ::ll::TypedStorage<4, 16, ::std::optional<::Vec3>>                                            mRotation;
    ::ll::TypedStorage<4, 8, ::std::optional<float>>                                              mScale;
    ::ll::TypedStorage<4, 20, ::std::optional<::mce::Color>>                                      mColor;
    ::ll::TypedStorage<4, 8, ::std::optional<float>>                                              mTimeLeftTotalSec;
    ::ll::TypedStorage<8, 40, ::std::optional<::std::string>>                                     mText;
    ::ll::TypedStorage<4, 16, ::std::optional<::Vec3>>                                            mBoxBound;
    ::ll::TypedStorage<4, 16, ::std::optional<::Vec3>>                                            mEndLocation;
    ::ll::TypedStorage<4, 8, ::std::optional<float>>                                              mArrowHeadLength;
    ::ll::TypedStorage<4, 8, ::std::optional<float>>                                              mArrowHeadRadius;
    ::ll::TypedStorage<1, 2, ::std::optional<uchar>>                                              mNumSegments;
    // NOLINTEND

public:
    // prevent constructor by default
    PacketShapeData& operator=(PacketShapeData const&);
    PacketShapeData(PacketShapeData const&);
    PacketShapeData();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI PacketShapeData(::ScriptModuleDebugUtilities::PacketShapeData&&);

    MCAPI ~PacketShapeData();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::ScriptModuleDebugUtilities::PacketShapeData&&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace ScriptModuleDebugUtilities
