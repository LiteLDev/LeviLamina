#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/json/JsonSchemaObjectNode.h"

// auto generated forward declare list
// clang-format off
namespace JsonUtil { class EmptyClass; }
// clang-format on

class SlimeFloatDefinition {

public:
    // prevent constructor by default
    SlimeFloatDefinition& operator=(SlimeFloatDefinition const&) = delete;
    SlimeFloatDefinition(SlimeFloatDefinition const&)            = delete;

public:
    /**
     * @symbol ??0SlimeFloatDefinition\@\@QEAA\@XZ
     */
    MCAPI SlimeFloatDefinition(); // NOLINT
    /**
     * @symbol ?initialize\@SlimeFloatDefinition\@\@QEBAXAEAVEntityContext\@\@AEAVSlimeFloatGoal\@\@\@Z
     */
    MCAPI void initialize(class EntityContext&, class SlimeFloatGoal&) const; // NOLINT
    /**
     * @symbol
     * ?buildSchema\@SlimeFloatDefinition\@\@SAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEAV?$shared_ptr\@V?$JsonSchemaObjectNode\@VEmptyClass\@JsonUtil\@\@VSlimeFloatDefinition\@\@\@JsonUtil\@\@\@3\@\@Z
     */
    MCAPI static void
    buildSchema(std::string const&, class std::shared_ptr<class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, class SlimeFloatDefinition>>&); // NOLINT
};
