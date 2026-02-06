#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/ViewRequest.h"
#include "mc/client/gui/screens/controllers/ContainerScreenController.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
class ClientInstanceScreenModel;
class Player;
class SmithingTableContainerManagerController;
struct ActorUniqueID;
namespace Json { class Value; }
// clang-format on

class SmithingTableScreenController : public ::ContainerScreenController {
public:
    // SmithingTableScreenController inner types define
    enum class SlotIndex : int {};

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::SmithingTableContainerManagerController>>
                                                                         mSmithingTableContainerManagerController;
    ::ll::TypedStorage<4, 4, ::SmithingTableScreenController::SlotIndex> mHoveredSlot;
    ::ll::TypedStorage<1, 1, bool>                                       mUseSmithingTable2UI;
    // NOLINTEND

public:
    // prevent constructor by default
    SmithingTableScreenController();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~SmithingTableScreenController() /*override*/ = default;

    virtual void addStaticScreenVars(::Json::Value& globalVars) /*override*/;

    virtual bool _isStillValid() const /*override*/;

    virtual void _registerCoalesceOrder() /*override*/;

    virtual void _registerAutoPlaceOrder() /*override*/;

    virtual ::std::string _getButtonXDescription() /*override*/;

    virtual ::ui::ViewRequest _onContainerSlotHovered(::std::string const& collectionName, int index) /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI SmithingTableScreenController(
        ::std::shared_ptr<::ClientInstanceScreenModel> model,
        ::Player&                                      player,
        ::BlockPos const&                              pos,
        ::ActorUniqueID                                uniqueId
    );

    MCAPI void _registerBindings();

    MCAPI void _registerSmithingTable2UIBindings();

    MCAPI void _registerStateMachine();
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
    MCAPI void $addStaticScreenVars(::Json::Value& globalVars);

    MCFOLD bool $_isStillValid() const;

    MCAPI void $_registerCoalesceOrder();

    MCAPI void $_registerAutoPlaceOrder();

    MCFOLD ::std::string $_getButtonXDescription();

    MCAPI ::ui::ViewRequest $_onContainerSlotHovered(::std::string const& collectionName, int index);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftableForScreenController();

    MCNAPI static void** $vftableForEnableNonOwnerReferences();
    // NOLINTEND
};
