#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/biome/RTree.h"

// auto generated forward declare list
// clang-format off
struct BiomeNoiseTarget;
// clang-format on

class ParameterList {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::std::vector<::BiomeNoiseTarget>> mNoiseTargets;
    ::ll::TypedStorage<8, 168, ::std::optional<::RTree>> mTree;
    // NOLINTEND

public:
    // prevent constructor by default
    ParameterList& operator=(ParameterList const&);
    ParameterList(ParameterList const&);
    ParameterList();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ParameterList(::ParameterList&&);

    MCAPI ~ParameterList();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::ParameterList&&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

};
