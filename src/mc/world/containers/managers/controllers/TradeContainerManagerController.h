#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/containers/controllers/ItemTakeType.h"
#include "mc/world/containers/managers/controllers/ContainerManagerController.h"

// auto generated forward declare list
// clang-format off
class ItemStackBase;
struct AutoPlaceItem;
struct AutoPlaceResult;
struct CreateContainerItemScope;
struct ItemTransferAmount;
struct SelectedSlotInfo;
struct SlotData;
// clang-format on

class TradeContainerManagerController : public ::ContainerManagerController {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16>  mUnk9f2d59;
    ::ll::UntypedStorage<4, 4>   mUnkab655c;
    ::ll::UntypedStorage<8, 40>  mUnka11d55;
    ::ll::UntypedStorage<8, 128> mUnk2d6366;
    ::ll::UntypedStorage<8, 8>   mUnk909ce0;
    // NOLINTEND

public:
    // prevent constructor by default
    TradeContainerManagerController& operator=(TradeContainerManagerController const&);
    TradeContainerManagerController(TradeContainerManagerController const&);
    TradeContainerManagerController();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~TradeContainerManagerController() /*override*/;

    // vIndex: 27
    virtual bool isOutputSlot(::std::string const&) const /*override*/;

    // vIndex: 8
    virtual ::ItemStackBase const& getTakeableItemStackBase(::SlotData const&) const /*override*/;

    // vIndex: 10
    virtual void handleTakeAll(::SlotData const&, ::SlotData const&) /*override*/;

    // vIndex: 9
    virtual void handleTakeAmount(::SlotData const&, int, ::SlotData const&) /*override*/;

    // vIndex: 12
    virtual void handleTakeHalf(::SlotData const&, ::SlotData const&) /*override*/;

    // vIndex: 15
    virtual int
    handleAutoPlace(::SlotData const&, int, ::std::vector<::AutoPlaceItem> const&, ::std::vector<::AutoPlaceResult>&) /*override*/
        ;

    // vIndex: 11
    virtual void handlePlaceAll(::SelectedSlotInfo const&, ::SlotData const&) /*override*/;

    // vIndex: 13
    virtual void handlePlaceOne(::SlotData const&, ::SlotData const&) /*override*/;

    // vIndex: 25
    virtual void handleAddToStack(::SlotData const&, ::SlotData const&, ::ItemTakeType) /*override*/;

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

    MCAPI void $handleTakeAll(::SlotData const&, ::SlotData const&);

    MCAPI void $handleTakeAmount(::SlotData const&, int, ::SlotData const&);

    MCAPI void $handleTakeHalf(::SlotData const&, ::SlotData const&);

    MCAPI int
    $handleAutoPlace(::SlotData const&, int, ::std::vector<::AutoPlaceItem> const&, ::std::vector<::AutoPlaceResult>&);

    MCAPI void $handlePlaceAll(::SelectedSlotInfo const&, ::SlotData const&);

    MCAPI void $handlePlaceOne(::SlotData const&, ::SlotData const&);

    MCAPI void $handleAddToStack(::SlotData const&, ::SlotData const&, ::ItemTakeType);

    MCAPI ::CreateContainerItemScope $_makeCreateItemScope(::SlotData const&, ::ItemTransferAmount const&);
    // NOLINTEND
};
