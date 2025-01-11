#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/ContainerContentChangeListener.h"
#include "mc/world/ContainerID.h"
#include "mc/world/ContainerType.h"
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
    ::ll::UntypedStorage<1, 1>  mUnk3d21e1;
    ::ll::UntypedStorage<4, 4>  mUnkdde237;
    ::ll::UntypedStorage<8, 8>  mUnk306103;
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
    virtual ::ContainerType getContainerType() const /*override*/;

    // vIndex: 4
    virtual void setContainerType(::ContainerType type) /*override*/;

    // vIndex: 5
    virtual ::Bedrock::PubSub::Subscription
    registerContainerTypeListener(::std::function<void(::ContainerType)> callback) const /*override*/;

    // vIndex: 13
    virtual void broadcastChanges() /*override*/;

    // vIndex: 5
    virtual ::Container* _getContainer() const = 0;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI BaseContainerMenu(::Player& player, ::ContainerType containerType);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::Player& player, ::ContainerType containerType);
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

    MCFOLD void $setContainerId(::ContainerID id);

    MCFOLD ::ContainerType $getContainerType() const;

    MCAPI void $setContainerType(::ContainerType type);

    MCAPI ::Bedrock::PubSub::Subscription $registerContainerTypeListener(::std::function<void(::ContainerType)> callback
    ) const;

    MCAPI void $broadcastChanges();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftableForContainerContentChangeListener();

    MCAPI static void** $vftableForIContainerManager();
    // NOLINTEND
};
