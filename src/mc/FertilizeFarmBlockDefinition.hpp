/**
 * @file  FertilizeFarmBlockDefinition.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "liteloader/api/Global.h"
#include "JsonUtil.hpp"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class FertilizeFarmBlockDefinition.
 *
 */
class FertilizeFarmBlockDefinition {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_FERTILIZEFARMBLOCKDEFINITION
public:
    class FertilizeFarmBlockDefinition& operator=(class FertilizeFarmBlockDefinition const &) = delete;
    FertilizeFarmBlockDefinition(class FertilizeFarmBlockDefinition const &) = delete;
#endif

public:
    /**
     * @symbol  ??0FertilizeFarmBlockDefinition\@\@QEAA\@XZ
     */
    MCAPI FertilizeFarmBlockDefinition();
    /**
     * @symbol  ?initialize\@FertilizeFarmBlockDefinition\@\@QEBAXAEAVEntityContext\@\@AEAVFertilizeFarmBlockGoal\@\@\@Z
     */
    MCAPI void initialize(class EntityContext &, class FertilizeFarmBlockGoal &) const;
    /**
     * @symbol  ?buildSchema\@FertilizeFarmBlockDefinition\@\@SAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEAV?$shared_ptr\@V?$JsonSchemaObjectNode\@VEmptyClass\@JsonUtil\@\@VFertilizeFarmBlockDefinition\@\@\@JsonUtil\@\@\@3\@\@Z
     */
    MCAPI static void buildSchema(std::string const &, class std::shared_ptr<class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, class FertilizeFarmBlockDefinition>> &);

};