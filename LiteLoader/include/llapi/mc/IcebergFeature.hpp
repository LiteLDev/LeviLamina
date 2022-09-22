/**
 * @file  IcebergFeature.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Feature.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class IcebergFeature.
 *
 */
class IcebergFeature : public Feature {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ICEBERGFEATURE
public:
    class IcebergFeature& operator=(class IcebergFeature const &) = delete;
    IcebergFeature(class IcebergFeature const &) = delete;
    IcebergFeature() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol __unk_destructor_0
     */
    virtual ~IcebergFeature();
    /**
     * @hash   1538523437
     * @vftbl  3
     * @symbol ?place@IcebergFeature@@UEBA_NAEAVBlockSource@@AEBVBlockPos@@AEAVRandom@@@Z
     */
    virtual bool place(class BlockSource &, class BlockPos const &, class Random &) const;

//private:
    /**
     * @hash   -211149291
     * @symbol ?_isIcebergBlock@IcebergFeature@@AEBA_NAEBVBlock@@@Z
     */
    MCAPI bool _isIcebergBlock(class Block const &) const;
    /**
     * @hash   -1440168059
     * @symbol ?carve@IcebergFeature@@AEBAXHHAEBVBlockPos@@AEAVBlockSource@@_NM0HH@Z
     */
    MCAPI void carve(int, int, class BlockPos const &, class BlockSource &, bool, float, class BlockPos const &, int, int) const;
    /**
     * @hash   949608841
     * @symbol ?generateIcebergBlock@IcebergFeature@@AEBAXAEAVBlockSource@@AEAVRandom@@AEBVBlockPos@@HHHHHH_N3MHAEBVBlock@@@Z
     */
    MCAPI void generateIcebergBlock(class BlockSource &, class Random &, class BlockPos const &, int, int, int, int, int, int, bool, bool, float, int, class Block const &) const;
    /**
     * @hash   -526447545
     * @symbol ?heightDependentRadiusRound@IcebergFeature@@AEBAHAEAVRandom@@HHH@Z
     */
    MCAPI int heightDependentRadiusRound(class Random &, int, int, int) const;
    /**
     * @hash   -559050215
     * @symbol ?setIcebergBlock@IcebergFeature@@AEBAXAEBVBlockPos@@AEAVBlockSource@@AEAVRandom@@HH_N3AEBVBlock@@@Z
     */
    MCAPI void setIcebergBlock(class BlockPos const &, class BlockSource &, class Random &, int, int, bool, bool, class Block const &) const;
    /**
     * @hash   -2023467075
     * @symbol ?signedDistanceEllipse@IcebergFeature@@AEBAMHHAEBVBlockPos@@HHM@Z
     */
    MCAPI float signedDistanceEllipse(int, int, class BlockPos const &, int, int, float) const;

private:

};