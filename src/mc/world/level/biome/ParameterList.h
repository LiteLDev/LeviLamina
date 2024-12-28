#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/biome/RTree.h"

// auto generated forward declare list
// clang-format off
class Biome;
struct BiomeNoiseTarget;
struct TargetPoint;
// clang-format on

class ParameterList {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24>  mUnk22c268;
    ::ll::UntypedStorage<8, 168> mUnkb49057;
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

    MCAPI explicit ParameterList(::std::vector<::BiomeNoiseTarget> const& targets);

    MCAPI ::Biome* findTarget(::TargetPoint const& current, ::RTree::Hint* hint) const;

    MCAPI bool hasBiome(uint64 id) const;

    MCAPI bool hasBiomeByHashId(uint64 id) const;

    MCAPI ~ParameterList();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::ParameterList&&);

    MCAPI void* $ctor(::std::vector<::BiomeNoiseTarget> const& targets);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
