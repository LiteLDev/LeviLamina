#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/network/packet/ClientCameraAimAssistPacketAction.h"

struct ClientCameraAimAssistPacketPayload {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::std::string>                      mCameraPresetId;
    ::ll::TypedStorage<1, 1, ::ClientCameraAimAssistPacketAction> mAction;
    ::ll::TypedStorage<1, 1, bool>                                mAllowAimAssist;
    // NOLINTEND

#ifdef LL_PLAT_S
#else // LL_PLAT_C
public:
    // prevent constructor by default
    ClientCameraAimAssistPacketPayload();

#endif
public:
    // member functions
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCAPI ClientCameraAimAssistPacketPayload(::ClientCameraAimAssistPacketAction action, bool allowAimAssist);

    MCAPI ClientCameraAimAssistPacketPayload(::std::string const& cameraPresetId, bool allowAimAssist);
#endif
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCAPI void* $ctor(::ClientCameraAimAssistPacketAction action, bool allowAimAssist);

    MCAPI void* $ctor(::std::string const& cameraPresetId, bool allowAimAssist);
#endif
    // NOLINTEND
};
