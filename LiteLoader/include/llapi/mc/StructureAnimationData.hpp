/**
 * @file  StructureAnimationData.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

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
     * @hash   -567247916
     * @symbol  ??0StructureAnimationData\@\@QEAA\@V?$unique_ptr\@VCommandArea\@\@U?$default_delete\@VCommandArea\@\@\@std\@\@\@std\@\@_KAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@2\@AEBVStructureSettings\@\@EAEBVBlockPos\@\@\@Z
     */
    MCAPI StructureAnimationData(std::unique_ptr<class CommandArea>, unsigned __int64, std::string const &, class StructureSettings const &, unsigned char, class BlockPos const &);
    /**
     * @hash   -1503770718
     * @symbol  ?allBlocksPlaced\@StructureAnimationData\@\@QEBA_NXZ
     */
    MCAPI bool allBlocksPlaced() const;
    /**
     * @hash   2012799820
     * @symbol  ?getBlocksExpectedToPlace\@StructureAnimationData\@\@QEBAI_K\@Z
     */
    MCAPI unsigned int getBlocksExpectedToPlace(unsigned __int64) const;
    /**
     * @hash   -172863264
     * @symbol  ?getBlocksPlaced\@StructureAnimationData\@\@QEBAIXZ
     */
    MCAPI unsigned int getBlocksPlaced() const;
    /**
     * @symbol  ?getDimensionBlockSource\@StructureAnimationData\@\@QEBAAEAVBlockSource\@\@XZ
     */
    MCAPI class BlockSource & getDimensionBlockSource() const;
    /**
     * @hash   1478916838
     * @symbol  ?getPosition\@StructureAnimationData\@\@QEBAAEBVBlockPos\@\@XZ
     */
    MCAPI class BlockPos const & getPosition() const;
    /**
     * @hash   1699510562
     * @symbol  ?getQueueID\@StructureAnimationData\@\@QEBAIXZ
     */
    MCAPI unsigned int getQueueID() const;
    /**
     * @hash   1007825342
     * @symbol  ?getStructureName\@StructureAnimationData\@\@QEBAAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    MCAPI std::string const & getStructureName() const;
    /**
     * @hash   1141739142
     * @symbol  ?getStructureSettings\@StructureAnimationData\@\@QEBAAEBVStructureSettings\@\@XZ
     */
    MCAPI class StructureSettings const & getStructureSettings() const;
    /**
     * @hash   -275875049
     * @symbol  ?getStructureVersion\@StructureAnimationData\@\@QEBAEXZ
     */
    MCAPI unsigned char getStructureVersion() const;
    /**
     * @hash   878934734
     * @symbol  ?getTargetDimension\@StructureAnimationData\@\@QEBAAEBV?$AutomaticID\@VDimension\@\@H\@\@XZ
     */
    MCAPI class AutomaticID<class Dimension, int> const & getTargetDimension() const;
    /**
     * @hash   1014853170
     * @symbol  ?getTotalBlocks\@StructureAnimationData\@\@QEBAIXZ
     */
    MCAPI unsigned int getTotalBlocks() const;
    /**
     * @hash   342570738
     * @symbol  ?serialize\@StructureAnimationData\@\@QEAAAEAVCompoundTag\@\@AEAV2\@\@Z
     */
    MCAPI class CompoundTag & serialize(class CompoundTag &);
    /**
     * @hash   1952244866
     * @symbol  ?setBlocksPlaced\@StructureAnimationData\@\@QEAAXI\@Z
     */
    MCAPI void setBlocksPlaced(unsigned int);
    /**
     * @hash   -1766116212
     * @symbol  ?setCmdArea\@StructureAnimationData\@\@QEAAXV?$unique_ptr\@VCommandArea\@\@U?$default_delete\@VCommandArea\@\@\@std\@\@\@std\@\@\@Z
     */
    MCAPI void setCmdArea(std::unique_ptr<class CommandArea>);
    /**
     * @hash   -590250896
     * @symbol  ?setQueueID\@StructureAnimationData\@\@QEAAXI\@Z
     */
    MCAPI void setQueueID(unsigned int);
    /**
     * @hash   1961111116
     * @symbol  ?setTargetDimension\@StructureAnimationData\@\@QEAAXAEBV?$AutomaticID\@VDimension\@\@H\@\@\@Z
     */
    MCAPI void setTargetDimension(class AutomaticID<class Dimension, int> const &);
    /**
     * @hash   -1973277915
     * @symbol  ??1StructureAnimationData\@\@QEAA\@XZ
     */
    MCAPI ~StructureAnimationData();
    /**
     * @hash   -634468908
     * @symbol  ?load\@StructureAnimationData\@\@SA?AV1\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEBVCompoundTag\@\@\@Z
     */
    MCAPI static class StructureAnimationData load(std::string const &, class CompoundTag const &);

};