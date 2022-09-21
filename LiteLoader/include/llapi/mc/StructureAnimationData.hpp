/**
 * @file  MC/StructureAnimationData.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class StructureAnimationData.
 *
 */
class StructureAnimationData {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_STRUCTUREANIMATIONDATA
public:
    class StructureAnimationData& operator=(class StructureAnimationData const &) = delete;
    StructureAnimationData(class StructureAnimationData const &) = delete;
    StructureAnimationData() = delete;
#endif

public:
    /**
     * @hash   -1257046028
     * @symbol ??0StructureAnimationData@@QEAA@V?$unique_ptr@VCommandArea@@U?$default_delete@VCommandArea@@@std@@@std@@_KAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@2@AEBVStructureSettings@@EAEBVBlockPos@@@Z
     */
    MCAPI StructureAnimationData(std::unique_ptr<class CommandArea>, unsigned __int64, std::string const &, class StructureSettings const &, unsigned char, class BlockPos const &);
    /**
     * @hash   2101398466
     * @symbol ?allBlocksPlaced@StructureAnimationData@@QEBA_NXZ
     */
    MCAPI bool allBlocksPlaced() const;
    /**
     * @hash   1323001708
     * @symbol ?getBlocksExpectedToPlace@StructureAnimationData@@QEBAI_K@Z
     */
    MCAPI unsigned int getBlocksExpectedToPlace(unsigned __int64) const;
    /**
     * @hash   778588240
     * @symbol ?getBlocksPlaced@StructureAnimationData@@QEBAIXZ
     */
    MCAPI unsigned int getBlocksPlaced() const;
    /**
     * @hash   -1970478090
     * @symbol ?getPosition@StructureAnimationData@@QEBAAEBVBlockPos@@XZ
     */
    MCAPI class BlockPos const & getPosition() const;
    /**
     * @hash   901573042
     * @symbol ?getQueueID@StructureAnimationData@@QEBAIXZ
     */
    MCAPI unsigned int getQueueID() const;
    /**
     * @hash   -297043244
     * @symbol ?getRegion@StructureAnimationData@@QEBAAEAVBlockSource@@XZ
     */
    MCAPI class BlockSource & getRegion() const;
    /**
     * @hash   911202558
     * @symbol ?getStructureName@StructureAnimationData@@QEBAAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     */
    MCAPI std::string const & getStructureName() const;
    /**
     * @hash   888496422
     * @symbol ?getStructureSettings@StructureAnimationData@@QEBAAEBVStructureSettings@@XZ
     */
    MCAPI class StructureSettings const & getStructureSettings() const;
    /**
     * @hash   675576455
     * @symbol ?getStructureVersion@StructureAnimationData@@QEBAEXZ
     */
    MCAPI unsigned char getStructureVersion() const;
    /**
     * @hash   -280784690
     * @symbol ?getTargetDimension@StructureAnimationData@@QEBAAEBV?$AutomaticID@VDimension@@H@@XZ
     */
    MCAPI class AutomaticID<class Dimension, int> const & getTargetDimension() const;
    /**
     * @hash   1966304674
     * @symbol ?getTotalBlocks@StructureAnimationData@@QEBAIXZ
     */
    MCAPI unsigned int getTotalBlocks() const;
    /**
     * @hash   -347211998
     * @symbol ?serialize@StructureAnimationData@@QEAAAEAVCompoundTag@@AEAV2@@Z
     */
    MCAPI class CompoundTag & serialize(class CompoundTag &);
    /**
     * @hash   1066218242
     * @symbol ?setBlocksPlaced@StructureAnimationData@@QEAAXI@Z
     */
    MCAPI void setBlocksPlaced(unsigned int);
    /**
     * @hash   1839145228
     * @symbol ?setCmdArea@StructureAnimationData@@QEAAXV?$unique_ptr@VCommandArea@@U?$default_delete@VCommandArea@@@std@@@std@@@Z
     */
    MCAPI void setCmdArea(std::unique_ptr<class CommandArea>);
    /**
     * @hash   -1279956752
     * @symbol ?setQueueID@StructureAnimationData@@QEAAXI@Z
     */
    MCAPI void setQueueID(unsigned int);
    /**
     * @hash   1271405260
     * @symbol ?setTargetDimension@StructureAnimationData@@QEAAXAEBV?$AutomaticID@VDimension@@H@@@Z
     */
    MCAPI void setTargetDimension(class AutomaticID<class Dimension, int> const &);
    /**
     * @hash   -1991626075
     * @symbol ??1StructureAnimationData@@QEAA@XZ
     */
    MCAPI ~StructureAnimationData();
    /**
     * @hash   -1324267020
     * @symbol ?load@StructureAnimationData@@SA?AV1@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBVCompoundTag@@@Z
     */
    MCAPI static class StructureAnimationData load(std::string const &, class CompoundTag const &);

};