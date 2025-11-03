#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/ActorType.h"

// auto generated forward declare list
// clang-format off
class Actor;
class ActorDefinitionGroup;
class EntityContext;
struct ActorDefinitionIdentifier;
// clang-format on

struct VanillaActorData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, ::ActorType> mActorType;
    ::ll::TypedStorage<1, 1, bool>        mAllowSummon;
    ::ll::TypedStorage<
        8,
        8,
        ::std::unique_ptr<::Actor> (*)(::ActorDefinitionGroup*, ::ActorDefinitionIdentifier const&, ::EntityContext&)>
                                                   mFactory;
    ::ll::TypedStorage<4, 8, ::std::optional<int>> experimentIndex;
    // NOLINTEND
};
