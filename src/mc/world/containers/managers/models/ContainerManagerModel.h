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
class ContainerManagerController;
class ContainerModel;
class DynamicContainerTracker;
class IContainerRegistryAccess;
class ItemStack;
class Player;
struct FullContainerName;
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
    MCNAPI ContainerManagerModel(::ContainerID containerId, ::Player& player);

    MCNAPI void _addContainer(::std::shared_ptr<::ContainerModel> containerModel);

    MCNAPI bool _isPlayerInRangeOfPosition(::BlockPos const& blockPos, float pickRange) const;

    MCNAPI void addDynamicContainer(::std::shared_ptr<::ContainerModel> model);

    MCNAPI void postInit();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::ContainerID containerId, ::Player& player);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI bool $tick();

    MCNAPI ::ContainerID $getContainerId() const;

    MCNAPI void $setContainerId(::ContainerID id);

    MCNAPI ::SharedTypes::Legacy::ContainerType $getContainerType() const;

    MCNAPI void $setContainerType(::SharedTypes::Legacy::ContainerType type);

    MCNAPI ::Bedrock::PubSub::Subscription
    $registerContainerTypeListener(::std::function<void(::SharedTypes::Legacy::ContainerType)> callback) const;

    MCNAPI void $debitPlayerLevels(int levels);

    MCNAPI bool $isCreativeMode() const;

    MCNAPI bool $isClientSide() const;

    MCNAPI bool $isServerAuthoritative() const;

    MCNAPI bool $isValid(float pickRange);

    MCNAPI void $serverInitItemStackIds();

    MCNAPI void $setFullContainerSlot(int slot, ::FullContainerName const& name, ::ItemStack const& item, bool);

    MCNAPI ::ItemStack const& $getFullContainerSlot(int slot, ::FullContainerName const& name) const;

    MCNAPI void $broadcastChanges();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
