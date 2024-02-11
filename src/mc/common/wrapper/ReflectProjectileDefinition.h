#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/json/JsonSchemaObjectNode.h"

// auto generated forward declare list
// clang-format off
namespace JsonUtil { class EmptyClass; }
// clang-format on

class ReflectProjectileDefinition {
public:
    // prevent constructor by default
    ReflectProjectileDefinition& operator=(ReflectProjectileDefinition const&);
    ReflectProjectileDefinition(ReflectProjectileDefinition const&);
    ReflectProjectileDefinition();

public:
    // NOLINTBEGIN
    // symbol:
    // ?buildSchema@ReflectProjectileDefinition@@SAXAEAV?$shared_ptr@V?$JsonSchemaObjectNode@VEmptyClass@JsonUtil@@VReflectProjectileDefinition@@@JsonUtil@@@std@@@Z
    MCAPI static void
    buildSchema(std::shared_ptr<
                class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, class ReflectProjectileDefinition>>&);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol:
    // ?_addProjectileToReflect@ReflectProjectileDefinition@@AEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCAPI void _addProjectileToReflect(std::string const&);

    // NOLINTEND
};
