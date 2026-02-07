#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/screens/controllers/ContainerScreenController.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
class ClientInstanceScreenModel;
class ElementConstructorContainerManagerController;
class Player;
struct ActorUniqueID;
// clang-format on

class ElementConstructorScreenController : public ::ContainerScreenController {
public:
    // ElementConstructorScreenController inner types define
    enum class ParticleType : uchar {};

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::ElementConstructorContainerManagerController>> mManagerController;
    ::ll::TypedStorage<4, 12, int[3]>                                                            mParticleCounts;
    ::ll::TypedStorage<1, 1, bool>                                                               mInitModel;
    // NOLINTEND

public:
    // prevent constructor by default
    ElementConstructorScreenController();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ElementConstructorScreenController() /*override*/ = default;

    virtual bool _isStillValid() const /*override*/;

    virtual void _registerCoalesceOrder() /*override*/;

    virtual void _registerAutoPlaceOrder() /*override*/;

    virtual ::std::string _getButtonADescription() /*override*/;

    virtual ::std::string _getButtonXDescription() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ElementConstructorScreenController(
        ::std::shared_ptr<::ClientInstanceScreenModel> model,
        ::Player&                                      player,
        ::BlockPos const&                              pos,
        ::ActorUniqueID                                uniqueId
    );

    MCAPI void _registerBindings();

    MCAPI void _registerEventHandlers();

    MCAPI void
    _registerParticleBindings(::ElementConstructorScreenController::ParticleType type, ::std::string const& name);

    MCAPI void
    _registerParticleEventHandlers(::ElementConstructorScreenController::ParticleType type, ::std::string const& name);

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
    MCFOLD bool $_isStillValid() const;

    MCAPI void $_registerCoalesceOrder();

    MCAPI void $_registerAutoPlaceOrder();

    MCAPI ::std::string $_getButtonADescription();

    MCAPI ::std::string $_getButtonXDescription();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftableForScreenController();

    MCNAPI static void** $vftableForEnableNonOwnerReferences();
    // NOLINTEND
};
