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

class MesaSurfaceBuilder : public ::ISurfaceBuilder {

public:
    // prevent constructor by default
    MesaSurfaceBuilder& operator=(MesaSurfaceBuilder const&) = delete;
    MesaSurfaceBuilder(MesaSurfaceBuilder const&)            = delete;
    MesaSurfaceBuilder()                                     = delete;

public:
    // NOLINTBEGIN
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?init\@MesaSurfaceBuilder\@VanillaSurfaceBuilders\@\@UEAAXAEAVEntityContext\@\@I\@Z
     */
    virtual void init(class EntityContext&, unsigned int);
    /**
     * @vftbl 2
     * @symbol
     * ?buildSurfaceAt\@MesaSurfaceBuilder\@VanillaSurfaceBuilders\@\@UEBAXAEBUBuildParameters\@ISurfaceBuilder\@\@\@Z
     */
    virtual void buildSurfaceAt(struct ISurfaceBuilder::BuildParameters const&) const;
    // NOLINTEND

    // private:
    // NOLINTBEGIN
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
    ) const;
    /**
     * @symbol ?_init\@MesaSurfaceBuilder\@VanillaSurfaceBuilders\@\@AEAAXI\@Z
     */
    MCAPI void _init(unsigned int);
    /**
     * @symbol ?generateBands\@MesaSurfaceBuilder\@VanillaSurfaceBuilders\@\@AEAAXAEAVRandom\@\@\@Z
     */
    MCAPI void generateBands(class Random&);
    /**
     * @symbol ?getBand\@MesaSurfaceBuilder\@VanillaSurfaceBuilders\@\@AEBA?AW4BlockColor\@\@HHH\@Z
     */
    MCAPI enum class BlockColor getBand(int, int, int) const;
    /**
     * @symbol ?makeBands\@MesaSurfaceBuilder\@VanillaSurfaceBuilders\@\@AEAAXAEAVRandom\@\@HW4BlockColor\@\@\@Z
     */
    MCAPI void makeBands(class Random&, int, enum class BlockColor);
    // NOLINTEND
};

}; // namespace VanillaSurfaceBuilders
