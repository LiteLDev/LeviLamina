/**
 * @file  CircleAroundAnchorDefinition.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "JsonUtil.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class CircleAroundAnchorDefinition.
 *
 */
class CircleAroundAnchorDefinition {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_CIRCLEAROUNDANCHORDEFINITION
public:
    class CircleAroundAnchorDefinition& operator=(class CircleAroundAnchorDefinition const &) = delete;
    CircleAroundAnchorDefinition(class CircleAroundAnchorDefinition const &) = delete;
#endif

public:
    /**
     * @symbol  ??0CircleAroundAnchorDefinition\@\@QEAA\@XZ
     */
    MCAPI CircleAroundAnchorDefinition();
    /**
     * @symbol  ?initialize\@CircleAroundAnchorDefinition\@\@QEBAXAEAVEntityContext\@\@AEAVCircleAroundAnchorGoal\@\@\@Z
     */
    MCAPI void initialize(class EntityContext &, class CircleAroundAnchorGoal &) const;
    /**
     * @symbol  ?buildSchema\@CircleAroundAnchorDefinition\@\@SAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEAV?$shared_ptr\@V?$JsonSchemaObjectNode\@VEmptyClass\@JsonUtil\@\@VCircleAroundAnchorDefinition\@\@\@JsonUtil\@\@\@3\@\@Z
     */
    MCAPI static void buildSchema(std::string const &, class std::shared_ptr<class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, class CircleAroundAnchorDefinition>> &);

};