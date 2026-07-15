#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/SubClientId.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/world/level/clock/WorldClockRegistry.h"

// auto generated forward declare list
// clang-format off
class LevelData;
class LevelStorage;
class NetworkIdentifier;
class PacketSender;
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
    virtual ~WorldClockRegistryServer() /*override*/ = default;

    virtual void tick(::PacketSender& packetSender, ::LevelData const& levelData) /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit WorldClockRegistryServer(::cereal::ReflectionCtx& cerealContext);

    MCAPI bool loadData(::LevelStorage const& levelStorage);

    MCAPI void saveData(::LevelStorage& levelStorage) const;

    MCAPI void sendInitializationToClient(
        ::NetworkIdentifier const& source,
        ::SubClientId              subClientId,
        ::PacketSender&            packetSender
    ) const;

    MCAPI void syncClocksWithClients(::PacketSender& packetSender) const;
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::cereal::ReflectionCtx& cerealContext);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $tick(::PacketSender& packetSender, ::LevelData const& levelData);


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
