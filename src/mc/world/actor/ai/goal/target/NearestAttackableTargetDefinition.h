#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/util/json_util/JsonSchemaObjectNode.h"
#include "mc/world/actor/ai/goal/target/TargetGoalDefinition.h"

// auto generated forward declare list
// clang-format off
class Mob;
namespace JsonUtil { class EmptyClass; }
// clang-format on

class NearestAttackableTargetDefinition : public ::TargetGoalDefinition {
public:
    // NearestAttackableTargetDefinition inner types define
    using self = ::NearestAttackableTargetDefinition;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool>  mReselectTargets;
    ::ll::TypedStorage<4, 4, int>   mAttackInterval;
    ::ll::TypedStorage<4, 4, int>   mScanInterval;
    ::ll::TypedStorage<4, 4, float> mTargetSearchHeight;
    ::ll::TypedStorage<4, 4, float> mTargetInvisibleMultiplier;
    ::ll::TypedStorage<4, 4, float> mTargetSneakVisibilityMultiplier;
    ::ll::TypedStorage<1, 1, bool>  mSetPersistent;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual bool validate(::Mob& mob) const /*override*/;

    virtual ~NearestAttackableTargetDefinition() /*override*/ = default;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void buildSchema(
        ::std::string const& name,
        ::std::shared_ptr<
            ::JsonUtil::JsonSchemaObjectNode<::JsonUtil::EmptyClass, ::NearestAttackableTargetDefinition>>& root
    );
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI bool $validate(::Mob& mob) const;


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
