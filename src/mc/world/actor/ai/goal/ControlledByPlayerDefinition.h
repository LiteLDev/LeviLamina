#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/json/JsonSchemaObjectNode.h"

// auto generated forward declare list
// clang-format off
namespace JsonUtil { class EmptyClass; }
// clang-format on

class ControlledByPlayerDefinition {

public:
    // prevent constructor by default
    ControlledByPlayerDefinition& operator=(ControlledByPlayerDefinition const&) = delete;
    ControlledByPlayerDefinition(ControlledByPlayerDefinition const&)            = delete;

public:
    // NOLINTBEGIN
    /**
     * @symbol ??0ControlledByPlayerDefinition\@\@QEAA\@XZ
     */
    MCAPI ControlledByPlayerDefinition();
    /**
     * @symbol ?initialize\@ControlledByPlayerDefinition\@\@QEBAXAEAVEntityContext\@\@AEAVControlledByPlayerGoal\@\@\@Z
     */
    MCAPI void initialize(class EntityContext&, class ControlledByPlayerGoal&) const;
    /**
     * @symbol
     * ?buildSchema\@ControlledByPlayerDefinition\@\@SAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEAV?$shared_ptr\@V?$JsonSchemaObjectNode\@VEmptyClass\@JsonUtil\@\@VControlledByPlayerDefinition\@\@\@JsonUtil\@\@\@3\@\@Z
     */
    MCAPI static void
    buildSchema(std::string const&, std::shared_ptr<class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, class ControlledByPlayerDefinition>>&);
    // NOLINTEND
};
