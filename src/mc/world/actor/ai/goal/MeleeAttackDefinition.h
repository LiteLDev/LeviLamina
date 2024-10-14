#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/json_utils/JsonSchemaObjectNode.h"
#include "mc/world/actor/ai/goal/MeleeAttackBaseDefinition.h"

// auto generated forward declare list
// clang-format off
namespace JsonUtil { class EmptyClass; }
// clang-format on

class MeleeAttackDefinition : public ::MeleeAttackBaseDefinition {
public:
    // prevent constructor by default
    MeleeAttackDefinition& operator=(MeleeAttackDefinition const&);
    MeleeAttackDefinition(MeleeAttackDefinition const&);

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~MeleeAttackDefinition();

    MCAPI MeleeAttackDefinition();

    MCAPI void initialize(class EntityContext& entity, class MeleeAttackGoal& goal) const;

    MCAPI static void buildSchema(
        std::string const& name,
        std::shared_ptr<class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, class MeleeAttackDefinition>>&
            root
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

    MCAPI void dtor$();

    // NOLINTEND
};
