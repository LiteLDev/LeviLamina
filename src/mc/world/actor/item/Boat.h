#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/input/InputMode.h"
#include "mc/deps/shared_types/legacy/Side.h"
#include "mc/input/NewInteractionModel.h"
#include "mc/world/actor/Actor.h"
#include "mc/world/actor/ActorInitializationMethod.h"

// auto generated forward declare list
// clang-format off
class ActorDamageSource;
class ActorDefinitionGroup;
class ActorHurtResult;
class EntityContext;
struct ActorDefinitionIdentifier;
struct ActorUniqueID;
struct HurtParameters;
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

    virtual ::ActorHurtResult
    _hurt(::ActorDamageSource const& source, float damage, ::HurtParameters const&) /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI Boat(
        ::ActorDefinitionGroup*            definitions,
        ::ActorDefinitionIdentifier const& definitionName,
        ::EntityContext&                   entityContext
    );

#ifdef LL_PLAT_C
    MCNAPI ::std::string getExitText(bool isPocket) const;

    MCNAPI float getRowingTime(::SharedTypes::Side side, float alpha) const;
#endif

    MCNAPI uchar getWoodID() const;
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
        ::ActorDefinitionGroup*            definitions,
        ::ActorDefinitionIdentifier const& definitionName,
        ::EntityContext&                   entityContext
    );
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $reloadHardcoded(::ActorInitializationMethod method, ::VariantParameterList const& params);

    MCNAPI void $reloadHardcodedClient(::ActorInitializationMethod method);

    MCNAPI void $destroy(::Actor* source);

    MCNAPI void $normalTick();

    MCNAPI float $getShadowRadius() const;

    MCNAPI ::std::string $getExitTip(::std::string const& kind, ::InputMode mode, ::NewInteractionModel scheme) const;

    MCNAPI bool $canAddPassenger(::Actor& passenger) const;

    MCNAPI ::ActorUniqueID $getControllingPlayer() const;

    MCNAPI float $getPassengerYRotation(::Actor const& passenger) const;

    MCNAPI bool $isInvulnerableTo(::ActorDamageSource const& source) const;

    MCNAPI ::ActorHurtResult $_hurt(::ActorDamageSource const& source, float damage, ::HurtParameters const&);


    // NOLINTEND
};
