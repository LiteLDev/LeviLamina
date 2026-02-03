#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Actor;
class CompoundTag;
class DataLoadHelper;
class GeneticsDefinition;
class Random;
// clang-format on

class GeneticsComponent {
public:
    // GeneticsComponent inner types declare
    // clang-format off
    struct Gene;
    // clang-format on

    // GeneticsComponent inner types define
    struct Gene {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<4, 4> mUnk9879b9;
        ::ll::UntypedStorage<4, 4> mUnk644375;
        // NOLINTEND

    public:
        // prevent constructor by default
        Gene& operator=(Gene const&);
        Gene(Gene const&);
        Gene();
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::std::vector<::GeneticsComponent::Gene>> mGenes;
    ::ll::TypedStorage<8, 8, ::GeneticsDefinition const*>               mGeneticsDescription;
    ::ll::TypedStorage<8, 8, ::Random*>                                 mRandom;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void addAdditionalSaveData(::CompoundTag& tag) const;

    MCAPI void buildDebugInfo(::std::string& out) const;

    MCAPI void fireGeneEvents(::Actor& owner) const;

    MCAPI void initializeGenesFromParents(::Actor& owner, ::Actor& parentalUnit1, ::Actor& parentalUnit2);

    MCAPI void readAdditionalSaveData(::Actor& owner, ::CompoundTag const& tag, ::DataLoadHelper& dataLoadHelper);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::std::string const& GENE_ARRAY();

    MCAPI static ::std::string const& HIDDEN_ALLELE();

    MCAPI static ::std::string const& MAIN_ALLELE();
    // NOLINTEND
};
