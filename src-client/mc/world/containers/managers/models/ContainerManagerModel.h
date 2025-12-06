#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/pub_sub/Publisher.h"
#include "mc/deps/game_refs/WeakRef.h"
#include "mc/deps/shared_types/legacy/ContainerType.h"
#include "mc/world/ContainerID.h"
#include "mc/world/containers/managers/IContainerManager.h"
#include "mc/world/inventory/network/ContainerScreenContext.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
class ContainerModel;
class DynamicContainerTracker;
class HashedString;
class ItemStack;
class Player;
struct ActorUniqueID;
struct ContainerManagerController;
struct FullContainerName;
struct IContainerRegistryAccess;
struct PlayerContainerRefresher;
namespace Bedrock::PubSub { class Subscription; }
namespace Bedrock::PubSub::ThreadModel { struct MultiThreaded; }
namespace Bedrock::PubSub::ThreadModel { struct SingleThreaded; }
// clang-format on

class ContainerManagerModel : public ::IContainerManager {
public:
    // ContainerManagerModel inner types define
    using DynamicContainerPublisher =
        ::Bedrock::PubSub::Publisher<void(), ::Bedrock::PubSub::ThreadModel::MultiThreaded, 0>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::gsl::not_null<::std::unique_ptr<::PlayerContainerRefresher>>> mContainerRefresher;
    ::ll::TypedStorage<8, 16, ::gsl::not_null<::std::shared_ptr<::DynamicContainerTracker>>> mDynamicContainerTracker;
    ::ll::TypedStorage<8, 16, ::WeakRef<::IContainerRegistryAccess>>                         mRegistryAccess;
    ::ll::TypedStorage<8, 8, ::Player&>                                                      mPlayer;
    ::ll::TypedStorage<8, 24, ::std::vector<::ItemStack>>                                    mLastSlots;
    ::ll::TypedStorage<1, 1, ::ContainerID>                                                  mContainerId;
    ::ll::TypedStorage<1, 1, ::SharedTypes::Legacy::ContainerType>                           mContainerType;
    ::ll::TypedStorage<
        8,
        8,
        ::std::unique_ptr<::Bedrock::PubSub::Publisher<
            void(::SharedTypes::Legacy::ContainerType),
            ::Bedrock::PubSub::ThreadModel::SingleThreaded,
            0>>>
        mContainerTypeSubscribers;
    ::ll::TypedStorage<
        8,
        64,
        ::std::unordered_map<::ContainerManagerController const*, ::std::function<void(::ContainerManagerModel&)>>>
                                                        mInformControllerOfDestructionCallbacks;
    ::ll::TypedStorage<8, 40, ::ContainerScreenContext> mScreenContext;
    ::ll::TypedStorage<8, 64, ::std::unordered_map<::std::string, ::std::shared_ptr<::ContainerModel>>> mContainers;
    ::ll::TypedStorage<8, 128, ::Bedrock::PubSub::Publisher<void(), ::Bedrock::PubSub::ThreadModel::MultiThreaded, 0>>
        mOnDynamicContainerChangePublisher;
    // NOLINTEND

public:
    // prevent constructor by default
    ContainerManagerModel& operator=(ContainerManagerModel const&);
    ContainerManagerModel(ContainerManagerModel const&);
    ContainerManagerModel();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ContainerManagerModel() /*override*/;

    // vIndex: 14
    virtual bool tick();

    // vIndex: 1
    virtual ::ContainerID getContainerId() const /*override*/;

    // vIndex: 2
    virtual void setContainerId(::ContainerID id) /*override*/;

    // vIndex: 3
    virtual ::SharedTypes::Legacy::ContainerType getContainerType() const /*override*/;

    // vIndex: 4
    virtual void setContainerType(::SharedTypes::Legacy::ContainerType type) /*override*/;

    // vIndex: 5
    virtual ::Bedrock::PubSub::Subscription
    registerContainerTypeListener(::std::function<void(::SharedTypes::Legacy::ContainerType)> callback) const
        /*override*/;

    // vIndex: 15
    virtual void debitPlayerLevels(int levels);

    // vIndex: 16
    virtual bool isCreativeMode() const;

    // vIndex: 17
    virtual bool isClientSide() const;

    // vIndex: 18
    virtual bool isServerAuthoritative() const;

    // vIndex: 19
    virtual bool isValid(float pickRange);

    // vIndex: 6
    virtual void serverInitItemStackIds() /*override*/;

    // vIndex: 11
    virtual void
    setFullContainerSlot(int slot, ::FullContainerName const& name, ::ItemStack const& item, bool) /*override*/;

    // vIndex: 12
    virtual ::ItemStack const& getFullContainerSlot(int slot, ::FullContainerName const& name) const /*override*/;

    // vIndex: 13
    virtual void broadcastChanges() /*override*/;

    // vIndex: 20
    virtual ::ContainerScreenContext _postInit() = 0;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ContainerManagerModel(::ContainerID containerId, ::Player& player);

    MCAPI void _addContainer(::std::shared_ptr<::ContainerModel> containerModel);

    MCAPI bool _isPlayerInRangeOfPosition(::BlockPos const& blockPos, float pickRange) const;

    MCAPI void addDynamicContainer(::std::shared_ptr<::ContainerModel> model);

    MCAPI bool blockHasCustomName(::BlockPos const& blockPos) const;

    MCAPI ::std::string getBlockDisplayName(::BlockPos const& blockPos) const;

    MCAPI ::HashedString getBlockLocName(::BlockPos const& blockPos) const;

    MCAPI ::std::shared_ptr<::ContainerModel> getDynamicContainer(::FullContainerName const& name);

    MCAPI ::HashedString getEntityLocName(::ActorUniqueID const& actorUniqueID) const;

    MCAPI ::std::string getEntityName(::ActorUniqueID const& actorUniqueID) const;

    MCAPI void grantExperience(int amount);

    MCAPI void postInit();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::ContainerID containerId, ::Player& player);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCFOLD bool $tick();

    MCFOLD ::ContainerID $getContainerId() const;

    MCFOLD void $setContainerId(::ContainerID id);

    MCFOLD ::SharedTypes::Legacy::ContainerType $getContainerType() const;

    MCAPI void $setContainerType(::SharedTypes::Legacy::ContainerType type);

    MCAPI ::Bedrock::PubSub::Subscription
    $registerContainerTypeListener(::std::function<void(::SharedTypes::Legacy::ContainerType)> callback) const;

    MCAPI void $debitPlayerLevels(int levels);

    MCAPI bool $isCreativeMode() const;

    MCAPI bool $isClientSide() const;

    MCAPI bool $isServerAuthoritative() const;

    MCAPI bool $isValid(float pickRange);

    MCAPI void $serverInitItemStackIds();

    MCAPI void $setFullContainerSlot(int slot, ::FullContainerName const& name, ::ItemStack const& item, bool);

    MCAPI ::ItemStack const& $getFullContainerSlot(int slot, ::FullContainerName const& name) const;

    MCAPI void $broadcastChanges();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
