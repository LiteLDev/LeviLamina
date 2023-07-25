#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/json/JsonSchemaObjectNode.h"

// auto generated forward declare list
// clang-format off
namespace JsonUtil { class EmptyClass; }
// clang-format on

struct FamilyTypeDefinition {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_FAMILYTYPEDEFINITION
public:
    FamilyTypeDefinition& operator=(FamilyTypeDefinition const&) = delete;
    FamilyTypeDefinition(FamilyTypeDefinition const&)            = delete;
    FamilyTypeDefinition()                                       = delete;
#endif

public:
    /**
     * @symbol
     * ?addFamilyName\@FamilyTypeDefinition\@\@QEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI void addFamilyName(std::string const&);
    /**
     * @symbol
     * ?buildSchema\@FamilyTypeDefinition\@\@SAXAEAV?$shared_ptr\@V?$JsonSchemaObjectNode\@VEmptyClass\@JsonUtil\@\@UFamilyTypeDefinition\@\@\@JsonUtil\@\@\@std\@\@\@Z
     */
    MCAPI static void
    buildSchema(class std::shared_ptr<
                class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, struct FamilyTypeDefinition>>&);
};
