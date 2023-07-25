#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/biome/surface/ISurfaceBuilder.h"

namespace VanillaSurfaceBuilders {

class CappedSurfaceBuilder {
public:
    // CappedSurfaceBuilder inner types declare
    // clang-format off
    class MaterialHelper;
    // clang-format on

    // CappedSurfaceBuilder inner types define
    class MaterialHelper {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_VANILLASURFACEBUILDERS_CAPPEDSURFACEBUILDER_MATERIALHELPER
    public:
        MaterialHelper& operator=(MaterialHelper const&) = delete;
        MaterialHelper(MaterialHelper const&)            = delete;
        MaterialHelper()                                 = delete;
#endif

    public:
        /**
         * @vftbl 0
         * @symbol __unk_vfn_0
         */
        virtual void __unk_vfn_0();
        /**
         * @vftbl 1
         * @symbol
         * ?isFoundationBlock\@MaterialHelper\@CappedSurfaceBuilder\@VanillaSurfaceBuilders\@\@UEBA_NAEBVBlock\@\@\@Z
         */
        virtual bool isFoundationBlock(class Block const&) const;
        /**
         * @vftbl 2
         * @symbol ?isWaterBlock\@MaterialHelper\@CappedSurfaceBuilder\@VanillaSurfaceBuilders\@\@UEBA_NAEBVBlock\@\@\@Z
         */
        virtual bool isWaterBlock(class Block const&) const;
        /**
         * @vftbl 3
         * @symbol ?isSolidBlock\@MaterialHelper\@CappedSurfaceBuilder\@VanillaSurfaceBuilders\@\@UEBA_NAEBVBlock\@\@\@Z
         */
        virtual bool isSolidBlock(class Block const&) const;
    };

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_VANILLASURFACEBUILDERS_CAPPEDSURFACEBUILDER
public:
    CappedSurfaceBuilder& operator=(CappedSurfaceBuilder const&) = delete;
    CappedSurfaceBuilder(CappedSurfaceBuilder const&)            = delete;
#endif

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?init\@CappedSurfaceBuilder\@VanillaSurfaceBuilders\@\@UEAAXAEAVEntityContext\@\@I\@Z
     */
    virtual void init(class EntityContext&, unsigned int);
    /**
     * @vftbl 2
     * @symbol
     * ?buildSurfaceAt\@CappedSurfaceBuilder\@VanillaSurfaceBuilders\@\@UEBAXAEBUBuildParameters\@ISurfaceBuilder\@\@\@Z
     */
    virtual void buildSurfaceAt(struct ISurfaceBuilder::BuildParameters const&) const;
    /**
     * @symbol ??0CappedSurfaceBuilder\@VanillaSurfaceBuilders\@\@QEAA\@XZ
     */
    MCAPI CappedSurfaceBuilder();

    // private:
    /**
     * @symbol
     * ?addSurfaceMaterial\@CappedSurfaceBuilder\@VanillaSurfaceBuilders\@\@AEBAXAEAVBlockVolume\@\@VPos\@\@HAEBV?$function\@$$A6APEBVBlock\@\@H\@Z\@std\@\@\@Z
     */
    MCAPI void
    addSurfaceMaterial(class BlockVolume&, class Pos, int, class std::function<class Block const*(int)> const&) const;

private:
};

}; // namespace VanillaSurfaceBuilders
