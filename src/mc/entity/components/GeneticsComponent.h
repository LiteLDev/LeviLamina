#pragma once

#include "mc/_HeaderOutputPredefine.h"

class GeneticsComponent {
public:
    // GeneticsComponent inner types declare
    // clang-format off
    struct Gene;
    // clang-format on

    // GeneticsComponent inner types define
    struct Gene {

    public:
        // prevent constructor by default
        Gene& operator=(Gene const&) = delete;
        Gene(Gene const&)            = delete;
        Gene()                       = delete;
    };

public:
    // prevent constructor by default
    GeneticsComponent& operator=(GeneticsComponent const&) = delete;
    GeneticsComponent(GeneticsComponent const&)            = delete;
    GeneticsComponent()                                    = delete;

public:
    // NOLINTBEGIN
    /**
     * @symbol ?addAdditionalSaveData\@GeneticsComponent\@\@QEBAXAEAVCompoundTag\@\@\@Z
     */
    MCAPI void addAdditionalSaveData(class CompoundTag&) const;
    /**
     * @symbol
     * ?buildDebugInfo\@GeneticsComponent\@\@QEBAXAEAV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI void buildDebugInfo(std::string&) const;
    /**
     * @symbol
     * ?findGene\@GeneticsComponent\@\@QEAAPEAUGene\@1\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI struct GeneticsComponent::Gene* findGene(std::string const&);
    /**
     * @symbol ?fireGeneEvents\@GeneticsComponent\@\@QEBAXAEAVActor\@\@\@Z
     */
    MCAPI void fireGeneEvents(class Actor&) const;
    /**
     * @symbol ?initializeGenesFromParents\@GeneticsComponent\@\@QEAAXAEAVActor\@\@00\@Z
     */
    MCAPI void initializeGenesFromParents(class Actor&, class Actor&, class Actor&);
    /**
     * @symbol ??4GeneticsComponent\@\@QEAAAEAV0\@$$QEAV0\@\@Z
     */
    MCAPI class GeneticsComponent& operator=(class GeneticsComponent&&);
    /**
     * @symbol
     * ?readAdditionalSaveData\@GeneticsComponent\@\@QEAAXAEAVActor\@\@AEBVCompoundTag\@\@AEAVDataLoadHelper\@\@\@Z
     */
    MCAPI void readAdditionalSaveData(class Actor&, class CompoundTag const&, class DataLoadHelper&);
    /**
     * @symbol ?INVALID_ALLELE_VALUE\@GeneticsComponent\@\@2HB
     */
    MCAPI static int const INVALID_ALLELE_VALUE;
    // NOLINTEND

    // private:
    // NOLINTBEGIN
    /**
     * @symbol ?_crossParentGenes\@GeneticsComponent\@\@AEAA?AUGene\@1\@AEBUGeneDefinition\@\@AEAU21\@1\@Z
     */
    MCAPI struct GeneticsComponent::Gene
    _crossParentGenes(struct GeneDefinition const&, struct GeneticsComponent::Gene&, struct GeneticsComponent::Gene&);
    // NOLINTEND

private:
    // NOLINTBEGIN
    /**
     * @symbol
     * ?GENE_ARRAY\@GeneticsComponent\@\@0V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@B
     */
    MCAPI static std::string const GENE_ARRAY;
    /**
     * @symbol
     * ?HIDDEN_ALLELE\@GeneticsComponent\@\@0V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@B
     */
    MCAPI static std::string const HIDDEN_ALLELE;
    /**
     * @symbol
     * ?MAIN_ALLELE\@GeneticsComponent\@\@0V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@B
     */
    MCAPI static std::string const MAIN_ALLELE;
    // NOLINTEND
};
