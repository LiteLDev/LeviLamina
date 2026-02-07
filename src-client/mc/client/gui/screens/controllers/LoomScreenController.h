#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/DirtyFlag.h"
#include "mc/client/gui/screens/controllers/ContainerScreenController.h"
#include "mc/client/gui/screens/controllers/RepeatCraftButtonData.h"
#include "mc/world/item/ItemInstance.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
class ClientInstanceScreenModel;
class ItemStackBase;
class LoomContainerManagerController;
class Player;
struct ActorUniqueID;
namespace Json { class Value; }
// clang-format on

class LoomScreenController : public ::ContainerScreenController {
public:
    // LoomScreenController inner types define
    enum class LeftTabIndex : int {};

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::LoomContainerManagerController>> mLoomContainerManagerController;
    ::ll::TypedStorage<4, 4, int>                                                  mSelectedLeftTab;
    ::ll::TypedStorage<4, 4, int>                                                  mLastSelectedPatternIndex;
    ::ll::TypedStorage<8, 128, ::ItemInstance>                                     mVisualPatternItem;
    ::ll::TypedStorage<8, 136, ::RepeatCraftButtonData>                            mRepeatCraftButton;
    // NOLINTEND

public:
    // prevent constructor by default
    LoomScreenController();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~LoomScreenController() /*override*/ = default;

    virtual ::ui::DirtyFlag tick() /*override*/;

    virtual void addStaticScreenVars(::Json::Value& globalVars) /*override*/;

    virtual bool _isStillValid() const /*override*/;

    virtual void _registerCoalesceOrder() /*override*/;

    virtual void _registerAutoPlaceOrder() /*override*/;

    virtual ::ItemStackBase const&
    _getVisualItemStackImpl(::std::string const& collectionName, int collectionIndex) const /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI LoomScreenController(
        ::std::shared_ptr<::ClientInstanceScreenModel> model,
        ::Player&                                      player,
        ::BlockPos const&                              pos,
        ::ActorUniqueID                                uniqueId
    );

    MCAPI void _changeLeftTab(int dir);

    MCAPI void _registerBindings();

    MCAPI void _registerEventHandlers();

    MCAPI void _registerStateMachine();

    MCAPI void _selectPattern(int collectionIndex);

    MCAPI void _updateVisualPatternItem();
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
    MCAPI ::ui::DirtyFlag $tick();

    MCAPI void $addStaticScreenVars(::Json::Value& globalVars);

    MCFOLD bool $_isStillValid() const;

    MCAPI void $_registerCoalesceOrder();

    MCAPI void $_registerAutoPlaceOrder();

    MCAPI ::ItemStackBase const&
    $_getVisualItemStackImpl(::std::string const& collectionName, int collectionIndex) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftableForScreenController();

    MCNAPI static void** $vftableForEnableNonOwnerReferences();
    // NOLINTEND
};
