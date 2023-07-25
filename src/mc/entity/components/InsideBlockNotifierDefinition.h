#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/json/JsonSchemaObjectNode.h"

// auto generated forward declare list
// clang-format off
namespace JsonUtil { class EmptyClass; }
// clang-format on

class InsideBlockNotifierDefinition {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_INSIDEBLOCKNOTIFIERDEFINITION
public:
    InsideBlockNotifierDefinition& operator=(InsideBlockNotifierDefinition const&) = delete;
    InsideBlockNotifierDefinition(InsideBlockNotifierDefinition const&)            = delete;
    InsideBlockNotifierDefinition()                                                = delete;
#endif

public:
    /**
     * @symbol
     * ?initialize\@InsideBlockNotifierDefinition\@\@QEBAXAEAVEntityContext\@\@AEAVInsideBlockNotifierComponent\@\@\@Z
     */
    MCAPI void initialize(class EntityContext&, class InsideBlockNotifierComponent&) const;
    /**
     * @symbol
     * ?buildSchema\@InsideBlockNotifierDefinition\@\@SAXAEAV?$shared_ptr\@V?$JsonSchemaObjectNode\@VEmptyClass\@JsonUtil\@\@VInsideBlockNotifierDefinition\@\@\@JsonUtil\@\@\@std\@\@\@Z
     */
    MCAPI static void buildSchema(class std::shared_ptr<class JsonUtil::JsonSchemaObjectNode<
                                      class JsonUtil::EmptyClass,
                                      class InsideBlockNotifierDefinition>>&);
};
