/**
 * @file  GeneticsDefinition.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "../../JsonUtil.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class GeneticsDefinition.
 *
 */
class GeneticsDefinition {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_GENETICSDEFINITION
public:
    class GeneticsDefinition& operator=(class GeneticsDefinition const &) = delete;
    GeneticsDefinition(class GeneticsDefinition const &) = delete;
#endif

public:
    /**
     * @hash   -660669543
     * @symbol  ??0GeneticsDefinition\@\@QEAA\@XZ
     */
    MCAPI GeneticsDefinition();
    /**
     * @hash   -602945746
     * @symbol  ?addGeneDefinition\@GeneticsDefinition\@\@QEAAXAEBUGeneDefinition\@\@\@Z
     */
    MCAPI void addGeneDefinition(struct GeneDefinition const &);
    /**
     * @symbol  ?initialize\@GeneticsDefinition\@\@QEBAXAEAVEntityContext\@\@AEAVGeneticsComponent\@\@\@Z
     */
    MCAPI void initialize(class EntityContext &, class GeneticsComponent &) const;
    /**
     * @hash   441802790
     * @symbol  ?buildSchema\@GeneticsDefinition\@\@SAXAEAV?$shared_ptr\@V?$JsonSchemaObjectNode\@VEmptyClass\@JsonUtil\@\@VGeneticsDefinition\@\@\@JsonUtil\@\@\@std\@\@\@Z
     */
    MCAPI static void buildSchema(class std::shared_ptr<class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, class GeneticsDefinition>> &);

//private:

private:
    /**
     * @hash   -1474832738
     * @symbol  ?DEFAULT_MUTATION_RATE\@GeneticsDefinition\@\@0MB
     */
    MCAPI static float const DEFAULT_MUTATION_RATE;

};