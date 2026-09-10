#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"

// auto generated forward declare list
// clang-format off
class ServerSoundHandle;
class SoundPlayerInterface;
struct ClientboundUpdateSoundDataPacketPayload;
// clang-format on

class ServerSoundInstanceManager : public ::Bedrock::EnableNonOwnerReferences {
public:
    // ServerSoundInstanceManager inner types declare
    // clang-format off
    struct PendingAction;
    struct TrackedInstance;
    // clang-format on

    // ServerSoundInstanceManager inner types define
    struct PendingAction {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 8>   mUnk8e00a5;
        ::ll::UntypedStorage<4, 12>  mUnk60bdad;
        ::ll::UntypedStorage<8, 192> mUnk9ca62d;
        // NOLINTEND

    public:
        // prevent constructor by default
        PendingAction& operator=(PendingAction const&);
        PendingAction(PendingAction const&);
        PendingAction();
    };

    struct TrackedInstance {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 16> mUnke66367;
        ::ll::UntypedStorage<8, 16> mUnk893cdc;
        ::ll::UntypedStorage<1, 1>  mUnka55ecb;
        ::ll::UntypedStorage<1, 1>  mUnkaf0af3;
        ::ll::UntypedStorage<8, 8>  mUnk26f4f1;
        // NOLINTEND

    public:
        // prevent constructor by default
        TrackedInstance& operator=(TrackedInstance const&);
        TrackedInstance(TrackedInstance const&);
        TrackedInstance();
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8>   mUnkb93fd6;
    ::ll::UntypedStorage<8, 24>  mUnk326bec;
    ::ll::UntypedStorage<8, 16>  mUnka661b6;
    ::ll::UntypedStorage<8, 128> mUnk3886a2;
    // NOLINTEND

public:
    // prevent constructor by default
    ServerSoundInstanceManager& operator=(ServerSoundInstanceManager const&);
    ServerSoundInstanceManager(ServerSoundInstanceManager const&);
    ServerSoundInstanceManager();

public:
    // member functions
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI void handleUpdateSoundData(
        ::ClientboundUpdateSoundDataPacketPayload const& payload,
        ::SoundPlayerInterface&                          soundPlayer
    );
#endif

    MCNAPI void tickSounds(::std::chrono::steady_clock::time_point now);
    // NOLINTEND
};
