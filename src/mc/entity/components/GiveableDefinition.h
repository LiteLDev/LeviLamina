#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/json/JsonSchemaObjectNode.h"

// auto generated forward declare list
// clang-format off
namespace JsonUtil { class EmptyClass; }
// clang-format on

class GiveableDefinition {

public:
    // prevent constructor by default
    GiveableDefinition& operator=(GiveableDefinition const&) = delete;
    GiveableDefinition(GiveableDefinition const&)            = delete;
    GiveableDefinition()                                     = delete;

public:
    /**
     * @symbol ?addGiveableTrigger\@GiveableDefinition\@\@QEAAXAEBUGiveableTrigger\@\@\@Z
     */
    MCAPI void addGiveableTrigger(struct GiveableTrigger const&); // NOLINT
    /**
     * @symbol ?initialize\@GiveableDefinition\@\@QEBAXAEAVEntityContext\@\@AEAVGiveableComponent\@\@\@Z
     */
    MCAPI void initialize(class EntityContext&, class GiveableComponent&) const; // NOLINT
    /**
     * @symbol
     * ?buildSchema\@GiveableDefinition\@\@SAXAEAV?$shared_ptr\@V?$JsonSchemaObjectNode\@VEmptyClass\@JsonUtil\@\@VGiveableDefinition\@\@\@JsonUtil\@\@\@std\@\@\@Z
     */
    MCAPI static void
    buildSchema(class std::shared_ptr<
                class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, class GiveableDefinition>>&); // NOLINT
};
