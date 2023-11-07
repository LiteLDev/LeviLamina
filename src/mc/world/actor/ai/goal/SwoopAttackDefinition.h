#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/json/JsonSchemaObjectNode.h"
#include "mc/world/actor/ai/goal/BaseGoalDefinition.h"

// auto generated forward declare list
// clang-format off
namespace JsonUtil { class EmptyClass; }
// clang-format on

class SwoopAttackDefinition : public ::BaseGoalDefinition {
public:
    // prevent constructor by default
    SwoopAttackDefinition& operator=(SwoopAttackDefinition const&);
    SwoopAttackDefinition(SwoopAttackDefinition const&);
    SwoopAttackDefinition();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1@@UEAA@XZ
    virtual ~SwoopAttackDefinition() = default;

    // symbol:
    // ?buildSchema@SwoopAttackDefinition@@SAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAV?$shared_ptr@V?$JsonSchemaObjectNode@VEmptyClass@JsonUtil@@VSwoopAttackDefinition@@@JsonUtil@@@3@@Z
    MCAPI static void
    buildSchema(std::string const&, std::shared_ptr<class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, class SwoopAttackDefinition>>&);

    // NOLINTEND
};
