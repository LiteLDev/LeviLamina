#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/feature/IFeature.h"

class SnapToSurfaceFeature : public ::IFeature {
public:
    // SnapToSurfaceFeature inner types define
    enum class Surface {};

public:
    // prevent constructor by default
    SnapToSurfaceFeature& operator=(SnapToSurfaceFeature const&);
    SnapToSurfaceFeature(SnapToSurfaceFeature const&);

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~SnapToSurfaceFeature() = default;

    // vIndex: 1
    virtual std::optional<class BlockPos> place(
        class IBlockWorldGenAPI& target,
        class BlockPos const&    pos,
        class Random&            random,
        class RenderParams&      renderParams
    ) const;

    // vIndex: 2
    virtual bool isValidPlacement(std::string const&);

    MCAPI SnapToSurfaceFeature();

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI std::optional<class BlockPos> _findSnapPos(
        class IBlockWorldGenAPI&        target,
        class BlockPos const&           pos,
        ::SnapToSurfaceFeature::Surface targetSurface
    ) const;

    // NOLINTEND
};
