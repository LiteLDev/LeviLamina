#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/screens/controllers/FadeInIconBehavior.h"
#include "mc/world/item/ItemInstance.h"

// auto generated forward declare list
// clang-format off
class ContainerManagerController;
class ContainerScreenController;
class ItemStackBase;
// clang-format on

struct RepeatCraftButtonData {
public:
    // RepeatCraftButtonData inner types define
    using SendFlyingItemCallback = ::std::function<
        void(::ItemStackBase const&, ::std::string const&, int, ::std::string const&, int, ::FadeInIconBehavior)>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 128, ::ItemInstance> mItemInSlot;
    ::ll::TypedStorage<4, 4, int>              mLastStartHeldTime;
    ::ll::TypedStorage<4, 4, int>              mNumberOfItemsCrafted;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void handleRepeatCraft(
        ::ContainerScreenController&                    containerScreenController,
        ::std::shared_ptr<::ContainerManagerController> containerManagerController,
        ::std::string const&                            collectionName,
        int                                             collectionIndex,
        ::ItemStackBase const&                          itemInSlot,
        ::std::function<
            void(::ItemStackBase const&, ::std::string const&, int, ::std::string const&, int, ::FadeInIconBehavior)>
            sendFlyingItem
    );

    MCAPI ~RepeatCraftButtonData();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};
