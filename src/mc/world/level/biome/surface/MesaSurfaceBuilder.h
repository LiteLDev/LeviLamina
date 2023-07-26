#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/biome/surface/ISurfaceBuilder.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
class BlockVolume;
class EntityContext;
class Random;
enum class BlockColor;
struct MesaSurfaceBlocks;
struct SurfaceMaterialBlocks;
// clang-format on

namespace VanillaSurfaceBuilders {

class MesaSurfaceBuilder {

public:
    // prevent constructor by default
    MesaSurfaceBuilder& operator=(MesaSurfaceBuilder const&) = delete;
    MesaSurfaceBuilder(MesaSurfaceBuilder const&)            = delete;
    MesaSurfaceBuilder()                                     = delete;

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0(); // NOLINT
    /**
     * @vftbl 1
     * @symbol ?init\@MesaSurfaceBuilder\@VanillaSurfaceBuilders\@\@UEAAXAEAVEntityContext\@\@I\@Z
     */
    virtual void init(class EntityContext&, unsigned int); // NOLINT
    /**
     * @vftbl 2
     * @symbol
     * ?buildSurfaceAt\@MesaSurfaceBuilder\@VanillaSurfaceBuilders\@\@UEBAXAEBUBuildParameters\@ISurfaceBuilder\@\@\@Z
     */
    virtual void buildSurfaceAt(struct ISurfaceBuilder::BuildParameters const&) const; // NOLINT

    // private:
    /**
     * @symbol
     * ?_buildSurface\@MesaSurfaceBuilder\@VanillaSurfaceBuilders\@\@AEBAXAEBVBlockPos\@\@MAEAVRandom\@\@AEAVBlockVolume\@\@HFAEBUMesaSurfaceBlocks\@\@AEBUSurfaceMaterialBlocks\@\@M\@Z
     */
    MCAPI void _buildSurface(
        class BlockPos const&,
        float,
        class Random&,
        class BlockVolume&,
        int,
        short,
        struct MesaSurfaceBlocks const&,
        struct SurfaceMaterialBlocks const&,
        float
    ) const; // NOLINT
    /**
     * @symbol ?_init\@MesaSurfaceBuilder\@VanillaSurfaceBuilders\@\@AEAAXI\@Z
     */
    MCAPI void _init(unsigned int); // NOLINT
    /**
     * @symbol ?generateBands\@MesaSurfaceBuilder\@VanillaSurfaceBuilders\@\@AEAAXAEAVRandom\@\@\@Z
     */
    MCAPI void generateBands(class Random&); // NOLINT
    /**
     * @symbol ?getBand\@MesaSurfaceBuilder\@VanillaSurfaceBuilders\@\@AEBA?AW4BlockColor\@\@HHH\@Z
     */
    MCAPI enum class BlockColor getBand(int, int, int) const; // NOLINT
    /**
     * @symbol ?makeBands\@MesaSurfaceBuilder\@VanillaSurfaceBuilders\@\@AEAAXAEAVRandom\@\@HW4BlockColor\@\@\@Z
     */
    MCAPI void makeBands(class Random&, int, enum class BlockColor); // NOLINT

private:
};

}; // namespace VanillaSurfaceBuilders
