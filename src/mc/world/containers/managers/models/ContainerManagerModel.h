#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/pub_sub/Publisher.h"
#include "mc/deps/game_refs/WeakRef.h"
#include "mc/deps/shared_types/legacy/ContainerType.h"
#include "mc/world/ContainerID.h"
#include "mc/world/containers/ContainerEnumName.h"
#include "mc/world/containers/managers/IContainerManager.h"
#include "mc/world/containers/managers/controllers/ContainerManagerController.h"
#include "mc/world/inventory/network/ContainerScreenContext.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
class ContainerModel;
class DynamicContainerTracker;
class HashedString;
class IContainerRegistryAccess;
class ItemStack;
class Player;
struct ActorUniqueID;
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
    virtual ~ContainerManagerModel() /*override*/;

    virtual bool tick();

    virtual ::ContainerID getContainerId() const /*override*/;

    virtual void setContainerId(::ContainerID id) /*override*/;

    virtual ::SharedTypes::Legacy::ContainerType getContainerType() const /*override*/;

    virtual void setContainerType(::SharedTypes::Legacy::ContainerType type) /*override*/;

    virtual ::Bedrock::PubSub::Subscription
    registerContainerTypeListener(::std::function<void(::SharedTypes::Legacy::ContainerType)> callback) const
        /*override*/;

    virtual void debitPlayerLevels(int levels);

    virtual bool isCreativeMode() const;

    virtual bool isClientSide() const;

    virtual bool isServerAuthoritative() const;

    virtual bool isValid(float pickRange);

    virtual void serverInitItemStackIds() /*override*/;

    virtual void
    setFullContainerSlot(int slot, ::FullContainerName const& name, ::ItemStack const& item, bool) /*override*/;

    virtual ::ItemStack const& getFullContainerSlot(int slot, ::FullContainerName const& name) const /*override*/;

    virtual void broadcastChanges() /*override*/;

    virtual ::ContainerScreenContext _postInit() = 0;

    virtual void _onDynamicContainerContentsChanged();

    virtual void setSelectedRecipeIndex(int recipeIndex, bool fromNetwork) /*override*/;

    virtual ::std::optional<int> getSelectedRecipeIndex() const /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ContainerManagerModel(::ContainerID containerId, ::Player& player);

    MCNAPI void _addContainer(::std::shared_ptr<::ContainerModel> containerModel);

    MCNAPI ::std::shared_ptr<::ContainerModel> _getContainer(::ContainerEnumName collectionEnumName) const;

    MCNAPI void addDynamicContainer(::std::shared_ptr<::ContainerModel> model);

#ifdef LL_PLAT_C
    MCNAPI ::std::string getBlockDisplayName(::BlockPos const& blockPos) const;

    MCNAPI ::HashedString getBlockLocName(::BlockPos const& blockPos) const;

    MCNAPI ::HashedString getEntityLocName(::ActorUniqueID const& actorUniqueID) const;

    MCNAPI ::std::string getEntityName(::ActorUniqueID const& actorUniqueID) const;
#endif

    MCAPI void postInit();
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

    MCNAPI void $_onDynamicContainerContentsChanged();

    MCNAPI void $setSelectedRecipeIndex(int recipeIndex, bool fromNetwork);

    MCNAPI ::std::optional<int> $getSelectedRecipeIndex() const;


    // NOLINTEND
};
