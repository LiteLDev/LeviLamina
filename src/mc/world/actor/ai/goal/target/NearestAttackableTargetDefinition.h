#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/json_utils/JsonSchemaObjectNode.h"
#include "mc/world/actor/ai/goal/target/TargetGoalDefinition.h"

// auto generated forward declare list
// clang-format off
namespace JsonUtil { class EmptyClass; }
// clang-format on

class NearestAttackableTargetDefinition : public ::TargetGoalDefinition {
public:
    // prevent constructor by default
    NearestAttackableTargetDefinition& operator=(NearestAttackableTargetDefinition const&);
    NearestAttackableTargetDefinition(NearestAttackableTargetDefinition const&);
    NearestAttackableTargetDefinition();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~NearestAttackableTargetDefinition() = default;

    // vIndex: 2
    virtual bool validate(class Mob& mob) const;

    MCAPI void initialize(class EntityContext& entity, class NearestAttackableTargetGoal& goal) const;

    MCAPI static void buildSchema(
        std::string const& name,
        std::shared_ptr<
            class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, class NearestAttackableTargetDefinition>>&
            root
    );

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** vftable();

    MCAPI bool validate$(class Mob& mob) const;

    // NOLINTEND
};
