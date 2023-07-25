#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/json/JsonSchemaObjectNode.h"

// auto generated forward declare list
// clang-format off
namespace JsonUtil { class EmptyClass; }
// clang-format on

class EquippableDefinition {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_EQUIPPABLEDEFINITION
public:
    EquippableDefinition& operator=(EquippableDefinition const&) = delete;
    EquippableDefinition(EquippableDefinition const&)            = delete;
    EquippableDefinition()                                       = delete;
#endif

public:
    /**
     * @symbol ?initialize\@EquippableDefinition\@\@QEBAXAEAVEntityContext\@\@AEAVEquippableComponent\@\@\@Z
     */
    MCAPI void initialize(class EntityContext&, class EquippableComponent&) const;
    /**
     * @symbol
     * ?buildSchema\@EquippableDefinition\@\@SAXAEAV?$shared_ptr\@V?$JsonSchemaObjectNode\@VEmptyClass\@JsonUtil\@\@VEquippableDefinition\@\@\@JsonUtil\@\@\@std\@\@\@Z
     */
    MCAPI static void
    buildSchema(class std::shared_ptr<
                class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, class EquippableDefinition>>&);
};
