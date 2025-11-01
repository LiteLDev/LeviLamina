#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/math/Vec2.h"

struct CameraAimAssistPacketPayload {
public:
    // CameraAimAssistPacketPayload inner types define
    enum class Action : uchar {
        Set = 0,
        Clear = 1,
        Count = 2,
    };
    
    enum class TargetMode : uchar {
        Angle = 0,
        Distance = 1,
        Count = 2,
    };
    
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::std::string> mPresetId;
    ::ll::TypedStorage<4, 8, ::Vec2> mViewAngle;
    ::ll::TypedStorage<4, 4, float> mDistance;
    ::ll::TypedStorage<1, 1, ::CameraAimAssistPacketPayload::TargetMode> mTargetMode;
    ::ll::TypedStorage<1, 1, ::CameraAimAssistPacketPayload::Action> mAction;
    ::ll::TypedStorage<1, 1, bool> mShowDebugRender;
    // NOLINTEND

public:
    // prevent constructor by default
    CameraAimAssistPacketPayload& operator=(CameraAimAssistPacketPayload const&);
    CameraAimAssistPacketPayload(CameraAimAssistPacketPayload const&);
    CameraAimAssistPacketPayload();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::CameraAimAssistPacketPayload& operator=(::CameraAimAssistPacketPayload&&);

    MCAPI ~CameraAimAssistPacketPayload();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND

};
