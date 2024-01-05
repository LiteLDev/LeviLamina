#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/json/JsonSchemaObjectNode.h"

// auto generated forward declare list
// clang-format off
namespace JsonUtil { class EmptyClass; }
// clang-format on

struct FamilyTypeDefinition {
public:
    // prevent constructor by default
    FamilyTypeDefinition& operator=(FamilyTypeDefinition const&);
    FamilyTypeDefinition(FamilyTypeDefinition const&);
    FamilyTypeDefinition();

public:
    // NOLINTBEGIN
    // symbol:
    // ?addFamilyName@FamilyTypeDefinition@@QEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCAPI void addFamilyName(std::string const& name);

    // symbol:
    // ?buildSchema@FamilyTypeDefinition@@SAXAEAV?$shared_ptr@V?$JsonSchemaObjectNode@VEmptyClass@JsonUtil@@UFamilyTypeDefinition@@@JsonUtil@@@std@@@Z
    MCAPI static void buildSchema(
        std::shared_ptr<class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, struct FamilyTypeDefinition>>&
            root
    );

    // NOLINTEND
};
