#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/biome/surface/ISurfaceBuilder.h"

// auto generated forward declare list
// clang-format off
class Biome;
class Block;
class BlockVolume;
class ISurfaceBuilder;
class Pos;
// clang-format on

namespace VanillaSurfaceBuilders {

class CappedSurfaceBuilder : public ::ISurfaceBuilder {
public:
    // CappedSurfaceBuilder inner types declare
    // clang-format off
    class MaterialHelper;
    // clang-format on

    // CappedSurfaceBuilder inner types define
    class MaterialHelper {
    public:
        // prevent constructor by default
        MaterialHelper& operator=(MaterialHelper const&);
        MaterialHelper(MaterialHelper const&);
        MaterialHelper();

    public:
        // NOLINTBEGIN
        // vIndex: 0, symbol: __gen_??1MaterialHelper@CappedSurfaceBuilder@VanillaSurfaceBuilders@@UEAA@XZ
        virtual ~MaterialHelper() = default;

        // vIndex: 1, symbol:
        // ?isFoundationBlock@MaterialHelper@CappedSurfaceBuilder@VanillaSurfaceBuilders@@UEBA_NAEBVBlock@@@Z
        virtual bool isFoundationBlock(class Block const& block) const;

        // vIndex: 2, symbol:
        // ?isWaterBlock@MaterialHelper@CappedSurfaceBuilder@VanillaSurfaceBuilders@@UEBA_NAEBVBlock@@@Z
        virtual bool isWaterBlock(class Block const& block) const;

        // vIndex: 3, symbol:
        // ?isSolidBlock@MaterialHelper@CappedSurfaceBuilder@VanillaSurfaceBuilders@@UEBA_NAEBVBlock@@@Z
        virtual bool isSolidBlock(class Block const& block) const;

        // NOLINTEND
    };

public:
    // prevent constructor by default
    CappedSurfaceBuilder& operator=(CappedSurfaceBuilder const&);
    CappedSurfaceBuilder(CappedSurfaceBuilder const&);

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1CappedSurfaceBuilder@VanillaSurfaceBuilders@@UEAA@XZ
    virtual ~CappedSurfaceBuilder() = default;

    // vIndex: 1, symbol: ?init@CappedSurfaceBuilder@VanillaSurfaceBuilders@@UEAAXAEAVBiome@@I@Z
    virtual void init(class Biome&, uint);

    // vIndex: 2, symbol:
    // ?buildSurfaceAt@CappedSurfaceBuilder@VanillaSurfaceBuilders@@UEBAXAEBUBuildParameters@ISurfaceBuilder@@@Z
    virtual void buildSurfaceAt(struct ISurfaceBuilder::BuildParameters const& parameters) const;

    // symbol: ??0CappedSurfaceBuilder@VanillaSurfaceBuilders@@QEAA@XZ
    MCAPI CappedSurfaceBuilder();

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol:
    // ?addSurfaceMaterial@CappedSurfaceBuilder@VanillaSurfaceBuilders@@AEBAXAEAVBlockVolume@@VPos@@HAEBV?$function@$$A6APEBVBlock@@H@Z@std@@@Z
    MCAPI void addSurfaceMaterial(
        class BlockVolume&                            blockVolume,
        class Pos                                     currentPosition,
        int                                           endHeight,
        std::function<class Block const*(int)> const& getBlockFn
    ) const;

    // NOLINTEND
};

}; // namespace VanillaSurfaceBuilders
