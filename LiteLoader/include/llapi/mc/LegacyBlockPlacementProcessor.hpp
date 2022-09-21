/**
 * @file  MC/LegacyBlockPlacementProcessor.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class LegacyBlockPlacementProcessor.
 *
 */
class LegacyBlockPlacementProcessor {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_LEGACYBLOCKPLACEMENTPROCESSOR
public:
    class LegacyBlockPlacementProcessor& operator=(class LegacyBlockPlacementProcessor const &) = delete;
    LegacyBlockPlacementProcessor(class LegacyBlockPlacementProcessor const &) = delete;
    LegacyBlockPlacementProcessor() = delete;
#endif

public:
    /**
     * @hash   1451624990
     * @symbol ??0LegacyBlockPlacementProcessor@@QEAA@AEBVLegacyStructureSettings@@@Z
     */
    MCAPI LegacyBlockPlacementProcessor(class LegacyStructureSettings const &);
    /**
     * @hash   1909725212
     * @symbol ?applyBlockRules@LegacyBlockPlacementProcessor@@QEAAPEBVBlock@@AEAVBlockSource@@AEAVBlockPos@@PEBV2@AEBV4@@Z
     */
    MCAPI class Block const * applyBlockRules(class BlockSource &, class BlockPos &, class Block const *, class BlockPos const &);
    /**
     * @hash   -489474584
     * @symbol ?applyGravity@LegacyBlockPlacementProcessor@@QEBAAEAVBlockPos@@AEAVBlockSource@@HAEAV2@@Z
     */
    MCAPI class BlockPos & applyGravity(class BlockSource &, int, class BlockPos &) const;
    /**
     * @hash   1666317374
     * @symbol ?canPlace@LegacyBlockPlacementProcessor@@QEAA_NXZ
     */
    MCAPI bool canPlace();
    /**
     * @hash   -580466131
     * @symbol ??1LegacyBlockPlacementProcessor@@QEAA@XZ
     */
    MCAPI ~LegacyBlockPlacementProcessor();

};