/**
 * @file  Feature.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "IFeature.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class Feature.
 *
 */
class Feature : public IFeature {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_FEATURE
public:
    class Feature& operator=(class Feature const &) = delete;
    Feature(class Feature const &) = delete;
    Feature() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   -1332702652
     */
    virtual ~Feature();
    /**
     * @vftbl  1
     * @symbol ?place@Feature@@UEBA?AV?$optional@VBlockPos@@@std@@AEAVIBlockWorldGenAPI@@AEBVBlockPos@@AEAVRandom@@AEAVRenderParams@@@Z
     * @hash   485335607
     */
    virtual class std::optional<class BlockPos> place(class IBlockWorldGenAPI &, class BlockPos const &, class Random &, class RenderParams &) const;
    /**
     * @vftbl  2
     * @symbol ?isValidPlacement@IFeature@@UEAA_NAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     * @hash   -724345674
     */
    virtual bool isValidPlacement(std::string const &);
    /**
     * @vftbl  3
     * @symbol ?place@WeepingVinesClusterFeature@@UEBA_NAEAVBlockSource@@AEBVBlockPos@@AEAVRandom@@@Z
     * @hash   -1632410085
     */
    virtual bool place(class BlockSource &, class BlockPos const &, class Random &) const = 0;
    /**
     * @symbol ??0Feature@@QEAA@PEAVActor@@@Z
     * @hash   -931132086
     */
    MCAPI Feature(class Actor *);

//protected:
    /**
     * @symbol ?_placeBlock@Feature@@IEBA_NAEAVBlockSource@@AEBVBlockPos@@AEBVBlock@@@Z
     * @hash   -1377213023
     */
    MCAPI bool _placeBlock(class BlockSource &, class BlockPos const &, class Block const &) const;
    /**
     * @symbol ?_setManuallyPlaced@Feature@@IEAAXPEAVActor@@@Z
     * @hash   1789115299
     */
    MCAPI void _setManuallyPlaced(class Actor *);

protected:

};