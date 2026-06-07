#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/util/IntRange.h"

// auto generated forward declare list
// clang-format off
struct GeneticVariant;
// clang-format on

struct GeneDefinition {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::std::string>                   mName;
    ::ll::TypedStorage<4, 8, ::IntRange>                       mAlleleRange;
    ::ll::TypedStorage<8, 24, ::std::vector<::GeneticVariant>> mGeneticVariants;
    ::ll::TypedStorage<1, 1, bool>                             mUseSimplifiedBreeding;
    ::ll::TypedStorage<4, 4, float>                            mMutationRateOverride;
    // NOLINTEND

public:
    // prevent constructor by default
    GeneDefinition& operator=(GeneDefinition const&);
    GeneDefinition();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI GeneDefinition(::GeneDefinition const&);

    MCAPI void addGeneticVariant(::GeneticVariant const& geneticVariant);

    MCAPI ~GeneDefinition();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::GeneDefinition const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
