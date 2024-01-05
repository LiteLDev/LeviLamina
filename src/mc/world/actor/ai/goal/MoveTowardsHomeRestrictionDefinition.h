#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/json/JsonSchemaObjectNode.h"
#include "mc/world/actor/ai/goal/MoveTowardsRestrictionDefinition.h"

// auto generated forward declare list
// clang-format off
namespace JsonUtil { class EmptyClass; }
// clang-format on

class MoveTowardsHomeRestrictionDefinition : public ::MoveTowardsRestrictionDefinition {
public:
    // prevent constructor by default
    MoveTowardsHomeRestrictionDefinition& operator=(MoveTowardsHomeRestrictionDefinition const&);
    MoveTowardsHomeRestrictionDefinition(MoveTowardsHomeRestrictionDefinition const&);

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1MoveTowardsHomeRestrictionDefinition@@UEAA@XZ
    virtual ~MoveTowardsHomeRestrictionDefinition() = default;

    // symbol: ??0MoveTowardsHomeRestrictionDefinition@@QEAA@XZ
    MCAPI MoveTowardsHomeRestrictionDefinition();

    // symbol:
    // ?buildSchema@MoveTowardsHomeRestrictionDefinition@@SAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAV?$shared_ptr@V?$JsonSchemaObjectNode@VEmptyClass@JsonUtil@@VMoveTowardsHomeRestrictionDefinition@@@JsonUtil@@@3@@Z
    MCAPI static void buildSchema(
        std::string const&                                name,
        std::shared_ptr<class JsonUtil::JsonSchemaObjectNode<
            class JsonUtil::EmptyClass,
            class MoveTowardsHomeRestrictionDefinition>>& root
    );

    // NOLINTEND
};
