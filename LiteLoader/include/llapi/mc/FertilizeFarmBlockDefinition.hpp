/**
 * @file  FertilizeFarmBlockDefinition.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "JsonUtil.hpp"
#include "BaseGoalDefinition.hpp"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class FertilizeFarmBlockDefinition.
 *
 */
class FertilizeFarmBlockDefinition : public BaseGoalDefinition {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_FERTILIZEFARMBLOCKDEFINITION
public:
    class FertilizeFarmBlockDefinition& operator=(class FertilizeFarmBlockDefinition const &) = delete;
    FertilizeFarmBlockDefinition(class FertilizeFarmBlockDefinition const &) = delete;
#endif

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @symbol ??0FertilizeFarmBlockDefinition\@\@QEAA\@XZ
     */
    MCAPI FertilizeFarmBlockDefinition();
    /**
     * @symbol ?initialize\@FertilizeFarmBlockDefinition\@\@QEBAXAEAVEntityContext\@\@AEAVFertilizeFarmBlockGoal\@\@\@Z
     */
    MCAPI void initialize(class EntityContext &, class FertilizeFarmBlockGoal &) const;
    /**
     * @symbol ?buildSchema\@FertilizeFarmBlockDefinition\@\@SAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEAV?$shared_ptr\@V?$JsonSchemaObjectNode\@VEmptyClass\@JsonUtil\@\@VFertilizeFarmBlockDefinition\@\@\@JsonUtil\@\@\@3\@\@Z
     */
    MCAPI static void buildSchema(std::string const &, class std::shared_ptr<class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, class FertilizeFarmBlockDefinition>> &);

};
