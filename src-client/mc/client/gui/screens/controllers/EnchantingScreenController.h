#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/ViewRequest.h"
#include "mc/client/gui/screens/controllers/ContainerScreenController.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
class ClientInstanceScreenModel;
class EnchantingContainerManagerController;
class Player;
struct ActorUniqueID;
// clang-format on

class EnchantingScreenController : public ::ContainerScreenController {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::EnchantingContainerManagerController>>
                                  mEnchantingContainerManagerController;
    ::ll::TypedStorage<4, 4, int> mSelectedButton;
    // NOLINTEND

public:
    // prevent constructor by default
    EnchantingScreenController();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~EnchantingScreenController() /*override*/ = default;

    virtual void onLeave() /*override*/;

    virtual bool _isStillValid() const /*override*/;

    virtual void _registerCoalesceOrder() /*override*/;

    virtual void _registerAutoPlaceOrder() /*override*/;

    virtual ::ui::ViewRequest _onContainerSlotSelected(::std::string const& collectionName, int index) /*override*/;

    virtual ::ui::ViewRequest _onContainerSlotHovered(::std::string const& collectionName, int index) /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI EnchantingScreenController(
        ::std::shared_ptr<::ClientInstanceScreenModel> model,
        ::Player&                                      player,
        ::BlockPos const&                              pos,
        ::ActorUniqueID                                uniqueId
    );

    MCAPI ::ui::ViewRequest _enchantmentClicked(int option);

    MCAPI void _initScreenControllerProxy();

    MCAPI void _registerBindings();

    MCAPI void _registerEventHandlers();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        ::std::shared_ptr<::ClientInstanceScreenModel> model,
        ::Player&                                      player,
        ::BlockPos const&                              pos,
        ::ActorUniqueID                                uniqueId
    );
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCFOLD void $onLeave();

    MCFOLD bool $_isStillValid() const;

    MCAPI void $_registerCoalesceOrder();

    MCAPI void $_registerAutoPlaceOrder();

    MCAPI ::ui::ViewRequest $_onContainerSlotSelected(::std::string const& collectionName, int index);

    MCAPI ::ui::ViewRequest $_onContainerSlotHovered(::std::string const& collectionName, int index);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftableForEnableNonOwnerReferences();

    MCNAPI static void** $vftableForScreenController();
    // NOLINTEND
};
