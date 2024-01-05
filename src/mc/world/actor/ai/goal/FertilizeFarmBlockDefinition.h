#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/json/JsonSchemaObjectNode.h"
#include "mc/world/actor/ai/goal/BaseGoalDefinition.h"

// auto generated forward declare list
// clang-format off
namespace JsonUtil { class EmptyClass; }
// clang-format on

class FertilizeFarmBlockDefinition : public ::BaseGoalDefinition {
public:
    // prevent constructor by default
    FertilizeFarmBlockDefinition& operator=(FertilizeFarmBlockDefinition const&);
    FertilizeFarmBlockDefinition(FertilizeFarmBlockDefinition const&);

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1FertilizeFarmBlockDefinition@@UEAA@XZ
    virtual ~FertilizeFarmBlockDefinition() = default;

    // symbol: ??0FertilizeFarmBlockDefinition@@QEAA@XZ
    MCAPI FertilizeFarmBlockDefinition();

    // symbol: ?initialize@FertilizeFarmBlockDefinition@@QEBAXAEAVEntityContext@@AEAVFertilizeFarmBlockGoal@@@Z
    MCAPI void initialize(class EntityContext& entity, class FertilizeFarmBlockGoal& goal) const;

    // symbol:
    // ?buildSchema@FertilizeFarmBlockDefinition@@SAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAV?$shared_ptr@V?$JsonSchemaObjectNode@VEmptyClass@JsonUtil@@VFertilizeFarmBlockDefinition@@@JsonUtil@@@3@@Z
    MCAPI static void buildSchema(
        std::string const& name,
        std::shared_ptr<
            class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, class FertilizeFarmBlockDefinition>>& root
    );

    // NOLINTEND
};
