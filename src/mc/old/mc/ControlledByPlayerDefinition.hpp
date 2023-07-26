/**
 * @file  ControlledByPlayerDefinition.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "liteloader/api/Global.h"
#include "JsonUtil.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class ControlledByPlayerDefinition.
 *
 */
class ControlledByPlayerDefinition {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_CONTROLLEDBYPLAYERDEFINITION
public:
    class ControlledByPlayerDefinition& operator=(class ControlledByPlayerDefinition const &) = delete;
    ControlledByPlayerDefinition(class ControlledByPlayerDefinition const &) = delete;
#endif

public:
    /**
     * @symbol  ??0ControlledByPlayerDefinition\@\@QEAA\@XZ
     */
    MCAPI ControlledByPlayerDefinition();
    /**
     * @symbol  ?initialize\@ControlledByPlayerDefinition\@\@QEBAXAEAVEntityContext\@\@AEAVControlledByPlayerGoal\@\@\@Z
     */
    MCAPI void initialize(class EntityContext &, class ControlledByPlayerGoal &) const;
    /**
     * @symbol  ?buildSchema\@ControlledByPlayerDefinition\@\@SAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEAV?$shared_ptr\@V?$JsonSchemaObjectNode\@VEmptyClass\@JsonUtil\@\@VControlledByPlayerDefinition\@\@\@JsonUtil\@\@\@3\@\@Z
     */
    MCAPI static void buildSchema(std::string const &, class std::shared_ptr<class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, class ControlledByPlayerDefinition>> &);

};