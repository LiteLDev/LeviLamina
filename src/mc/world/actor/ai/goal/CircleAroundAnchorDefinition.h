#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/json/JsonSchemaObjectNode.h"
#include "mc/world/actor/ai/goal/BaseGoalDefinition.h"

// auto generated forward declare list
// clang-format off
namespace JsonUtil { class EmptyClass; }
// clang-format on

class CircleAroundAnchorDefinition : public ::BaseGoalDefinition {
public:
    // prevent constructor by default
    CircleAroundAnchorDefinition& operator=(CircleAroundAnchorDefinition const&);
    CircleAroundAnchorDefinition(CircleAroundAnchorDefinition const&);

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1@@UEAA@XZ
    virtual ~CircleAroundAnchorDefinition();

    // symbol: ??0CircleAroundAnchorDefinition@@QEAA@XZ
    MCAPI CircleAroundAnchorDefinition();

    // symbol: ?initialize@CircleAroundAnchorDefinition@@QEBAXAEAVEntityContext@@AEAVCircleAroundAnchorGoal@@@Z
    MCAPI void initialize(class EntityContext&, class CircleAroundAnchorGoal&) const;

    // symbol:
    // ?buildSchema@CircleAroundAnchorDefinition@@SAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAV?$shared_ptr@V?$JsonSchemaObjectNode@VEmptyClass@JsonUtil@@VCircleAroundAnchorDefinition@@@JsonUtil@@@3@@Z
    MCAPI static void
    buildSchema(std::string const&, std::shared_ptr<class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, class CircleAroundAnchorDefinition>>&);

    // NOLINTEND
};
