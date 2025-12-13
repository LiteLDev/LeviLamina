#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/pub_sub/Publisher.h"
#include "mc/deps/shared_types/legacy/ContainerType.h"
#include "mc/world/ContainerContentChangeListener.h"
#include "mc/world/ContainerID.h"
#include "mc/world/containers/managers/IContainerManager.h"

// auto generated forward declare list
// clang-format off
class Container;
class DynamicContainerTracker;
class ItemStack;
class Player;
struct PlayerContainerRefresher;
namespace Bedrock::PubSub { class Subscription; }
namespace Bedrock::PubSub::ThreadModel { struct SingleThreaded; }
// clang-format on

class BaseContainerMenu : public ::ContainerContentChangeListener, public ::IContainerManager {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::Player&>                                     mPlayer;
    ::ll::TypedStorage<8, 24, ::std::vector<::ItemStack>>                   mLastSlots;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::PlayerContainerRefresher>> mContainerRefresher;
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::DynamicContainerTracker>> mDynamicContainerTracker;
    ::ll::TypedStorage<1, 1, ::ContainerID>                                 mContainerId;
    ::ll::TypedStorage<1, 1, ::SharedTypes::Legacy::ContainerType>          mContainerType;
    ::ll::TypedStorage<4, 4, int>                                           mTicksSinceLastCleanup;
    ::ll::TypedStorage<
        8,
        8,
        ::std::unique_ptr<::Bedrock::PubSub::Publisher<
            void(::SharedTypes::Legacy::ContainerType),
            ::Bedrock::PubSub::ThreadModel::SingleThreaded,
            0>>>
        mContainerTypeSubscribers;
    // NOLINTEND

public:
    // prevent constructor by default
    BaseContainerMenu& operator=(BaseContainerMenu const&);
    BaseContainerMenu(BaseContainerMenu const&);
    BaseContainerMenu();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~BaseContainerMenu() /*override*/;

    virtual void removeSlot(int, int) = 0;

    virtual bool isSlotDirty(int slot);

    virtual bool isResultSlot(int slot);

    virtual void containerContentChanged(int slot) /*override*/;

    virtual void serverInitItemStackIds() = 0;

    virtual ::std::vector<::ItemStack> getItemCopies() const = 0;

    virtual void setSlot(int, ::ItemStack const&, bool) = 0;

    virtual ::ItemStack const& getSlot(int) const = 0;

    virtual void setData(int id, int value) /*override*/;

    virtual ::ContainerID getContainerId() const /*override*/;

    virtual void setContainerId(::ContainerID id) /*override*/;

    virtual ::SharedTypes::Legacy::ContainerType getContainerType() const /*override*/;

    virtual void setContainerType(::SharedTypes::Legacy::ContainerType type) /*override*/;

    virtual ::Bedrock::PubSub::Subscription
    registerContainerTypeListener(::std::function<void(::SharedTypes::Legacy::ContainerType)> callback) const
        /*override*/;

    virtual void broadcastChanges() /*override*/;

    virtual ::Container* _getContainer() const = 0;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI BaseContainerMenu(::Player& player, ::SharedTypes::Legacy::ContainerType containerType);

    MCAPI void _saveLastSlots(::Container* container);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::Player& player, ::SharedTypes::Legacy::ContainerType containerType);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCFOLD bool $isSlotDirty(int slot);

    MCFOLD bool $isResultSlot(int slot);

    MCFOLD void $containerContentChanged(int slot);

    MCFOLD void $setData(int id, int value);

    MCFOLD ::ContainerID $getContainerId() const;

    MCAPI void $setContainerId(::ContainerID id);

    MCFOLD ::SharedTypes::Legacy::ContainerType $getContainerType() const;

    MCAPI void $setContainerType(::SharedTypes::Legacy::ContainerType type);

    MCAPI ::Bedrock::PubSub::Subscription
    $registerContainerTypeListener(::std::function<void(::SharedTypes::Legacy::ContainerType)> callback) const;

    MCAPI void $broadcastChanges();


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftableForContainerContentChangeListener();

    MCAPI static void** $vftableForIContainerManager();
    // NOLINTEND
};
