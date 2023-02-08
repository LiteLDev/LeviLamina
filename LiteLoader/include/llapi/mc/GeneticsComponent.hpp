/**
 * @file  GeneticsComponent.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class GeneticsComponent.
 *
 */
class GeneticsComponent {

#define AFTER_EXTRA
// Add Member There
public:
struct Gene {
    Gene() = delete;
    Gene(Gene const&) = delete;
    Gene(Gene const&&) = delete;
};

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_GENETICSCOMPONENT
public:
    class GeneticsComponent& operator=(class GeneticsComponent const &) = delete;
    GeneticsComponent(class GeneticsComponent const &) = delete;
#endif

public:
    /**
     * @hash   1841295503
     * @symbol  ??0GeneticsComponent\@\@QEAA\@XZ
     */
    MCAPI GeneticsComponent();
    /**
     * @hash   1272305672
     * @symbol  ?addAdditionalSaveData\@GeneticsComponent\@\@QEBAXAEAVCompoundTag\@\@\@Z
     */
    MCAPI void addAdditionalSaveData(class CompoundTag &) const;
    /**
     * @hash   30294396
     * @symbol  ?buildDebugInfo\@GeneticsComponent\@\@QEBAXAEAV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI void buildDebugInfo(std::string &) const;
    /**
     * @hash   1261440786
     * @symbol  ?findGene\@GeneticsComponent\@\@QEAAPEAUGene\@1\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI struct GeneticsComponent::Gene * findGene(std::string const &);
    /**
     * @hash   -907531532
     * @symbol  ?fireGeneEvents\@GeneticsComponent\@\@QEBAXAEAVActor\@\@\@Z
     */
    MCAPI void fireGeneEvents(class Actor &) const;
    /**
     * @hash   282504906
     * @symbol  ?initializeGenesFromParents\@GeneticsComponent\@\@QEAAXAEAVActor\@\@00\@Z
     */
    MCAPI void initializeGenesFromParents(class Actor &, class Actor &, class Actor &);
    /**
     * @hash   -993063750
     * @symbol  ??4GeneticsComponent\@\@QEAAAEAV0\@$$QEAV0\@\@Z
     */
    MCAPI class GeneticsComponent & operator=(class GeneticsComponent &&);
    /**
     * @hash   -560757210
     * @symbol  ?readAdditionalSaveData\@GeneticsComponent\@\@QEAAXAEAVActor\@\@AEBVCompoundTag\@\@AEAVDataLoadHelper\@\@\@Z
     */
    MCAPI void readAdditionalSaveData(class Actor &, class CompoundTag const &, class DataLoadHelper &);
    /**
     * @hash   167702085
     * @symbol  ?INVALID_ALLELE_VALUE\@GeneticsComponent\@\@2HB
     */
    MCAPI static int const INVALID_ALLELE_VALUE;

//private:
    /**
     * @hash   756608126
     * @symbol  ?_crossParentGenes\@GeneticsComponent\@\@AEAA?AUGene\@1\@AEBUGeneDefinition\@\@AEAU21\@1\@Z
     */
    MCAPI struct GeneticsComponent::Gene _crossParentGenes(struct GeneDefinition const &, struct GeneticsComponent::Gene &, struct GeneticsComponent::Gene &);

private:
    /**
     * @hash   -290200601
     * @symbol  ?GENE_ARRAY\@GeneticsComponent\@\@0V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@B
     */
    MCAPI static std::string const GENE_ARRAY;
    /**
     * @hash   536337994
     * @symbol  ?HIDDEN_ALLELE\@GeneticsComponent\@\@0V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@B
     */
    MCAPI static std::string const HIDDEN_ALLELE;
    /**
     * @hash   -270531365
     * @symbol  ?MAIN_ALLELE\@GeneticsComponent\@\@0V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@B
     */
    MCAPI static std::string const MAIN_ALLELE;

};