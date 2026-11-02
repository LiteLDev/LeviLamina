#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/containers/SlotData.h"
#include "mc/world/containers/managers/controllers/ContainerManagerController.h"
#include "mc/world/item/ItemInstance.h"

// auto generated forward declare list
// clang-format off
class ItemStackBase;
class LoomContainerManagerModel;
struct AutoPlaceItem;
struct AutoPlaceResult;
struct CreateContainerItemScope;
struct ItemTransferAmount;
struct SelectedSlotInfo;
// clang-format on

class LoomContainerManagerController : public ::ContainerManagerController {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::std::weak_ptr<::LoomContainerManagerModel>> mLoomContainerManagerModel;
    ::ll::TypedStorage<8, 24, ::std::vector<int>>                           mFilteredPatterns;
    ::ll::TypedStorage<4, 4, int>                                           mSelectedPatternIndex;
    ::ll::TypedStorage<1, 1, bool>                                          mCurrentlyCrafting;
    ::ll::TypedStorage<8, 40, ::SlotData const>                             mCreatedItemOutputSlot;
    ::ll::TypedStorage<8, 128, ::ItemInstance>                              mResultItemPreview;
    ::ll::TypedStorage<8, 32, ::std::string>                                mResultPatternNameId;
    // NOLINTEND

#ifdef LL_PLAT_S
#else // LL_PLAT_C
public:
    // prevent constructor by default
    LoomContainerManagerController();

#endif
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~LoomContainerManagerController() /*override*/ = default;

    virtual bool isOutputSlot(::std::string const& collectionName) const /*override*/;

    virtual bool handleTakeAmount(::SlotData const& dstSlot, int amount, ::SlotData const& srcSlot) /*override*/;

    virtual bool handleTakeAll(::SlotData const& dstSlot, ::SlotData const& srcSlot) /*override*/;

    virtual bool handlePlaceAll(::SelectedSlotInfo const& selected, ::SlotData const& dstSlot) /*override*/;

    virtual bool handleTakeHalf(::SlotData const& dstSlot, ::SlotData const& srcSlot) /*override*/;

    virtual bool handlePlaceOne(::SlotData const& srcSlot, ::SlotData const& dstSlot) /*override*/;

    virtual int handleAutoPlace(
        ::SlotData const&                     srcSlot,
        int                                   amount,
        ::std::vector<::AutoPlaceItem> const& autoPlaceOrder,
        ::std::vector<::AutoPlaceResult>&     destinations
    ) /*override*/;

    virtual ::ItemStackBase const& getTakeableItemStackBase(::SlotData const& slot) const /*override*/;

    virtual ::CreateContainerItemScope
    _makeCreateItemScope(::SlotData const& srcSlot, ::ItemTransferAmount const& takeAmount) /*override*/;

    virtual void _onItemAcquired(::ItemInstance const& instance, ::SlotData const& srcSlot) /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI explicit LoomContainerManagerController(::std::weak_ptr<::LoomContainerManagerModel> containerManagerModel);

    MCNAPI ::ItemInstance _buildResultItem();

    MCNAPI bool _handleTransferCraft(::SlotData const& srcSlot, ::SlotData const& dstSlot);

    MCNAPI void pullInPatternItemForPattern();

    MCNAPI void setSelectedPattern(int collectionIndex);
#endif
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI void* $ctor(::std::weak_ptr<::LoomContainerManagerModel> containerManagerModel);
#endif
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI bool $isOutputSlot(::std::string const& collectionName) const;

    MCNAPI bool $handleTakeAmount(::SlotData const& dstSlot, int amount, ::SlotData const& srcSlot);

    MCNAPI bool $handleTakeAll(::SlotData const& dstSlot, ::SlotData const& srcSlot);

    MCNAPI bool $handlePlaceAll(::SelectedSlotInfo const& selected, ::SlotData const& dstSlot);

    MCNAPI bool $handleTakeHalf(::SlotData const& dstSlot, ::SlotData const& srcSlot);

    MCNAPI bool $handlePlaceOne(::SlotData const& srcSlot, ::SlotData const& dstSlot);

    MCNAPI int $handleAutoPlace(
        ::SlotData const&                     srcSlot,
        int                                   amount,
        ::std::vector<::AutoPlaceItem> const& autoPlaceOrder,
        ::std::vector<::AutoPlaceResult>&     destinations
    );

    MCNAPI ::ItemStackBase const& $getTakeableItemStackBase(::SlotData const& slot) const;

    MCNAPI ::CreateContainerItemScope
    $_makeCreateItemScope(::SlotData const& srcSlot, ::ItemTransferAmount const& takeAmount);

    MCNAPI void $_onItemAcquired(::ItemInstance const& instance, ::SlotData const& srcSlot);
#endif


    // NOLINTEND
};
