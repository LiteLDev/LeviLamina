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
    // symbol: ??0ParameterList@@QEAA@$$QEAV0@@Z
    MCAPI ParameterList(class ParameterList&&);

    // symbol: ??0ParameterList@@QEAA@AEBV?$vector@UBiomeNoiseTarget@@V?$allocator@UBiomeNoiseTarget@@@std@@@std@@@Z
    MCAPI explicit ParameterList(std::vector<struct BiomeNoiseTarget> const& targets);

    // symbol: ?findTarget@ParameterList@@QEBAPEAVBiome@@AEBUTargetPoint@@PEAUHint@RTree@@@Z
    MCAPI class Biome* findTarget(struct TargetPoint const& current, struct RTree::Hint*) const;

    // symbol: ?hasBiome@ParameterList@@QEBA_N_K@Z
    MCAPI bool hasBiome(uint64) const;

    // symbol: ?hasBiomeByHashId@ParameterList@@QEBA_N_K@Z
    MCAPI bool hasBiomeByHashId(uint64) const;

    // symbol: ??1ParameterList@@QEAA@XZ
    MCAPI ~ParameterList();

    // NOLINTEND
};
