#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/json/JsonSchemaObjectNode.h"

// auto generated forward declare list
// clang-format off
namespace JsonUtil { class EmptyClass; }
// clang-format on

class AdmireItemDefinition {
public:
    // prevent constructor by default
    AdmireItemDefinition& operator=(AdmireItemDefinition const&);
    AdmireItemDefinition(AdmireItemDefinition const&);
    AdmireItemDefinition();

public:
    // NOLINTBEGIN
    // symbol:
    // ?buildSchema@AdmireItemDefinition@@SAXAEAV?$shared_ptr@V?$JsonSchemaObjectNode@VEmptyClass@JsonUtil@@VAdmireItemDefinition@@@JsonUtil@@@std@@@Z
    MCAPI static void buildSchema(
        std::shared_ptr<class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, class AdmireItemDefinition>>&
            root
    );

    // NOLINTEND
};
