/**
 * @file  WorkDefinition.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "JsonUtil.hpp"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class WorkDefinition.
 *
 */
class WorkDefinition {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_WORKDEFINITION
public:
    class WorkDefinition& operator=(class WorkDefinition const &) = delete;
    WorkDefinition(class WorkDefinition const &) = delete;
#endif

public:
    /**
     * @symbol  ??0WorkDefinition\@\@QEAA\@XZ
     */
    MCAPI WorkDefinition();
    /**
     * @symbol  ?initialize\@WorkDefinition\@\@QEBAXAEAVEntityContext\@\@AEAVWorkGoal\@\@\@Z
     */
    MCAPI void initialize(class EntityContext &, class WorkGoal &) const;
    /**
     * @symbol  ?buildSchema\@WorkDefinition\@\@SAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEAV?$shared_ptr\@V?$JsonSchemaObjectNode\@VEmptyClass\@JsonUtil\@\@VWorkDefinition\@\@\@JsonUtil\@\@\@3\@\@Z
     */
    MCAPI static void buildSchema(std::string const &, class std::shared_ptr<class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, class WorkDefinition>> &);

};