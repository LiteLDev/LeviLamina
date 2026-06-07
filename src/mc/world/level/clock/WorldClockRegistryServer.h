#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/SubClientId.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/world/level/clock/WorldClockRegistry.h"

// auto generated forward declare list
// clang-format off
class HashedString;
class LevelStorage;
class NetworkIdentifier;
class PacketSender;
class TimeMarker;
class WorldClock;
namespace cereal { struct ReflectionCtx; }
// clang-format on

class WorldClockRegistryServer : public ::WorldClockRegistry {
public:
    // WorldClockRegistryServer inner types declare
    // clang-format off
    struct WorldClockRegistryData;
    // clang-format on

    // WorldClockRegistryServer inner types define
    struct WorldClockRegistryData {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 24, ::std::vector<::WorldClock>> mClocks;
        // NOLINTEND

    public:
        // member functions
        // NOLINTBEGIN
        MCAPI ~WorldClockRegistryData();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCAPI void $dtor();
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::cereal::ReflectionCtx>> mCerealContext;
    // NOLINTEND

public:
    // prevent constructor by default
    WorldClockRegistryServer();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~WorldClockRegistryServer() /*override*/;

    virtual void tick(::PacketSender&) /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit WorldClockRegistryServer(::cereal::ReflectionCtx& cerealContext);

    MCAPI bool loadData(::LevelStorage const& levelStorage);

    MCAPI ::Bedrock::NonOwnerPointer<::WorldClock> const
    registerClock(::HashedString const& name, ::std::initializer_list<::TimeMarker> timeMarkers);

    MCAPI void saveData(::LevelStorage& levelStorage) const;

    MCFOLD void sendInitializationToClient(
        ::NetworkIdentifier const& source,
        ::SubClientId              subClientId,
        ::PacketSender&            packetSender
    ) const;

    MCFOLD void syncClocksWithClients(::PacketSender& packetSender) const;

    MCFOLD ::Bedrock::NonOwnerPointer<::WorldClock> const tryGetClock(uint64 clockId);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void bindType(::cereal::ReflectionCtx& ctx);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static uint const& MAX_CLOCKS_CAPACITY();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::cereal::ReflectionCtx& cerealContext);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $tick(::PacketSender&);


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
