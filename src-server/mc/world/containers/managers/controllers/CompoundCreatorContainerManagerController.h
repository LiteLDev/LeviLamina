#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/containers/SlotData.h"
#include "mc/world/containers/controllers/ItemTakeType.h"
#include "mc/world/containers/managers/controllers/ContainerManagerController.h"
#include "mc/world/item/ItemInstance.h"

// auto generated forward declare list
// clang-format off
class CompoundCreatorContainerManagerModel;
class CraftableCompounds;
class ItemStackBase;
struct AutoPlaceItem;
struct AutoPlaceResult;
struct CreateContainerItemScope;
struct ItemTransferAmount;
// clang-format on

class CompoundCreatorContainerManagerController : public ::ContainerManagerController {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::std::weak_ptr<::CompoundCreatorContainerManagerModel>> mModel;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::CraftableCompounds>>                  mCraftableCompounds;
    ::ll::TypedStorage<8, 40, ::SlotData const>                                        mCreatedItemOutputSlot;
    ::ll::TypedStorage<8, 128, ::ItemInstance>                                         mResultItemPreview;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~CompoundCreatorContainerManagerController() /*override*/ = default;

    // vIndex: 8
    virtual ::ItemStackBase const& getTakeableItemStackBase(::SlotData const&) const /*override*/;

    // vIndex: 9
    virtual void handleTakeAmount(::SlotData const&, int, ::SlotData const&) /*override*/;

    // vIndex: 10
    virtual void handleTakeAll(::SlotData const&, ::SlotData const&) /*override*/;

    // vIndex: 12
    virtual void handleTakeHalf(::SlotData const&, ::SlotData const&) /*override*/;

    // vIndex: 15
    virtual int handleAutoPlace(
        ::SlotData const&,
        int,
        ::std::vector<::AutoPlaceItem> const&,
        ::std::vector<::AutoPlaceResult>&
    ) /*override*/;

    // vIndex: 25
    virtual void handleAddToStack(::SlotData const&, ::SlotData const&, ::ItemTakeType) /*override*/;

    // vIndex: 27
    virtual bool isOutputSlot(::std::string const&) const /*override*/;

    // vIndex: 32
    virtual void _onItemAcquired(::ItemInstance const&, ::SlotData const&) /*override*/;

    // vIndex: 29
    virtual ::CreateContainerItemScope
    _makeCreateItemScope(::SlotData const&, ::ItemTransferAmount const&) /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
