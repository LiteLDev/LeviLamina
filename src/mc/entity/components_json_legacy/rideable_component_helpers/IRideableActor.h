#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class EntityContext;
struct ActorUniqueID;
struct FamilyTypeDefinition;
// clang-format on

namespace RideableComponentHelpers {

class IRideableActor {
public:
    // prevent constructor by default
    IRideableActor& operator=(IRideableActor const&);
    IRideableActor(IRideableActor const&);
    IRideableActor();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~IRideableActor() = default;

    // vIndex: 1
    virtual ::ActorUniqueID const& getOrCreateUniqueID() const = 0;

    // vIndex: 2
    virtual ::EntityContext const& getEntity() const = 0;

    // vIndex: 3
    virtual ::FamilyTypeDefinition const* getFamilyTypeDefinition() const = 0;

    // vIndex: 4
    virtual bool isPaused() const = 0;

    // vIndex: 5
    virtual bool isAlive() const = 0;

    // vIndex: 6
    virtual bool canBeAddedAsPassenger(::RideableComponentHelpers::IRideableActor const&) const = 0;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace RideableComponentHelpers
