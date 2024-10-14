#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/json_utils/JsonSchemaObjectNode.h"
#include "mc/world/actor/ai/goal/BaseGoalDefinition.h"

// auto generated forward declare list
// clang-format off
namespace JsonUtil { class EmptyClass; }
// clang-format on

class GuardianAttackDefinition : public ::BaseGoalDefinition {
public:
    // prevent constructor by default
    GuardianAttackDefinition& operator=(GuardianAttackDefinition const&);
    GuardianAttackDefinition(GuardianAttackDefinition const&);

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~GuardianAttackDefinition() = default;

    // vIndex: 1
    virtual bool validateMobType(class Mob& mob) const;

    MCAPI GuardianAttackDefinition();

    MCAPI void initialize(class EntityContext& entity, class GuardianAttackGoal& goal) const;

    MCAPI static void buildSchema(
        std::string const& name,
        std::shared_ptr<
            class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, class GuardianAttackDefinition>>& root
    );

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** $vftable();

    template <class... Args>
    auto* ctor$(Args... args) {
        return std::construct_at(this, std::forward<Args>(args)...);
    }

    MCAPI bool validateMobType$(class Mob& mob) const;

    // NOLINTEND
};
