/**
 * @file  DropItemForDefinition.hpp
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
 * @brief MC class DropItemForDefinition.
 *
 */
class DropItemForDefinition {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_DROPITEMFORDEFINITION
public:
    class DropItemForDefinition& operator=(class DropItemForDefinition const &) = delete;
    DropItemForDefinition(class DropItemForDefinition const &) = delete;
#endif

public:
    /**
     * @symbol  ??0DropItemForDefinition\@\@QEAA\@XZ
     */
    MCAPI DropItemForDefinition();
    /**
     * @symbol  ?initialize\@DropItemForDefinition\@\@QEBAXAEAVEntityContext\@\@AEAVDropItemForGoal\@\@\@Z
     */
    MCAPI void initialize(class EntityContext &, class DropItemForGoal &) const;
    /**
     * @symbol  ?buildSchema\@DropItemForDefinition\@\@SAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEAV?$shared_ptr\@V?$JsonSchemaObjectNode\@VEmptyClass\@JsonUtil\@\@VDropItemForDefinition\@\@\@JsonUtil\@\@\@3\@\@Z
     */
    MCAPI static void buildSchema(std::string const &, class std::shared_ptr<class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, class DropItemForDefinition>> &);

};