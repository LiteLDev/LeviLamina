/**
 * @file  LegacyStructureSettings.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class LegacyStructureSettings.
 *
 */
class LegacyStructureSettings {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_LEGACYSTRUCTURESETTINGS
public:
    class LegacyStructureSettings& operator=(class LegacyStructureSettings const &) = delete;
    LegacyStructureSettings(class LegacyStructureSettings const &) = delete;
#endif

public:
    /**
     * @hash   -119812071
     * @symbol ??0LegacyStructureSettings@@QEAA@XZ
     */
    MCAPI LegacyStructureSettings();
    /**
     * @hash   -168418870
     * @symbol ??0LegacyStructureSettings@@QEAA@W4Mirror@@W4Rotation@@PEBVBlock@@AEBVBoundingBox@@@Z
     */
    MCAPI LegacyStructureSettings(enum Mirror, enum Rotation, class Block const *, class BoundingBox const &);
    /**
     * @hash   124327119
     * @symbol ?addSwapAuxValue@LegacyStructureSettings@@QEAAXHH@Z
     */
    MCAPI void addSwapAuxValue(int, int);
    /**
     * @hash   1401971398
     * @symbol ?getBoundingBox@LegacyStructureSettings@@QEAAAEBVBoundingBox@@XZ
     */
    MCAPI class BoundingBox const & getBoundingBox();
    /**
     * @hash   -424682019
     * @symbol ?getIgnoreBlock@LegacyStructureSettings@@QEBAPEBVBlock@@XZ
     */
    MCAPI class Block const * getIgnoreBlock() const;
    /**
     * @hash   2130546516
     * @symbol ?getMirror@LegacyStructureSettings@@QEBAAEBW4Mirror@@XZ
     */
    MCAPI enum Mirror const & getMirror() const;
    /**
     * @hash   1719831106
     * @symbol ?getRefPos@LegacyStructureSettings@@QEBAAEBVBlockPos@@XZ
     */
    MCAPI class BlockPos const & getRefPos() const;
    /**
     * @hash   -112084812
     * @symbol ?getRotation@LegacyStructureSettings@@QEBAAEBW4Rotation@@XZ
     */
    MCAPI enum Rotation const & getRotation() const;
    /**
     * @hash   -622537037
     * @symbol ?getSwappedBlock@LegacyStructureSettings@@QEBAAEBVBlock@@AEBVBlockPalette@@AEBV2@@Z
     */
    MCAPI class Block const & getSwappedBlock(class BlockPalette const &, class Block const &) const;
    /**
     * @hash   44418502
     * @symbol ?isIgnoreJigsawBlocks@LegacyStructureSettings@@QEBA_NXZ
     */
    MCAPI bool isIgnoreJigsawBlocks() const;
    /**
     * @hash   -774357708
     * @symbol ?isIgnoreStructureBlocks@LegacyStructureSettings@@QEBA_NXZ
     */
    MCAPI bool isIgnoreStructureBlocks() const;
    /**
     * @hash   153815940
     * @symbol ?isPlacingWaterBelowSeaLevel@LegacyStructureSettings@@QEBA_NXZ
     */
    MCAPI bool isPlacingWaterBelowSeaLevel() const;
    /**
     * @hash   819426728
     * @symbol ?placeWaterBelowSeaLevel@LegacyStructureSettings@@QEAAX_N@Z
     */
    MCAPI void placeWaterBelowSeaLevel(bool);
    /**
     * @hash   -1359179458
     * @symbol ?setBlockRules@LegacyStructureSettings@@QEAAXPEBV?$vector@V?$unique_ptr@VStructurePoolBlockRule@@U?$default_delete@VStructurePoolBlockRule@@@std@@@std@@V?$allocator@V?$unique_ptr@VStructurePoolBlockRule@@U?$default_delete@VStructurePoolBlockRule@@@std@@@std@@@2@@std@@@Z
     */
    MCAPI void setBlockRules(std::vector<std::unique_ptr<class StructurePoolBlockRule>> const *);
    /**
     * @hash   1907423316
     * @symbol ?setBlockTagRules@LegacyStructureSettings@@QEAAXPEBV?$vector@V?$unique_ptr@VStructurePoolBlockTagRule@@U?$default_delete@VStructurePoolBlockTagRule@@@std@@@std@@V?$allocator@V?$unique_ptr@VStructurePoolBlockTagRule@@U?$default_delete@VStructurePoolBlockTagRule@@@std@@@std@@@2@@std@@@Z
     */
    MCAPI void setBlockTagRules(std::vector<std::unique_ptr<class StructurePoolBlockTagRule>> const *);
    /**
     * @hash   -393952214
     * @symbol ?setBoundingBox@LegacyStructureSettings@@QEAAXAEBVBoundingBox@@@Z
     */
    MCAPI void setBoundingBox(class BoundingBox const &);
    /**
     * @hash   1020513891
     * @symbol ?setIgnoreBlock@LegacyStructureSettings@@QEAAXPEBVBlock@@@Z
     */
    MCAPI void setIgnoreBlock(class Block const *);
    /**
     * @hash   1160297088
     * @symbol ?setIntegrity@LegacyStructureSettings@@QEAAXM@Z
     */
    MCAPI void setIntegrity(float);
    /**
     * @hash   -57655436
     * @symbol ?setMirror@LegacyStructureSettings@@QEAAXW4Mirror@@@Z
     */
    MCAPI void setMirror(enum Mirror);
    /**
     * @hash   1464422196
     * @symbol ?setProjection@LegacyStructureSettings@@QEAAXW4Projection@@@Z
     */
    MCAPI void setProjection(enum Projection);
    /**
     * @hash   1897936006
     * @symbol ?setRefPos@LegacyStructureSettings@@QEAAXAEBVBlockPos@@@Z
     */
    MCAPI void setRefPos(class BlockPos const &);
    /**
     * @hash   -1539606586
     * @symbol ?setRotation@LegacyStructureSettings@@QEAAXW4Rotation@@@Z
     */
    MCAPI void setRotation(enum Rotation);
    /**
     * @hash   1291598122
     * @symbol ?setSeed@LegacyStructureSettings@@QEAAXI@Z
     */
    MCAPI void setSeed(unsigned int);
    /**
     * @hash   -652979117
     * @symbol ?updateBoundingBoxFromChunkPos@LegacyStructureSettings@@QEAAXXZ
     */
    MCAPI void updateBoundingBoxFromChunkPos();
    /**
     * @hash   -1640967783
     * @symbol ??1LegacyStructureSettings@@QEAA@XZ
     */
    MCAPI ~LegacyStructureSettings();
    /**
     * @hash   671272029
     * @symbol ?INTEGRITY_MAX@LegacyStructureSettings@@2MB
     */
    MCAPI static float const INTEGRITY_MAX;
    /**
     * @hash   -1517887043
     * @symbol ?INTEGRITY_MIN@LegacyStructureSettings@@2MB
     */
    MCAPI static float const INTEGRITY_MIN;
    /**
     * @hash   -384085897
     * @symbol ?MAX_STRUCTURE_SIZE@LegacyStructureSettings@@2HB
     */
    MCAPI static int const MAX_STRUCTURE_SIZE;

};