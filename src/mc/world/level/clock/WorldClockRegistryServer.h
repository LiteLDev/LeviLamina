#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/clock/WorldClockRegistry.h"

// auto generated forward declare list
// clang-format off
class LevelStorage;
class PacketSender;
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
        ::ll::UntypedStorage<8, 24> mUnk2376af;
        // NOLINTEND

    public:
        // prevent constructor by default
        WorldClockRegistryData& operator=(WorldClockRegistryData const&);
        WorldClockRegistryData(WorldClockRegistryData const&);
        WorldClockRegistryData();

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI ~WorldClockRegistryData();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI void $dtor();
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnkd8e112;
    // NOLINTEND

public:
    // prevent constructor by default
    WorldClockRegistryServer& operator=(WorldClockRegistryServer const&);
    WorldClockRegistryServer(WorldClockRegistryServer const&);
    WorldClockRegistryServer();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~WorldClockRegistryServer() /*override*/;

    virtual void tick(::PacketSender& packetSender) /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit WorldClockRegistryServer(::cereal::ReflectionCtx& cerealContext);

    MCNAPI bool loadData(::LevelStorage const& levelStorage);

    MCNAPI void saveData(::LevelStorage& levelStorage) const;
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::cereal::ReflectionCtx& cerealContext);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $tick(::PacketSender& packetSender);


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
