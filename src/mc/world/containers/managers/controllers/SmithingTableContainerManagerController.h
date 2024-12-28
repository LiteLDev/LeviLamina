#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/containers/managers/controllers/ContainerManagerController.h"

// auto generated forward declare list
// clang-format off
class ItemInstance;
class ItemStackBase;
struct AutoPlaceItem;
struct AutoPlaceResult;
struct CreateContainerItemScope;
struct ItemTransferAmount;
struct SlotData;
// clang-format on

class SmithingTableContainerManagerController : public ::ContainerManagerController {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16>  mUnkd90bb7;
    ::ll::UntypedStorage<8, 40>  mUnk369da2;
    ::ll::UntypedStorage<8, 136> mUnk3024c2;
    // NOLINTEND

public:
    // prevent constructor by default
    SmithingTableContainerManagerController& operator=(SmithingTableContainerManagerController const&);
    SmithingTableContainerManagerController(SmithingTableContainerManagerController const&);
    SmithingTableContainerManagerController();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~SmithingTableContainerManagerController() /*override*/;

    // vIndex: 27
    virtual bool isOutputSlot(::std::string const&) const /*override*/;

    // vIndex: 8
    virtual ::ItemStackBase const& getTakeableItemStackBase(::SlotData const&) const /*override*/;

    // vIndex: 9
    virtual void handleTakeAmount(::SlotData const&, int, ::SlotData const&) /*override*/;

    // vIndex: 10
    virtual void handleTakeAll(::SlotData const&, ::SlotData const&) /*override*/;

    // vIndex: 12
    virtual void handleTakeHalf(::SlotData const&, ::SlotData const&) /*override*/;

    // vIndex: 15
    virtual int
    handleAutoPlace(::SlotData const&, int, ::std::vector<::AutoPlaceItem> const&, ::std::vector<::AutoPlaceResult>&) /*override*/
        ;

    // vIndex: 32
    virtual void _onItemAcquired(::ItemInstance const&, ::SlotData const&) /*override*/;

    // vIndex: 29
    virtual ::CreateContainerItemScope
    _makeCreateItemScope(::SlotData const&, ::ItemTransferAmount const&) /*override*/;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI bool $isOutputSlot(::std::string const&) const;

    MCAPI ::ItemStackBase const& $getTakeableItemStackBase(::SlotData const&) const;

    MCAPI void $handleTakeAmount(::SlotData const&, int, ::SlotData const&);

    MCAPI void $handleTakeAll(::SlotData const&, ::SlotData const&);

    MCAPI void $handleTakeHalf(::SlotData const&, ::SlotData const&);

    MCAPI int
    $handleAutoPlace(::SlotData const&, int, ::std::vector<::AutoPlaceItem> const&, ::std::vector<::AutoPlaceResult>&);

    MCAPI void $_onItemAcquired(::ItemInstance const&, ::SlotData const&);

    MCAPI ::CreateContainerItemScope $_makeCreateItemScope(::SlotData const&, ::ItemTransferAmount const&);
    // NOLINTEND
};
