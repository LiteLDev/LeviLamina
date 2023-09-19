#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct CappedSurfaceAttributes {
public:
    // CappedSurfaceAttributes inner types declare
    // clang-format off
    struct MaterialLayer;
    // clang-format on

    // CappedSurfaceAttributes inner types define
    struct MaterialLayer {
    public:
        // prevent constructor by default
        MaterialLayer& operator=(MaterialLayer const&);
        MaterialLayer(MaterialLayer const&);
        MaterialLayer();
    };

public:
    // prevent constructor by default
    CappedSurfaceAttributes& operator=(CappedSurfaceAttributes const&);
    CappedSurfaceAttributes(CappedSurfaceAttributes const&);
    CappedSurfaceAttributes();

public:
    // NOLINTBEGIN
    // symbol: ?getCeilingMaterial@CappedSurfaceAttributes@@QEBAPEBVBlock@@AEBVVec3@@@Z
    MCAPI class Block const* getCeilingMaterial(class Vec3 const&) const;

    // symbol: ?getFloorMaterial@CappedSurfaceAttributes@@QEBAPEBVBlock@@AEBVVec3@@@Z
    MCAPI class Block const* getFloorMaterial(class Vec3 const&) const;

    // symbol: ?initializeNoise@CappedSurfaceAttributes@@QEAAXI@Z
    MCAPI void initializeNoise(uint);

    // symbol: ??4CappedSurfaceAttributes@@QEAAAEAU0@$$QEAU0@@Z
    MCAPI struct CappedSurfaceAttributes& operator=(struct CappedSurfaceAttributes&&);

    // symbol:
    // ?getRandomBlock@CappedSurfaceAttributes@@SAPEBVBlock@@AEBV?$vector@UMaterialLayer@CappedSurfaceAttributes@@V?$allocator@UMaterialLayer@CappedSurfaceAttributes@@@std@@@std@@AEBVVec3@@@Z
    MCAPI static class Block const*
    getRandomBlock(std::vector<struct CappedSurfaceAttributes::MaterialLayer> const&, class Vec3 const&);

    // NOLINTEND
};
