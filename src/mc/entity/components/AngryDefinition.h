#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/json/JsonSchemaObjectNode.h"

// auto generated forward declare list
// clang-format off
namespace JsonUtil { class EmptyClass; }
// clang-format on

class AngryDefinition {

public:
    // prevent constructor by default
    AngryDefinition& operator=(AngryDefinition const&) = delete;
    AngryDefinition(AngryDefinition const&)            = delete;

public:
    // NOLINTBEGIN
    /**
     * @symbol ??0AngryDefinition\@\@QEAA\@XZ
     */
    MCAPI AngryDefinition();
    /**
     * @symbol
     * ?addBroadcastTargetByName\@AngryDefinition\@\@QEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI void addBroadcastTargetByName(std::string const&);
    /**
     * @symbol
     * ?buildSchema\@AngryDefinition\@\@SAXAEAV?$shared_ptr\@V?$JsonSchemaObjectNode\@VEmptyClass\@JsonUtil\@\@VAngryDefinition\@\@\@JsonUtil\@\@\@std\@\@\@Z
     */
    MCAPI static void
    buildSchema(std::shared_ptr<
                class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, class AngryDefinition>>&);
    /**
     * @symbol ?initialize\@AngryDefinition\@\@QEBAXAEAVEntityContext\@\@AEAVAngryComponent\@\@\@Z
     */
    MCAPI void initialize(class EntityContext&, class AngryComponent&) const;
    /**
     * @symbol ?uninitialize\@AngryDefinition\@\@QEBAXAEAVEntityContext\@\@AEAVAngryComponent\@\@\@Z
     */
    MCAPI void uninitialize(class EntityContext&, class AngryComponent&) const;
    // NOLINTEND
};
