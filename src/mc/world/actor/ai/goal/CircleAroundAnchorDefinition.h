#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/json/JsonSchemaObjectNode.h"

// auto generated forward declare list
// clang-format off
namespace JsonUtil { class EmptyClass; }
// clang-format on

class CircleAroundAnchorDefinition {

public:
    // prevent constructor by default
    CircleAroundAnchorDefinition& operator=(CircleAroundAnchorDefinition const&) = delete;
    CircleAroundAnchorDefinition(CircleAroundAnchorDefinition const&)            = delete;

public:
    /**
     * @symbol ??0CircleAroundAnchorDefinition\@\@QEAA\@XZ
     */
    MCAPI CircleAroundAnchorDefinition(); // NOLINT
    /**
     * @symbol ?initialize\@CircleAroundAnchorDefinition\@\@QEBAXAEAVEntityContext\@\@AEAVCircleAroundAnchorGoal\@\@\@Z
     */
    MCAPI void initialize(class EntityContext&, class CircleAroundAnchorGoal&) const; // NOLINT
    /**
     * @symbol
     * ?buildSchema\@CircleAroundAnchorDefinition\@\@SAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEAV?$shared_ptr\@V?$JsonSchemaObjectNode\@VEmptyClass\@JsonUtil\@\@VCircleAroundAnchorDefinition\@\@\@JsonUtil\@\@\@3\@\@Z
     */
    MCAPI static void
    buildSchema(std::string const&, class std::shared_ptr<class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, class CircleAroundAnchorDefinition>>&); // NOLINT
};
