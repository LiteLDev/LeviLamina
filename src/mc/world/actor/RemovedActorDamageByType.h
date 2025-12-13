#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/ActorDamageSource.h"
#include "mc/world/actor/ActorType.h"

// auto generated forward declare list
// clang-format off
class Actor;
// clang-format on

class RemovedActorDamageByType : public ::ActorDamageSource {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnk5e9bfe;
    // NOLINTEND

public:
    // prevent constructor by default
    RemovedActorDamageByType& operator=(RemovedActorDamageByType const&);
    RemovedActorDamageByType(RemovedActorDamageByType const&);
    RemovedActorDamageByType();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ::std::pair<::std::string, ::std::vector<::std::string>>
    getDeathMessage(::std::string deadName, ::Actor* dead) const /*override*/;

    virtual ::std::unique_ptr<::ActorDamageSource> clone() const /*override*/;

    virtual ::ActorType getEntityType() const /*override*/;

    virtual ~RemovedActorDamageByType() /*override*/ = default;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
