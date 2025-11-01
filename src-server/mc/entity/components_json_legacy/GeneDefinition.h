#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
struct GeneticVariant;
// clang-format on

struct GeneDefinition {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnkcfea51;
    ::ll::UntypedStorage<4, 8>  mUnk84b74a;
    ::ll::UntypedStorage<8, 24> mUnk3fe586;
    ::ll::UntypedStorage<1, 1>  mUnk91d1ee;
    ::ll::UntypedStorage<4, 4>  mUnkee0de6;
    // NOLINTEND

public:
    // prevent constructor by default
    GeneDefinition& operator=(GeneDefinition const&);
    GeneDefinition(GeneDefinition const&);
    GeneDefinition();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void addGeneticVariant(::GeneticVariant const& geneticVariant);

    MCNAPI ~GeneDefinition();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
