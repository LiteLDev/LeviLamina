#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/json/JsonSchemaObjectNode.h"

// auto generated forward declare list
// clang-format off
namespace JsonUtil { class EmptyClass; }
// clang-format on

class NameableDefinition {

public:
    // prevent constructor by default
    NameableDefinition& operator=(NameableDefinition const&) = delete;
    NameableDefinition(NameableDefinition const&)            = delete;

public:
    /**
     * @symbol ??0NameableDefinition\@\@QEAA\@XZ
     */
    MCAPI NameableDefinition(); // NOLINT
    /**
     * @symbol ?addNameAction\@NameableDefinition\@\@QEAAXAEBUNameAction\@\@\@Z
     */
    MCAPI void addNameAction(struct NameAction const&); // NOLINT
    /**
     * @symbol ?initialize\@NameableDefinition\@\@QEBAXAEAVEntityContext\@\@AEAVNameableComponent\@\@\@Z
     */
    MCAPI void initialize(class EntityContext&, class NameableComponent&) const; // NOLINT
    /**
     * @symbol ??1NameableDefinition\@\@QEAA\@XZ
     */
    MCAPI ~NameableDefinition(); // NOLINT
    /**
     * @symbol
     * ?buildSchema\@NameableDefinition\@\@SAXAEAV?$shared_ptr\@V?$JsonSchemaObjectNode\@VEmptyClass\@JsonUtil\@\@VNameableDefinition\@\@\@JsonUtil\@\@\@std\@\@\@Z
     */
    MCAPI static void
    buildSchema(class std::shared_ptr<
                class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, class NameableDefinition>>&); // NOLINT
};
