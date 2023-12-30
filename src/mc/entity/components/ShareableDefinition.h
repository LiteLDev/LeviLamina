#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/json/JsonSchemaObjectNode.h"

// auto generated forward declare list
// clang-format off
namespace JsonUtil { class EmptyClass; }
// clang-format on

class ShareableDefinition {
public:
    // prevent constructor by default
    ShareableDefinition& operator=(ShareableDefinition const&);
    ShareableDefinition(ShareableDefinition const&);

public:
    // NOLINTBEGIN
    // symbol: ??0ShareableDefinition@@QEAA@XZ
    MCAPI ShareableDefinition();

    // symbol: ?addShareable@ShareableDefinition@@QEAAXAEBUShareable@@@Z
    MCAPI void addShareable(struct Shareable const& shareable);

    // symbol:
    // ?addShareableByName@ShareableDefinition@@QEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCAPI void addShareableByName(std::string const& name);

    // symbol:
    // ?buildSchema@ShareableDefinition@@SAXAEAV?$shared_ptr@V?$JsonSchemaObjectNode@VEmptyClass@JsonUtil@@VShareableDefinition@@@JsonUtil@@@std@@@Z
    MCAPI static void buildSchema(
        std::shared_ptr<class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, class ShareableDefinition>>&
            root
    );

    // NOLINTEND
};
