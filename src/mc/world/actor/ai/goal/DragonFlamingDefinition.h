#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/json/JsonSchemaObjectNode.h"
#include "mc/world/actor/ai/goal/BaseGoalDefinition.h"

// auto generated forward declare list
// clang-format off
namespace JsonUtil { class EmptyClass; }
// clang-format on

class DragonFlamingDefinition : public ::BaseGoalDefinition {
public:
    // prevent constructor by default
    DragonFlamingDefinition& operator=(DragonFlamingDefinition const&);
    DragonFlamingDefinition(DragonFlamingDefinition const&);

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1DragonFlamingDefinition@@UEAA@XZ
    virtual ~DragonFlamingDefinition() = default;

    // vIndex: 1, symbol: ?validateMobType@DragonFlamingDefinition@@UEBA_NAEAVMob@@@Z
    virtual bool validateMobType(class Mob& mob) const;

    // symbol: ??0DragonFlamingDefinition@@QEAA@XZ
    MCAPI DragonFlamingDefinition();

    // symbol: ?initialize@DragonFlamingDefinition@@QEBAXAEAVEntityContext@@AEAVDragonFlamingGoal@@@Z
    MCAPI void initialize(class EntityContext& entity, class DragonFlamingGoal& goal) const;

    // symbol:
    // ?buildSchema@DragonFlamingDefinition@@SAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAV?$shared_ptr@V?$JsonSchemaObjectNode@VEmptyClass@JsonUtil@@VDragonFlamingDefinition@@@JsonUtil@@@3@@Z
    MCAPI static void buildSchema(
        std::string const& name,
        std::shared_ptr<
            class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, class DragonFlamingDefinition>>& root
    );

    // NOLINTEND
};
