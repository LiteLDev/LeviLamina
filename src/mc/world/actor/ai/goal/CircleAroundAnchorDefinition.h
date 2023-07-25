#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/json/JsonSchemaObjectNode.h"

// auto generated forward declare list
// clang-format off
namespace JsonUtil { class EmptyClass; }
// clang-format on

class CircleAroundAnchorDefinition {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_CIRCLEAROUNDANCHORDEFINITION
public:
    CircleAroundAnchorDefinition& operator=(CircleAroundAnchorDefinition const&) = delete;
    CircleAroundAnchorDefinition(CircleAroundAnchorDefinition const&)            = delete;
#endif

public:
    /**
     * @symbol ??0CircleAroundAnchorDefinition\@\@QEAA\@XZ
     */
    MCAPI CircleAroundAnchorDefinition();
    /**
     * @symbol ?initialize\@CircleAroundAnchorDefinition\@\@QEBAXAEAVEntityContext\@\@AEAVCircleAroundAnchorGoal\@\@\@Z
     */
    MCAPI void initialize(class EntityContext&, class CircleAroundAnchorGoal&) const;
    /**
     * @symbol
     * ?buildSchema\@CircleAroundAnchorDefinition\@\@SAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEAV?$shared_ptr\@V?$JsonSchemaObjectNode\@VEmptyClass\@JsonUtil\@\@VCircleAroundAnchorDefinition\@\@\@JsonUtil\@\@\@3\@\@Z
     */
    MCAPI static void
    buildSchema(std::string const&, class std::shared_ptr<class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, class CircleAroundAnchorDefinition>>&);
};
