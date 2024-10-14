#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/feature/IFeature.h"

class PartiallyExposedBlobFeature : public ::IFeature {
public:
    // prevent constructor by default
    PartiallyExposedBlobFeature& operator=(PartiallyExposedBlobFeature const&);
    PartiallyExposedBlobFeature(PartiallyExposedBlobFeature const&);
    PartiallyExposedBlobFeature();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~PartiallyExposedBlobFeature() = default;

    // vIndex: 1
    virtual std::optional<class BlockPos> place(
        class IBlockWorldGenAPI& target,
        class BlockPos const&    origin,
        class Random&            random,
        class RenderParams&      renderParams
    ) const;

    // vIndex: 2
    virtual bool isValidPlacement(std::string const&);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI static bool isWaterOrAir(class IBlockWorldGenAPI const& target, class BlockPos const& pos);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** $vftable();

    MCAPI bool isValidPlacement$(std::string const&);

    MCAPI std::optional<class BlockPos> place$(
        class IBlockWorldGenAPI& target,
        class BlockPos const&    origin,
        class Random&            random,
        class RenderParams&      renderParams
    ) const;

    // NOLINTEND
};
