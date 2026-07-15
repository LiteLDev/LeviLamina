#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/WeakEntityRef.h"
#include "mc/world/item/ItemStack.h"
#include "mc/world/level/Tick.h"
#include "mc/world/level/block/actor/VanillaBlockActor.h"

// auto generated forward declare list
// clang-format off
class Actor;
class ActorRuntimeID;
class BlockActorDataPacket;
class BlockPos;
class BlockSource;
class CompoundTag;
class DataLoadHelper;
class ILevel;
class Player;
class SaveContext;
struct ActorUniqueID;
// clang-format on

class VaultBlockActor : public ::VanillaBlockActor {
public:
    // VaultBlockActor inner types declare
    // clang-format off
    struct VaultClientData;
    struct VaultConfig;
    struct VaultServerData;
    struct VaultSharedData;
    class Client;
    class Server;
    // clang-format on

    // VaultBlockActor inner types define
    struct VaultClientData {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<4, 4, float>            currentSpin;
        ::ll::TypedStorage<4, 4, float>            previousSpin;
        ::ll::TypedStorage<8, 24, ::WeakEntityRef> displayEntity;
        // NOLINTEND
    };

    struct VaultConfig {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 32, ::std::string> lootTable;
        ::ll::TypedStorage<4, 4, float>          activationRange;
        ::ll::TypedStorage<4, 4, float>          deactivationRange;
        ::ll::TypedStorage<8, 152, ::ItemStack>  keyItem;
        ::ll::TypedStorage<8, 32, ::std::string> overrideLootTableToDisplay;
        // NOLINTEND
    };

    struct VaultServerData {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 8, ::Tick>                          stateUpdateResumesAt;
        ::ll::TypedStorage<8, 24, ::std::vector<::ItemStack>>     itemsToEject;
        ::ll::TypedStorage<8, 24, ::std::vector<::ActorUniqueID>> rewardedPlayers;
        ::ll::TypedStorage<1, 1, bool>                            doesBlockNeedToBeSaved;
        ::ll::TypedStorage<8, 8, ::Tick>                          serverTick;
        ::ll::TypedStorage<8, 8, ::Tick>                          lastInsertFailTimestamp;
        ::ll::TypedStorage<4, 4, int>                             totalEjectionsNeeded;
        // NOLINTEND
    };

    struct VaultSharedData {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 152, ::ItemStack>                    displayItem;
        ::ll::TypedStorage<8, 24, ::std::vector<::ActorRuntimeID>> connectedPlayers;
        ::ll::TypedStorage<4, 4, float>                            connectedParticlesRange;
        ::ll::TypedStorage<1, 1, bool>                             isSharedDataDirty;
        // NOLINTEND
    };

    class Client {
    public:
        // static functions
        // NOLINTBEGIN
#ifdef LL_PLAT_C
        MCAPI static void emitActivationParticles(::BlockSource& region, ::BlockPos pos);

        MCAPI static void emitConnectedParticles(
            ::BlockSource&                            region,
            ::BlockPos                                pos,
            ::VaultBlockActor::VaultSharedData const& sharedData
        );

        MCAPI static void emitDeactivationParticles(::BlockSource& region, ::BlockPos pos);
#endif
        // NOLINTEND
    };

    class Server {
    public:
        // static functions
        // NOLINTBEGIN
        MCAPI static void tryInsertKey(
            ::BlockSource&                        region,
            ::Player&                             player,
            ::BlockPos                            pos,
            ::VaultBlockActor::VaultConfig const& config,
            ::VaultBlockActor::VaultSharedData&   sharedData,
            ::VaultBlockActor::VaultServerData&   serverData
        );
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 224, ::VaultBlockActor::VaultConfig>     mConfig;
    ::ll::TypedStorage<8, 32, ::VaultBlockActor::VaultClientData>  mClientData;
    ::ll::TypedStorage<8, 184, ::VaultBlockActor::VaultSharedData> mSharedData;
    ::ll::TypedStorage<8, 88, ::VaultBlockActor::VaultServerData>  mServerData;
    // NOLINTEND

public:
    // prevent constructor by default
    VaultBlockActor();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~VaultBlockActor() /*override*/;

    virtual void tick(::BlockSource& region) /*override*/;

    virtual void load(::ILevel& level, ::CompoundTag const& tag, ::DataLoadHelper& helper) /*override*/;

    virtual bool save(::CompoundTag& tag, ::SaveContext const& context) const /*override*/;

    virtual ::std::unique_ptr<::BlockActorDataPacket> _getUpdatePacket(::BlockSource&) /*override*/;

    virtual void _onUpdatePacket(::CompoundTag const&, ::BlockSource&) /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit VaultBlockActor(::BlockPos const& pos);

#ifdef LL_PLAT_C
    MCAPI ::Actor* tryGetOrCreateDisplayEntity(::BlockSource& region);
#endif
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::BlockPos const& pos);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
