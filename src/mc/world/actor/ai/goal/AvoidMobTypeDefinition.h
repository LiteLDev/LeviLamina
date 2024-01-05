#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/json/JsonSchemaObjectNode.h"
#include "mc/world/actor/ai/goal/BaseGoalDefinition.h"

// auto generated forward declare list
// clang-format off
namespace JsonUtil { class EmptyClass; }
// clang-format on

class AvoidMobTypeDefinition : public ::BaseGoalDefinition {
public:
    // prevent constructor by default
    AvoidMobTypeDefinition& operator=(AvoidMobTypeDefinition const&);
    AvoidMobTypeDefinition(AvoidMobTypeDefinition const&);

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1AvoidMobTypeDefinition@@UEAA@XZ
    virtual ~AvoidMobTypeDefinition() = default;

    // symbol: ??0AvoidMobTypeDefinition@@QEAA@XZ
    MCAPI AvoidMobTypeDefinition();

    // symbol: ?initialize@AvoidMobTypeDefinition@@QEBAXAEAVEntityContext@@AEAVAvoidMobTypeGoal@@@Z
    MCAPI void initialize(class EntityContext& entity, class AvoidMobTypeGoal& goal) const;

    // symbol:
    // ?buildSchema@AvoidMobTypeDefinition@@SAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAV?$shared_ptr@V?$JsonSchemaObjectNode@VEmptyClass@JsonUtil@@VAvoidMobTypeDefinition@@@JsonUtil@@@3@@Z
    MCAPI static void buildSchema(
        std::string const& name,
        std::shared_ptr<class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, class AvoidMobTypeDefinition>>&
            root
    );

    // NOLINTEND
};
