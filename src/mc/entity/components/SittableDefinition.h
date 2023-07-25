#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/json/JsonSchemaObjectNode.h"

// auto generated forward declare list
// clang-format off
namespace JsonUtil { class EmptyClass; }
// clang-format on

class SittableDefinition {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SITTABLEDEFINITION
public:
    SittableDefinition& operator=(SittableDefinition const&) = delete;
    SittableDefinition(SittableDefinition const&)            = delete;
    SittableDefinition()                                     = delete;
#endif

public:
    /**
     * @symbol ?uninitialize\@SittableDefinition\@\@QEBAXAEAVEntityContext\@\@AEAVSitComponent\@\@\@Z
     */
    MCAPI void uninitialize(class EntityContext&, class SitComponent&) const;
    /**
     * @symbol
     * ?buildSchema\@SittableDefinition\@\@SAXAEAV?$shared_ptr\@V?$JsonSchemaObjectNode\@VEmptyClass\@JsonUtil\@\@VSittableDefinition\@\@\@JsonUtil\@\@\@std\@\@\@Z
     */
    MCAPI static void
    buildSchema(class std::shared_ptr<
                class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, class SittableDefinition>>&);
};
