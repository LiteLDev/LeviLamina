#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/input/InputMode.h"
#include "mc/input/NewInteractionModel.h"
#include "mc/world/actor/Actor.h"
#include "mc/world/actor/ActorInitializationMethod.h"

// auto generated forward declare list
// clang-format off
class ActorDamageSource;
class ActorDefinitionGroup;
class EntityContext;
struct ActorDefinitionIdentifier;
struct ActorUniqueID;
struct VariantParameterList;
// clang-format on

class Boat : public ::Actor {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, float> mBubbleMultiplier;
    ::ll::TypedStorage<4, 4, float> mBubbleAngle;
    ::ll::TypedStorage<4, 4, float> mBubbleAngleOld;
    // NOLINTEND

public:
    // prevent constructor by default
    Boat();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual void reloadHardcoded(::ActorInitializationMethod method, ::VariantParameterList const& params) /*override*/;

    virtual void reloadHardcodedClient(::ActorInitializationMethod method) /*override*/;

    virtual void destroy(::Actor* source);

    virtual void normalTick() /*override*/;

    virtual float getShadowRadius() const /*override*/;

    virtual ::std::string getExitTip(::std::string const& kind, ::InputMode mode, ::NewInteractionModel scheme) const
        /*override*/;

    virtual bool canAddPassenger(::Actor& passenger) const /*override*/;

    virtual ::ActorUniqueID getControllingPlayer() const /*override*/;

    virtual float getPassengerYRotation(::Actor const& passenger) const /*override*/;

    virtual bool isInvulnerableTo(::ActorDamageSource const& source) const /*override*/;

    virtual bool _hurt(::ActorDamageSource const& source, float damage, bool, bool) /*override*/;

    virtual ~Boat() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI Boat(
        ::ActorDefinitionGroup*            definitions,
        ::ActorDefinitionIdentifier const& definitionName,
        ::EntityContext&                   entityContext
    );

    MCAPI_C ::std::string getExitText(bool isPocket) const;

    MCFOLD uchar getWoodID() const;
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        ::ActorDefinitionGroup*            definitions,
        ::ActorDefinitionIdentifier const& definitionName,
        ::EntityContext&                   entityContext
    );
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $reloadHardcoded(::ActorInitializationMethod method, ::VariantParameterList const& params);

    MCAPI void $reloadHardcodedClient(::ActorInitializationMethod method);

    MCAPI void $destroy(::Actor* source);

    MCAPI void $normalTick();

    MCFOLD float $getShadowRadius() const;

    MCAPI ::std::string $getExitTip(::std::string const& kind, ::InputMode mode, ::NewInteractionModel scheme) const;

    MCAPI bool $canAddPassenger(::Actor& passenger) const;

    MCAPI ::ActorUniqueID $getControllingPlayer() const;

    MCAPI float $getPassengerYRotation(::Actor const& passenger) const;

    MCFOLD bool $isInvulnerableTo(::ActorDamageSource const& source) const;

    MCAPI bool $_hurt(::ActorDamageSource const& source, float damage, bool, bool);


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
