#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/json/JsonSchemaObjectNode.h"
#include "mc/world/actor/ai/goal/WorkDefinition.h"

// auto generated forward declare list
// clang-format off
namespace JsonUtil { class EmptyClass; }
// clang-format on

class WorkComposterDefinition : public ::WorkDefinition {
public:
    // prevent constructor by default
    WorkComposterDefinition& operator=(WorkComposterDefinition const&);
    WorkComposterDefinition(WorkComposterDefinition const&);

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1WorkComposterDefinition@@UEAA@XZ
    virtual ~WorkComposterDefinition() = default;

    // symbol: ??0WorkComposterDefinition@@QEAA@XZ
    MCAPI WorkComposterDefinition();

    // symbol:
    // ?buildSchema@WorkComposterDefinition@@SAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAV?$shared_ptr@V?$JsonSchemaObjectNode@VEmptyClass@JsonUtil@@VWorkComposterDefinition@@@JsonUtil@@@3@@Z
    MCAPI static void buildSchema(
        std::string const& name,
        std::shared_ptr<
            class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, class WorkComposterDefinition>>& root
    );

    // NOLINTEND
};
