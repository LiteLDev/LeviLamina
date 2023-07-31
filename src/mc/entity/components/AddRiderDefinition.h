#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/json/JsonSchemaObjectNode.h"

// auto generated forward declare list
// clang-format off
namespace JsonUtil { class EmptyClass; }
// clang-format on

class AddRiderDefinition {

public:
    // prevent constructor by default
    AddRiderDefinition& operator=(AddRiderDefinition const&) = delete;
    AddRiderDefinition(AddRiderDefinition const&)            = delete;
    AddRiderDefinition()                                     = delete;

public:
    // NOLINTBEGIN
    /**
     * @symbol
     * ?buildSchema\@AddRiderDefinition\@\@SAXAEAV?$shared_ptr\@V?$JsonSchemaObjectNode\@VEmptyClass\@JsonUtil\@\@VAddRiderDefinition\@\@\@JsonUtil\@\@\@std\@\@\@Z
     */
    MCAPI static void
    buildSchema(std::shared_ptr<
                class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, class AddRiderDefinition>>&);
    /**
     * @symbol ?initialize\@AddRiderDefinition\@\@QEBAXAEAVEntityContext\@\@AEAVAddRiderComponent\@\@\@Z
     */
    MCAPI void initialize(class EntityContext&, class AddRiderComponent&) const;
    // NOLINTEND
};
