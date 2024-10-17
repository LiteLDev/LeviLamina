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
        Gene& operator=(Gene const&);
        Gene(Gene const&);
        Gene();
    };

public:
    // prevent constructor by default
    GeneticsComponent& operator=(GeneticsComponent const&);
    GeneticsComponent(GeneticsComponent const&);

public:
    // NOLINTBEGIN
    MCAPI GeneticsComponent();

    MCAPI void addAdditionalSaveData(class CompoundTag& tag) const;

    MCAPI void buildDebugInfo(std::string& out) const;

    MCAPI struct GeneticsComponent::Gene* findGene(std::string const& geneName);

    MCAPI void fireGeneEvents(class Actor& owner) const;

    MCAPI void initializeGenesFromParents(class Actor& owner, class Actor& parentalUnit1, class Actor& parentalUnit2);

    MCAPI class GeneticsComponent& operator=(class GeneticsComponent&&);

    MCAPI void
    readAdditionalSaveData(class Actor& owner, class CompoundTag const& tag, class DataLoadHelper& dataLoadHelper);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI struct GeneticsComponent::Gene _crossParentGenes(
        struct GeneDefinition const&    definition,
        struct GeneticsComponent::Gene& gene1,
        struct GeneticsComponent::Gene& gene2
    );

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI void* ctor$();

    MCAPI static std::string const& GENE_ARRAY();

    MCAPI static std::string const& HIDDEN_ALLELE();

    MCAPI static int const& INVALID_ALLELE_VALUE();

    MCAPI static std::string const& MAIN_ALLELE();

    // NOLINTEND
};
