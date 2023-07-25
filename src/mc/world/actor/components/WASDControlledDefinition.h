#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/json/JsonSchemaObjectNode.h"

// auto generated forward declare list
// clang-format off
namespace JsonUtil { class EmptyClass; }
// clang-format on

struct WASDControlledDefinition {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_WASDCONTROLLEDDEFINITION
public:
    WASDControlledDefinition& operator=(WASDControlledDefinition const&) = delete;
    WASDControlledDefinition(WASDControlledDefinition const&)            = delete;
    WASDControlledDefinition()                                           = delete;
#endif

public:
    /**
     * @symbol ?initialize\@WASDControlledDefinition\@\@QEBAXAEAVEntityContext\@\@\@Z
     */
    MCAPI void initialize(class EntityContext&) const;
    /**
     * @symbol ?uninitialize\@WASDControlledDefinition\@\@QEBAXAEAVEntityContext\@\@\@Z
     */
    MCAPI void uninitialize(class EntityContext&) const;
    /**
     * @symbol
     * ?buildSchema\@WASDControlledDefinition\@\@SAXAEAV?$shared_ptr\@V?$JsonSchemaObjectNode\@VEmptyClass\@JsonUtil\@\@UWASDControlledDefinition\@\@\@JsonUtil\@\@\@std\@\@\@Z
     */
    MCAPI static void
    buildSchema(class std::shared_ptr<
                class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, struct WASDControlledDefinition>>&);
};
