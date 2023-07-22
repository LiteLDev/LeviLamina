/**
 * @file  IcebergFeature.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "liteloader/api/Global.h"
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
     * @symbol  __unk_destructor_0
     */
    virtual ~IcebergFeature();
    /**
     * @vftbl  3
     * @symbol  ?place\@IcebergFeature\@\@UEBA_NAEAVBlockSource\@\@AEBVBlockPos\@\@AEAVRandom\@\@\@Z
     */
    virtual bool place(class BlockSource &, class BlockPos const &, class Random &) const;

//private:
    /**
     * @symbol  ?_isIcebergBlock\@IcebergFeature\@\@AEBA_NAEBVBlock\@\@\@Z
     */
    MCAPI bool _isIcebergBlock(class Block const &) const;
    /**
     * @symbol  ?carve\@IcebergFeature\@\@AEBAXHHAEBVBlockPos\@\@AEAVBlockSource\@\@_NM0HH\@Z
     */
    MCAPI void carve(int, int, class BlockPos const &, class BlockSource &, bool, float, class BlockPos const &, int, int) const;
    /**
     * @symbol  ?generateIcebergBlock\@IcebergFeature\@\@AEBAXAEAVBlockSource\@\@AEAVRandom\@\@AEBVBlockPos\@\@HHHHHH_N3MHAEBVBlock\@\@\@Z
     */
    MCAPI void generateIcebergBlock(class BlockSource &, class Random &, class BlockPos const &, int, int, int, int, int, int, bool, bool, float, int, class Block const &) const;
    /**
     * @symbol  ?heightDependentRadiusRound\@IcebergFeature\@\@AEBAHAEAVRandom\@\@HHH\@Z
     */
    MCAPI int heightDependentRadiusRound(class Random &, int, int, int) const;
    /**
     * @symbol  ?setIcebergBlock\@IcebergFeature\@\@AEBAXAEBVBlockPos\@\@AEAVBlockSource\@\@AEAVRandom\@\@HH_N3AEBVBlock\@\@\@Z
     */
    MCAPI void setIcebergBlock(class BlockPos const &, class BlockSource &, class Random &, int, int, bool, bool, class Block const &) const;
    /**
     * @symbol  ?signedDistanceEllipse\@IcebergFeature\@\@AEBAMHHAEBVBlockPos\@\@HHM\@Z
     */
    MCAPI float signedDistanceEllipse(int, int, class BlockPos const &, int, int, float) const;

private:

};