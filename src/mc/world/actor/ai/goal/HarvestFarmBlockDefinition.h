#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/json/JsonSchemaObjectNode.h"
#include "mc/world/actor/ai/goal/BaseGoalDefinition.h"

// auto generated forward declare list
// clang-format off
namespace JsonUtil { class EmptyClass; }
// clang-format on

class HarvestFarmBlockDefinition : public ::BaseGoalDefinition {
public:
    // prevent constructor by default
    HarvestFarmBlockDefinition& operator=(HarvestFarmBlockDefinition const&);
    HarvestFarmBlockDefinition(HarvestFarmBlockDefinition const&);

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1@@UEAA@XZ
    virtual ~HarvestFarmBlockDefinition() = default;

    // symbol: ??0HarvestFarmBlockDefinition@@QEAA@XZ
    MCAPI HarvestFarmBlockDefinition();

    // symbol: ?initialize@HarvestFarmBlockDefinition@@QEBAXAEAVEntityContext@@AEAVHarvestFarmBlockGoal@@@Z
    MCAPI void initialize(class EntityContext&, class HarvestFarmBlockGoal&) const;

    // symbol:
    // ?buildSchema@HarvestFarmBlockDefinition@@SAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAV?$shared_ptr@V?$JsonSchemaObjectNode@VEmptyClass@JsonUtil@@VHarvestFarmBlockDefinition@@@JsonUtil@@@3@@Z
    MCAPI static void
    buildSchema(std::string const&, std::shared_ptr<class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, class HarvestFarmBlockDefinition>>&);

    // NOLINTEND
};
