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
    // vIndex: 1
    virtual ~BaseContainerMenu() /*override*/;

    // vIndex: 2
    virtual void removeSlot(int, int) = 0;

    // vIndex: 3
    virtual bool isSlotDirty(int slot);

    // vIndex: 4
    virtual bool isResultSlot(int slot);

    // vIndex: 0
    virtual void containerContentChanged(int slot) /*override*/;

    // vIndex: 6
    virtual void serverInitItemStackIds() = 0;

    // vIndex: 7
    virtual ::std::vector<::ItemStack> getItemCopies() const = 0;

    // vIndex: 8
    virtual void setSlot(int, ::ItemStack const&, bool) = 0;

    // vIndex: 9
    virtual ::ItemStack const& getSlot(int) const = 0;

    // vIndex: 10
    virtual void setData(int id, int value) /*override*/;

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

    // vIndex: 13
    virtual void broadcastChanges() /*override*/;

    // vIndex: 5
    virtual ::Container* _getContainer() const = 0;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI BaseContainerMenu(::Player& player, ::SharedTypes::Legacy::ContainerType containerType);

    MCNAPI void _saveLastSlots(::Container* container);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::Player& player, ::SharedTypes::Legacy::ContainerType containerType);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI bool $isSlotDirty(int slot);

    MCNAPI bool $isResultSlot(int slot);

    MCNAPI void $containerContentChanged(int slot);

    MCNAPI void $setData(int id, int value);

    MCNAPI ::ContainerID $getContainerId() const;

    MCNAPI void $setContainerId(::ContainerID id);

    MCNAPI ::SharedTypes::Legacy::ContainerType $getContainerType() const;

    MCNAPI void $setContainerType(::SharedTypes::Legacy::ContainerType type);

    MCNAPI ::Bedrock::PubSub::Subscription
    $registerContainerTypeListener(::std::function<void(::SharedTypes::Legacy::ContainerType)> callback) const;

    MCNAPI void $broadcastChanges();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftableForContainerContentChangeListener();

    MCNAPI static void** $vftableForIContainerManager();
    // NOLINTEND
};
