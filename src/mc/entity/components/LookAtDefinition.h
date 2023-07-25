#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/json/JsonSchemaObjectNode.h"

// auto generated forward declare list
// clang-format off
namespace JsonUtil { class EmptyClass; }
// clang-format on

class LookAtDefinition {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_LOOKATDEFINITION
public:
    LookAtDefinition& operator=(LookAtDefinition const&) = delete;
    LookAtDefinition(LookAtDefinition const&)            = delete;
#endif

public:
    /**
     * @symbol ??0LookAtDefinition\@\@QEAA\@XZ
     */
    MCAPI LookAtDefinition();
    /**
     * @symbol ?initialize\@LookAtDefinition\@\@QEBAXAEAVEntityContext\@\@AEAVLookAtComponent\@\@\@Z
     */
    MCAPI void initialize(class EntityContext&, class LookAtComponent&) const;
    /**
     * @symbol
     * ?buildSchema\@LookAtDefinition\@\@SAXAEAV?$shared_ptr\@V?$JsonSchemaObjectNode\@VEmptyClass\@JsonUtil\@\@VLookAtDefinition\@\@\@JsonUtil\@\@\@std\@\@\@Z
     */
    MCAPI static void
    buildSchema(class std::shared_ptr<
                class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, class LookAtDefinition>>&);
};
