#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/util/FloatRange.h"
#include "mc/util/json_util/JsonSchemaObjectNode.h"
#include "mc/world/actor/ActorDefinitionTrigger.h"
#include "mc/world/actor/ActorFilterGroup.h"

// auto generated forward declare list
// clang-format off
class AngryComponent;
class EntityContext;
class HashedString;
namespace JsonUtil { class EmptyClass; }
// clang-format on

class AngryDefinition {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, int>                            mDuration;
    ::ll::TypedStorage<4, 4, int>                            mDurationDelta;
    ::ll::TypedStorage<1, 1, bool>                           mBroadcastAnger;
    ::ll::TypedStorage<1, 1, bool>                           mBroadcastOnAttack;
    ::ll::TypedStorage<1, 1, bool>                           mBroadcastOnBeingAttacked;
    ::ll::TypedStorage<1, 1, bool>                           mBroadcastAngerWhenDying;
    ::ll::TypedStorage<4, 4, int>                            mBroadcastRange;
    ::ll::TypedStorage<8, 64, ::ActorFilterGroup>            mBroadcastFilter;
    ::ll::TypedStorage<8, 104, ::ActorDefinitionTrigger>     mOnCalm;
    ::ll::TypedStorage<8, 24, ::std::vector<::HashedString>> mBroadcastTargets;
    ::ll::TypedStorage<8, 64, ::ActorFilterGroup>            mSubjectFilter;
    ::ll::TypedStorage<8, 32, ::std::string>                 mAngrySound;
    ::ll::TypedStorage<4, 8, ::FloatRange>                   mSoundInterval;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void addBroadcastTargetByName(::std::string const& name);

    MCAPI void initialize(::EntityContext& entity, ::AngryComponent& component) const;

    MCAPI ~AngryDefinition();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void
    buildSchema(::std::shared_ptr<::JsonUtil::JsonSchemaObjectNode<::JsonUtil::EmptyClass, ::AngryDefinition>>& root);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
