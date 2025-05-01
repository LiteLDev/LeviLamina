#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/legacy/ContainerType.h"
#include "mc/world/ContainerContentChangeListener.h"
#include "mc/world/ContainerID.h"
#include "mc/world/containers/managers/IContainerManager.h"

// auto generated forward declare list
// clang-format off
class Container;
class ItemStack;
class Player;
namespace Bedrock::PubSub { class Subscription; }
// clang-format on

class BaseContainerMenu : public ::ContainerContentChangeListener, public ::IContainerManager {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8>  mUnk1a8093;
    ::ll::UntypedStorage<8, 24> mUnk2692a8;
    ::ll::UntypedStorage<8, 8>  mUnkfaaaf0;
    ::ll::UntypedStorage<8, 16> mUnk8690bc;
    ::ll::UntypedStorage<1, 1>  mUnk1149f4;
    ::ll::UntypedStorage<1, 1>  mUnk56cb6d;
    ::ll::UntypedStorage<4, 4>  mUnkdde237;
    ::ll::UntypedStorage<8, 8>  mUnkc9caf8;
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
