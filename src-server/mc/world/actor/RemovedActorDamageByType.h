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
    ::ll::TypedStorage<4, 4, ::ActorType> mEntityType;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 10
    virtual ::std::pair<::std::string, ::std::vector<::std::string>>
    getDeathMessage(::std::string deadName, ::Actor* dead) const /*override*/;

    // vIndex: 21
    virtual ::std::unique_ptr<::ActorDamageSource> clone() const /*override*/;

    // vIndex: 14
    virtual ::ActorType getEntityType() const /*override*/;

    // vIndex: 0
    virtual ~RemovedActorDamageByType() /*override*/ = default;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
