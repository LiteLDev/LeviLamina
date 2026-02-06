#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/screens/controllers/BlockContainerScreenController.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
class ClientInstanceScreenModel;
class Player;
struct ActorUniqueID;
namespace Json { class Value; }
// clang-format on

class HorseScreenController : public ::BlockContainerScreenController {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool> mChestTabOpen;
    // NOLINTEND

public:
    // prevent constructor by default
    HorseScreenController();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~HorseScreenController() /*override*/ = default;

    virtual void addStaticScreenVars(::Json::Value& globalVars) /*override*/;

    virtual bool _isStillValid() const /*override*/;

    virtual void _registerCoalesceOrder() /*override*/;

    virtual void _registerAutoPlaceOrder() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI HorseScreenController(
        ::std::shared_ptr<::ClientInstanceScreenModel> ptrModel,
        ::Player&                                      player,
        ::BlockPos const&                              pos,
        ::ActorUniqueID                                uniqueId
    );

    MCAPI int _getChestInventorySize() const;

    MCAPI ::glm::ivec2 _getEquipGridSize() const;

    MCAPI bool _isChested() const;
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        ::std::shared_ptr<::ClientInstanceScreenModel> ptrModel,
        ::Player&                                      player,
        ::BlockPos const&                              pos,
        ::ActorUniqueID                                uniqueId
    );
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $addStaticScreenVars(::Json::Value& globalVars);

    MCAPI bool $_isStillValid() const;

    MCAPI void $_registerCoalesceOrder();

    MCAPI void $_registerAutoPlaceOrder();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftableForScreenController();

    MCNAPI static void** $vftableForEnableNonOwnerReferences();
    // NOLINTEND
};
