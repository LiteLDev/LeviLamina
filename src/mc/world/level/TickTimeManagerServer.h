#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/world/level/TickTimeManager.h"

// auto generated forward declare list
// clang-format off
class IGameplayUserManagerConnector;
class ILevelStorageManagerConnector;
class IServerPlayerSleepManagerConnector;
class ITickTimeManagerProxy;
class LevelStorage;
class PacketSender;
class WorldClockRegistry;
namespace cereal { struct ReflectionCtx; }
// clang-format on

class TickTimeManagerServer : public ::TickTimeManager {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnk99654e;
    ::ll::UntypedStorage<8, 8>  mUnkb3ba6d;
    ::ll::UntypedStorage<8, 16> mUnkf6dd5a;
    ::ll::UntypedStorage<8, 16> mUnk787c63;
    ::ll::UntypedStorage<8, 16> mUnk10fd1f;
    // NOLINTEND

public:
    // prevent constructor by default
    TickTimeManagerServer& operator=(TickTimeManagerServer const&);
    TickTimeManagerServer(TickTimeManagerServer const&);
    TickTimeManagerServer();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~TickTimeManagerServer() /*override*/ = default;

    virtual void update() /*override*/;

    virtual ::Bedrock::NotNullNonOwnerPtr<::WorldClockRegistry const> const getWorldClockRegistry() const /*override*/;

    virtual ::Bedrock::NotNullNonOwnerPtr<::WorldClockRegistry> const getWorldClockRegistry() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI TickTimeManagerServer(
        ::std::unique_ptr<::ITickTimeManagerProxy>           tickTimeManagerProxy,
        ::Bedrock::NonOwnerPointer<::LevelStorage>           levelStorage,
        ::cereal::ReflectionCtx&                             ctx,
        ::Bedrock::NotNullNonOwnerPtr<::PacketSender> const& packetSender
    );

    MCNAPI void _onWakeUpAllPlayers();

    MCNAPI void _saveWorldClocks(::LevelStorage& levelStorage) const;

    MCNAPI void
    intitializeWithLevelStorageManagerConnector(::ILevelStorageManagerConnector& levelStorageManagerConnector);

    MCNAPI void registerForGameplayUserManagerEvents(::IGameplayUserManagerConnector& gameplayUserManagerConnector);

    MCNAPI void
    registerForPlayerSleepManagerEvents(::IServerPlayerSleepManagerConnector& serverPlayerSleepManagerConnector);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
        ::std::unique_ptr<::ITickTimeManagerProxy>           tickTimeManagerProxy,
        ::Bedrock::NonOwnerPointer<::LevelStorage>           levelStorage,
        ::cereal::ReflectionCtx&                             ctx,
        ::Bedrock::NotNullNonOwnerPtr<::PacketSender> const& packetSender
    );
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $update();

    MCNAPI ::Bedrock::NotNullNonOwnerPtr<::WorldClockRegistry const> const $getWorldClockRegistry() const;

    MCNAPI ::Bedrock::NotNullNonOwnerPtr<::WorldClockRegistry> const $getWorldClockRegistry();


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
