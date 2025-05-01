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
    ::ll::UntypedStorage<4, 4> mUnkc0f659;
    ::ll::UntypedStorage<4, 4> mUnk93e40b;
    ::ll::UntypedStorage<4, 4> mUnk700165;
    // NOLINTEND

public:
    // prevent constructor by default
    Boat& operator=(Boat const&);
    Boat(Boat const&);
    Boat();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 2
    virtual void reloadHardcoded(::ActorInitializationMethod method, ::VariantParameterList const& params) /*override*/;

    // vIndex: 3
    virtual void reloadHardcodedClient(::ActorInitializationMethod method) /*override*/;

    // vIndex: 138
    virtual void destroy(::Actor* source);

    // vIndex: 24
    virtual void normalTick() /*override*/;

    // vIndex: 35
    virtual float getShadowRadius() const /*override*/;

    // vIndex: 29
    virtual ::std::string getExitTip(::std::string const& kind, ::InputMode mode, ::NewInteractionModel scheme) const
        /*override*/;

    // vIndex: 94
    virtual bool canAddPassenger(::Actor& passenger) const /*override*/;

    // vIndex: 91
    virtual ::ActorUniqueID getControllingPlayer() const /*override*/;

    // vIndex: 115
    virtual float getPassengerYRotation(::Actor const& passenger) const /*override*/;

    // vIndex: 64
    virtual bool isInvulnerableTo(::ActorDamageSource const& source) const /*override*/;

    // vIndex: 135
    virtual bool _hurt(::ActorDamageSource const& source, float damage, bool knock, bool ignite) /*override*/;

    // vIndex: 8
    virtual ~Boat() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI Boat(
        ::ActorDefinitionGroup*            definitions,
        ::ActorDefinitionIdentifier const& definitionName,
        ::EntityContext&                   entityContext
    );

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
    // destructor thunk
    // NOLINTBEGIN

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

    MCNAPI bool $_hurt(::ActorDamageSource const& source, float damage, bool knock, bool ignite);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
