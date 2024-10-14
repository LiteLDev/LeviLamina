#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/json_utils/JsonSchemaObjectNode.h"
#include "mc/world/actor/ai/goal/BaseGoalDefinition.h"

// auto generated forward declare list
// clang-format off
namespace JsonUtil { class EmptyClass; }
// clang-format on

class ExploreOutskirtsDefinition : public ::BaseGoalDefinition {
public:
    // prevent constructor by default
    ExploreOutskirtsDefinition& operator=(ExploreOutskirtsDefinition const&);
    ExploreOutskirtsDefinition(ExploreOutskirtsDefinition const&);

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ExploreOutskirtsDefinition() = default;

    MCAPI ExploreOutskirtsDefinition();

    MCAPI void initialize(class EntityContext& entity, class ExploreOutskirtsGoal& goal) const;

    MCAPI static void buildSchema(
        std::string const& name,
        std::shared_ptr<
            class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, class ExploreOutskirtsDefinition>>& root
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

    // NOLINTEND
};
