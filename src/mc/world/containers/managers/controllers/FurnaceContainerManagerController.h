#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/containers/ContainerEnumName.h"
#include "mc/world/containers/managers/controllers/ContainerManagerController.h"

// auto generated forward declare list
// clang-format off
class FurnaceContainerManagerModel;
class HashedString;
class ItemInstance;
struct SelectedSlotInfo;
struct SlotData;
// clang-format on

class FurnaceContainerManagerController : public ::ContainerManagerController {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::std::weak_ptr<::FurnaceContainerManagerModel>> mFurnaceContainerManagerModel;
    ::ll::TypedStorage<1, 1, ::ContainerEnumName const>                        mIngredientName;
    // NOLINTEND

public:
    // prevent constructor by default
    FurnaceContainerManagerController();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~FurnaceContainerManagerController() /*override*/ = default;

    virtual void handlePlaceAll(::SelectedSlotInfo const& selected, ::SlotData const& dstSlot) /*override*/;

    virtual bool isOutputSlot(::std::string const& collectionName) const /*override*/;

    virtual void _onItemAcquired(::ItemInstance const& stack, ::SlotData const& srcSlot) /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI_C FurnaceContainerManagerController(
        ::std::weak_ptr<::FurnaceContainerManagerModel> containerManagerModel,
        ::HashedString const&                           recipeTag
    );

    MCNAPI_C int getBurnProgress(int max);

    MCNAPI_C int getLitProgress(int max);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI_C void*
    $ctor(::std::weak_ptr<::FurnaceContainerManagerModel> containerManagerModel, ::HashedString const& recipeTag);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI void $handlePlaceAll(::SelectedSlotInfo const& selected, ::SlotData const& dstSlot);

    MCNAPI bool $isOutputSlot(::std::string const& collectionName) const;

    MCNAPI void $_onItemAcquired(::ItemInstance const& stack, ::SlotData const& srcSlot);
#endif


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
