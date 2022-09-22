/**
 * @file  BlockVolume.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class BlockVolume.
 *
 */
class BlockVolume {

#define AFTER_EXTRA
// Add Member There
public:
struct BlockVolumeIter {
    BlockVolumeIter() = delete;
    BlockVolumeIter(BlockVolumeIter const&) = delete;
    BlockVolumeIter(BlockVolumeIter const&&) = delete;
};

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BLOCKVOLUME
public:
    class BlockVolume& operator=(class BlockVolume const &) = delete;
    BlockVolume(class BlockVolume const &) = delete;
    BlockVolume() = delete;
#endif

public:
    /**
     * @hash   2084320762
     * @symbol ??0BlockVolume@@QEAA@V?$buffer_span_mut@PEBVBlock@@@@HHHAEBVBlock@@H@Z
     */
    MCAPI BlockVolume(class buffer_span_mut<class Block const *>, int, int, int, class Block const &, int);
    /**
     * @hash   1230652440
     * @symbol ?begin@BlockVolume@@QEBA?AUBlockVolumeIter@1@XZ
     */
    MCAPI struct BlockVolume::BlockVolumeIter begin() const;
    /**
     * @hash   363548499
     * @symbol ?computeHeightMap@BlockVolume@@QEBA?AV?$unique_ptr@V?$vector@FV?$allocator@F@std@@@std@@U?$default_delete@V?$vector@FV?$allocator@F@std@@@std@@@2@@std@@XZ
     */
    MCAPI std::unique_ptr<std::vector<short>> computeHeightMap() const;
    /**
     * @hash   351752076
     * @symbol ?end@BlockVolume@@QEBA?AUBlockVolumeIter@1@XZ
     */
    MCAPI struct BlockVolume::BlockVolumeIter end() const;
    /**
     * @hash   402746117
     * @symbol ?findHighestNonAirBlock@BlockVolume@@QEBAFXZ
     */
    MCAPI short findHighestNonAirBlock() const;
    /**
     * @hash   -459949255
     * @symbol ?getAboveTopSolidBlock@BlockVolume@@QEBAFAEBVBlockPos@@_N11@Z
     */
    MCAPI short getAboveTopSolidBlock(class BlockPos const &, bool, bool, bool) const;
    /**
     * @hash   2102883962
     * @symbol ?getDimensions@BlockVolume@@QEBA?AVPos@@XZ
     */
    MCAPI class Pos getDimensions() const;
    /**
     * @hash   -1621825566
     * @symbol ?getIndexBounds@BlockVolume@@QEBAIXZ
     */
    MCAPI unsigned int getIndexBounds() const;
    /**
     * @hash   -1990500153
     * @symbol ?index@BlockVolume@@QEBAIAEBVBlockPos@@@Z
     */
    MCAPI unsigned int index(class BlockPos const &) const;
    /**
     * @hash   342565285
     * @symbol ?index@BlockVolume@@QEBAIAEBVPos@@@Z
     */
    MCAPI unsigned int index(class Pos const &) const;
    /**
     * @hash   -64763669
     * @symbol ?indexNoBoundsCheck@BlockVolume@@QEBAIAEBVPos@@@Z
     */
    MCAPI unsigned int indexNoBoundsCheck(class Pos const &) const;
    /**
     * @hash   -627901723
     * @symbol ?indexNoBoundsCheck@BlockVolume@@QEBAIAEBVBlockPos@@@Z
     */
    MCAPI unsigned int indexNoBoundsCheck(class BlockPos const &) const;
    /**
     * @hash   440237707
     * @symbol ?isInBounds@BlockVolume@@QEBA_NAEBVBlockPos@@@Z
     */
    MCAPI bool isInBounds(class BlockPos const &) const;
    /**
     * @hash   1630996617
     * @symbol ?isInBounds@BlockVolume@@QEBA_NAEBVPos@@@Z
     */
    MCAPI bool isInBounds(class Pos const &) const;

};