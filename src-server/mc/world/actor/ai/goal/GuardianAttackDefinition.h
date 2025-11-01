#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/util/json_util/JsonSchemaObjectNode.h"
#include "mc/world/actor/ai/goal/BaseGoalDefinition.h"

// auto generated forward declare list
// clang-format off
class Mob;
namespace JsonUtil { class EmptyClass; }
// clang-format on

class GuardianAttackDefinition : public ::BaseGoalDefinition {
public:
    // GuardianAttackDefinition inner types define
    using self = ::GuardianAttackDefinition;
    
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, int> mMagicDamage;
    ::ll::TypedStorage<4, 4, int> mHardModeExtraMagicDamage;
    ::ll::TypedStorage<4, 4, int> mElderExtraMagicDamage;
    ::ll::TypedStorage<4, 4, float> mMaxRotationX;
    ::ll::TypedStorage<4, 4, float> mMaxHeadRotationY;
    ::ll::TypedStorage<4, 4, float> mMinDistance;
    ::ll::TypedStorage<4, 4, float> mSoundDelayTime;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 1
    virtual bool validateMobType(::Mob& mob) const /*override*/;

    // vIndex: 0
    virtual ~GuardianAttackDefinition() /*override*/ = default;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void buildSchema(::std::string const& name, ::std::shared_ptr<::JsonUtil::JsonSchemaObjectNode<::JsonUtil::EmptyClass, ::GuardianAttackDefinition>>& root);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI bool $validateMobType(::Mob& mob) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND

};
