#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/json/JsonSchemaObjectNode.h"

// auto generated forward declare list
// clang-format off
namespace JsonUtil { class EmptyClass; }
// clang-format on

class AddRiderDefinition {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ADDRIDERDEFINITION
public:
    AddRiderDefinition& operator=(AddRiderDefinition const&) = delete;
    AddRiderDefinition(AddRiderDefinition const&)            = delete;
    AddRiderDefinition()                                     = delete;
#endif

public:
    /**
     * @symbol ?initialize\@AddRiderDefinition\@\@QEBAXAEAVEntityContext\@\@AEAVAddRiderComponent\@\@\@Z
     */
    MCAPI void initialize(class EntityContext&, class AddRiderComponent&) const;
    /**
     * @symbol
     * ?buildSchema\@AddRiderDefinition\@\@SAXAEAV?$shared_ptr\@V?$JsonSchemaObjectNode\@VEmptyClass\@JsonUtil\@\@VAddRiderDefinition\@\@\@JsonUtil\@\@\@std\@\@\@Z
     */
    MCAPI static void
    buildSchema(class std::shared_ptr<
                class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, class AddRiderDefinition>>&);
};
