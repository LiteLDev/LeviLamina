/**
 * @file  MC/GeneticsDefinition.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "JsonUtil.hpp"

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
     * @hash   302344713
     * @symbol ??0GeneticsDefinition@@QEAA@XZ
     */
    MCAPI GeneticsDefinition();
    /**
     * @hash   360099262
     * @symbol ?addGeneDefinition@GeneticsDefinition@@QEAAXAEBUGeneDefinition@@@Z
     */
    MCAPI void addGeneDefinition(struct GeneDefinition const &);
    /**
     * @hash   1840293711
     * @symbol ?initialize@GeneticsDefinition@@QEAAXAEAVEntityContext@@AEAVGeneticsComponent@@@Z
     */
    MCAPI void initialize(class EntityContext &, class GeneticsComponent &);
    /**
     * @hash   1404847798
     * @symbol ?buildSchema@GeneticsDefinition@@SAXAEAV?$shared_ptr@V?$JsonSchemaObjectNode@VEmptyClass@JsonUtil@@VGeneticsDefinition@@@JsonUtil@@@std@@@Z
     */
    MCAPI static void buildSchema(class std::shared_ptr<class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, class GeneticsDefinition>> &);

//private:

private:
    /**
     * @hash   1854621702
     * @symbol ?DEFAULT_MUTATION_RATE@GeneticsDefinition@@0MB
     */
    MCAPI static float const DEFAULT_MUTATION_RATE;

};