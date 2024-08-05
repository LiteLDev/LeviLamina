#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/biome/RTree.h"

class ParameterList {
public:
    // prevent constructor by default
    ParameterList& operator=(ParameterList const&);
    ParameterList(ParameterList const&);
    ParameterList();

public:
    // NOLINTBEGIN
    MCAPI ParameterList(class ParameterList&&);

    MCAPI explicit ParameterList(std::vector<struct BiomeNoiseTarget> const& targets);

    MCAPI class Biome* findTarget(struct TargetPoint const& current, struct RTree::Hint*) const;

    MCAPI bool hasBiome(uint64) const;

    MCAPI bool hasBiomeByHashId(uint64) const;

    MCAPI ~ParameterList();

    // NOLINTEND
};
