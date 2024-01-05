#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/json/JsonSchemaObjectNode.h"
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
    // vIndex: 0, symbol: __gen_??1ExploreOutskirtsDefinition@@UEAA@XZ
    virtual ~ExploreOutskirtsDefinition() = default;

    // symbol: ??0ExploreOutskirtsDefinition@@QEAA@XZ
    MCAPI ExploreOutskirtsDefinition();

    // symbol: ?initialize@ExploreOutskirtsDefinition@@QEBAXAEAVEntityContext@@AEAVExploreOutskirtsGoal@@@Z
    MCAPI void initialize(class EntityContext& entity, class ExploreOutskirtsGoal& goal) const;

    // symbol:
    // ?buildSchema@ExploreOutskirtsDefinition@@SAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAV?$shared_ptr@V?$JsonSchemaObjectNode@VEmptyClass@JsonUtil@@VExploreOutskirtsDefinition@@@JsonUtil@@@3@@Z
    MCAPI static void buildSchema(
        std::string const& name,
        std::shared_ptr<
            class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, class ExploreOutskirtsDefinition>>& root
    );

    // NOLINTEND
};
