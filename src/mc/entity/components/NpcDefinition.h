#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/json/JsonSchemaObjectNode.h"

// auto generated forward declare list
// clang-format off
namespace JsonUtil { class EmptyClass; }
// clang-format on

class NpcDefinition {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_NPCDEFINITION
public:
    NpcDefinition& operator=(NpcDefinition const&) = delete;
    NpcDefinition(NpcDefinition const&)            = delete;
    NpcDefinition()                                = delete;
#endif

public:
    /**
     * @symbol ?initialize\@NpcDefinition\@\@QEBAXAEAVEntityContext\@\@AEAVNpcComponent\@\@\@Z
     */
    MCAPI void initialize(class EntityContext&, class NpcComponent&) const;
    /**
     * @symbol
     * ?buildSchema\@NpcDefinition\@\@SAXAEAV?$shared_ptr\@V?$JsonSchemaObjectNode\@VEmptyClass\@JsonUtil\@\@VNpcDefinition\@\@\@JsonUtil\@\@\@std\@\@\@Z
     */
    MCAPI static void
    buildSchema(class std::shared_ptr<
                class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, class NpcDefinition>>&);
};
