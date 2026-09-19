#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"

// auto generated forward declare list
// clang-format off
class ServerSoundHandle;
class SoundPlayerInterface;
class Vec3;
struct ClientboundUpdateSoundDataPacketPayload;
struct DimensionType;
struct NetworkIdentifierWithSubId;
namespace ServerSoundRuntime { struct DurationInfo; }
// clang-format on

class ServerSoundInstanceManager : public ::Bedrock::EnableNonOwnerReferences {
public:
    // ServerSoundInstanceManager inner types declare
    // clang-format off
    struct BroadcastInfo;
    struct BroadcastResync;
    struct PendingAction;
    struct RealTimeDuration;
    struct TickDuration;
    struct TrackedInstance;
    // clang-format on

    // ServerSoundInstanceManager inner types define
    struct BroadcastInfo {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 32> mUnk13b806;
        ::ll::UntypedStorage<4, 12> mUnk966773;
        ::ll::UntypedStorage<4, 4>  mUnk1ef1a6;
        ::ll::UntypedStorage<4, 4>  mUnka8d368;
        ::ll::UntypedStorage<4, 4>  mUnk2605ff;
        ::ll::UntypedStorage<4, 4>  mUnka491f6;
        ::ll::UntypedStorage<4, 8>  mUnk75c06d;
        ::ll::UntypedStorage<8, 24> mUnkdc525b;
        // NOLINTEND

    public:
        // prevent constructor by default
        BroadcastInfo& operator=(BroadcastInfo const&);
        BroadcastInfo(BroadcastInfo const&);
        BroadcastInfo();

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI ::ServerSoundInstanceManager::BroadcastInfo& operator=(::ServerSoundInstanceManager::BroadcastInfo&&);
        // NOLINTEND
    };

    struct BroadcastResync {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 8>  mUnkad1ece;
        ::ll::UntypedStorage<8, 96> mUnk3beba1;
        ::ll::UntypedStorage<4, 4>  mUnk42cfd3;
        // NOLINTEND

    public:
        // prevent constructor by default
        BroadcastResync& operator=(BroadcastResync const&);
        BroadcastResync(BroadcastResync const&);
        BroadcastResync();
    };

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

    struct RealTimeDuration {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 8> mUnk1040cf;
        ::ll::UntypedStorage<8, 8> mUnkfde2e6;
        // NOLINTEND

    public:
        // prevent constructor by default
        RealTimeDuration& operator=(RealTimeDuration const&);
        RealTimeDuration(RealTimeDuration const&);
        RealTimeDuration();
    };

    struct TickDuration {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<4, 4> mUnk8ff673;
        ::ll::UntypedStorage<4, 4> mUnk49a593;
        // NOLINTEND

    public:
        // prevent constructor by default
        TickDuration& operator=(TickDuration const&);
        TickDuration(TickDuration const&);
        TickDuration();
    };

    struct TrackedInstance {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 24>  mUnkff48c3;
        ::ll::UntypedStorage<4, 4>   mUnkc362e8;
        ::ll::UntypedStorage<1, 1>   mUnka55ecb;
        ::ll::UntypedStorage<1, 1>   mUnkaf0af3;
        ::ll::UntypedStorage<8, 8>   mUnk26f4f1;
        ::ll::UntypedStorage<8, 104> mUnk7c2aaa;
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
    MCNAPI void addTrackedInstance(
        ::ServerSoundHandle                                          handle,
        ::ServerSoundRuntime::DurationInfo const&                    durationInfo,
        uint                                                         loopCount,
        ::std::chrono::steady_clock::time_point                      now,
        ::std::optional<::ServerSoundInstanceManager::BroadcastInfo> broadcastInfo
    );

#ifdef LL_PLAT_C
    MCNAPI void handleUpdateSoundData(
        ::ClientboundUpdateSoundDataPacketPayload const& payload,
        ::SoundPlayerInterface&                          soundPlayer
    );
#endif

    MCNAPI ::std::vector<::ServerSoundInstanceManager::BroadcastResync> notifyPlayerOfBroadcastsInRange(
        ::NetworkIdentifierWithSubId const&     player,
        ::Vec3 const&                           viewCenter,
        float                                   defaultRadius,
        ::DimensionType                         dimension,
        ::std::chrono::steady_clock::time_point now
    );

    MCNAPI ::std::vector<::ServerSoundHandle> removeBroadcastsOutOfRange(
        ::NetworkIdentifierWithSubId const& player,
        ::Vec3 const&                       viewCenter,
        float                               defaultRadius,
        ::DimensionType                     dimension
    );

    MCNAPI ::std::vector<::ServerSoundHandle>
    removePlayerFromBroadcasts(::NetworkIdentifierWithSubId const& player, ::std::optional<::DimensionType> dimension);

    MCNAPI void tickSounds(::std::chrono::steady_clock::time_point now);
    // NOLINTEND
};
