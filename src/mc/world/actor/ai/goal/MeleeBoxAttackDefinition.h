#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/json/JsonSchemaObjectNode.h"
#include "mc/world/actor/ai/goal/MeleeAttackBaseDefinition.h"

// auto generated forward declare list
// clang-format off
namespace JsonUtil { class EmptyClass; }
// clang-format on

class MeleeBoxAttackDefinition : public ::MeleeAttackBaseDefinition {
public:
    // prevent constructor by default
    MeleeBoxAttackDefinition& operator=(MeleeBoxAttackDefinition const&);
    MeleeBoxAttackDefinition(MeleeBoxAttackDefinition const&);

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~MeleeBoxAttackDefinition() = default;

    MCAPI MeleeBoxAttackDefinition();

    MCAPI void initialize(class EntityContext&, class MeleeBoxAttackGoal&) const;

    MCAPI static void
    buildSchema(std::string const&, std::shared_ptr<class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, class MeleeBoxAttackDefinition>>&);

    // NOLINTEND
};
