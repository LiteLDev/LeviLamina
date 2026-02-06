#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/containers/controllers/ItemCraftType.h"

// auto generated forward declare list
// clang-format off
class ContainerController;
class ItemStack;
class ItemStackBase;
class Recipe;
struct ItemTransferAmount;
// clang-format on

struct CraftingScreenControllerProxyCallbacks {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 64, ::std::function<::ContainerController*(::std::string const&)>> mGetContainerController;
    ::ll::TypedStorage<8, 64, ::std::function<void(::std::string const&, int, ::ItemCraftType)>> mRecipeAutoCraft;
    ::ll::TypedStorage<8, 64, ::std::function<void(::std::string const&, int)>>                  mHandleRecipeSelect;
    ::ll::TypedStorage<8, 64, ::std::function<void(::Recipe const*)>>                         mHandleRecipePlaceInputs;
    ::ll::TypedStorage<8, 64, ::std::function<void(::std::string const&, int)>>               mHandleAutoPlace;
    ::ll::TypedStorage<8, 64, ::std::function<void(::std::string const&, int)>>               mHandleAutoPlaceOne;
    ::ll::TypedStorage<8, 64, ::std::function<void(::std::string const&, int)>>               mHandleTouchControlsCraft;
    ::ll::TypedStorage<8, 64, ::std::function<::std::string(::std::string const&, int)>>      mGetRecipeHoverText;
    ::ll::TypedStorage<8, 64, ::std::function<::std::string(::std::string const&, int)>>      mGetExpandoItemGroupName;
    ::ll::TypedStorage<8, 64, ::std::function<void()>>                                        mLeaveScreen;
    ::ll::TypedStorage<8, 64, ::std::function<void(int)>>                                     mSetLeftInventoryTab;
    ::ll::TypedStorage<8, 64, ::std::function<void(::std::string const&, int)>>               mHandleTakeAll;
    ::ll::TypedStorage<8, 64, ::std::function<void(::std::string const&, int)>>               mHandlePlaceAll;
    ::ll::TypedStorage<8, 64, ::std::function<void(::std::string const&, int)>>               mHandlePlaceOne;
    ::ll::TypedStorage<8, 64, ::std::function<::ItemStack const&(::std::string const&, int)>> mHandleGetItemStack;
    ::ll::TypedStorage<8, 64, ::std::function<::ItemStackBase const&(::std::string const&, int)>>
        mHandleGetVisualItemStack;
    ::ll::TypedStorage<8, 64, ::std::function<bool(::std::string const&, int, ::ItemStack const&)>>
        mMoveItemFromSlotIntoStorageItem;
    ::ll::TypedStorage<8, 64, ::std::function<void(::std::string const&, int, ::ItemStack const&)>>
        mMoveItemFromSlotIntoStorageItemWithoutClientValidation;
    ::ll::TypedStorage<8, 64, ::std::function<bool(::ItemStack const&, ::std::string const&, int)>>
        mMoveTopItemFromStorageItem;
    ::ll::TypedStorage<8, 64, ::std::function<bool(::ItemStack const&, int, ::ItemStack const&)>>
        mMoveSelectedItemFromStorageItemToStorageItem;
    ::ll::TypedStorage<8, 64, ::std::function<void(::std::string const&, int, ::ItemTransferAmount)>> mHandleDropItem;
    // NOLINTEND
};
