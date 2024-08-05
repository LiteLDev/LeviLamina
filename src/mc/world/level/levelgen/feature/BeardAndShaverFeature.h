#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/feature/IFeature.h"

class BeardAndShaverFeature : public ::IFeature {
public:
    // prevent constructor by default
    BeardAndShaverFeature& operator=(BeardAndShaverFeature const&);
    BeardAndShaverFeature(BeardAndShaverFeature const&);

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~BeardAndShaverFeature() = default;

    // vIndex: 1
    virtual std::optional<class BlockPos> place(
        class IBlockWorldGenAPI& target,
        class BlockPos const&    pos,
        class Random&            random,
        class RenderParams&      renderParams
    ) const;

    // vIndex: 2
    virtual bool isValidPlacement(std::string const&);

    MCAPI BeardAndShaverFeature();

    // NOLINTEND
};
