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
     * @symbol  ??0StructureAnimationData\@\@QEAA\@V?$unique_ptr\@VCommandArea\@\@U?$default_delete\@VCommandArea\@\@\@std\@\@\@std\@\@_KAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@2\@AEBVStructureSettings\@\@EAEBVBlockPos\@\@\@Z
     */
    MCAPI StructureAnimationData(std::unique_ptr<class CommandArea>, unsigned __int64, std::string const &, class StructureSettings const &, unsigned char, class BlockPos const &);
    /**
     * @symbol  ?allBlocksPlaced\@StructureAnimationData\@\@QEBA_NXZ
     */
    MCAPI bool allBlocksPlaced() const;
    /**
     * @symbol  ?getBlocksExpectedToPlace\@StructureAnimationData\@\@QEBAI_K\@Z
     */
    MCAPI unsigned int getBlocksExpectedToPlace(unsigned __int64) const;
    /**
     * @symbol  ?getBlocksPlaced\@StructureAnimationData\@\@QEBAIXZ
     */
    MCAPI unsigned int getBlocksPlaced() const;
    /**
     * @symbol  ?getDimensionBlockSource\@StructureAnimationData\@\@QEBAAEAVBlockSource\@\@XZ
     */
    MCAPI class BlockSource & getDimensionBlockSource() const;
    /**
     * @symbol  ?getPosition\@StructureAnimationData\@\@QEBAAEBVBlockPos\@\@XZ
     */
    MCAPI class BlockPos const & getPosition() const;
    /**
     * @symbol  ?getQueueID\@StructureAnimationData\@\@QEBAIXZ
     */
    MCAPI unsigned int getQueueID() const;
    /**
     * @symbol  ?getStructureName\@StructureAnimationData\@\@QEBAAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    MCAPI std::string const & getStructureName() const;
    /**
     * @symbol  ?getStructureSettings\@StructureAnimationData\@\@QEBAAEBVStructureSettings\@\@XZ
     */
    MCAPI class StructureSettings const & getStructureSettings() const;
    /**
     * @symbol  ?getStructureVersion\@StructureAnimationData\@\@QEBAEXZ
     */
    MCAPI unsigned char getStructureVersion() const;
    /**
     * @symbol  ?getTargetDimension\@StructureAnimationData\@\@QEBAAEBV?$AutomaticID\@VDimension\@\@H\@\@XZ
     */
    MCAPI class AutomaticID<class Dimension, int> const & getTargetDimension() const;
    /**
     * @symbol  ?getTotalBlocks\@StructureAnimationData\@\@QEBAIXZ
     */
    MCAPI unsigned int getTotalBlocks() const;
    /**
     * @symbol  ?serialize\@StructureAnimationData\@\@QEAAAEAVCompoundTag\@\@AEAV2\@\@Z
     */
    MCAPI class CompoundTag & serialize(class CompoundTag &);
    /**
     * @symbol  ?setBlocksPlaced\@StructureAnimationData\@\@QEAAXI\@Z
     */
    MCAPI void setBlocksPlaced(unsigned int);
    /**
     * @symbol  ?setCmdArea\@StructureAnimationData\@\@QEAAXV?$unique_ptr\@VCommandArea\@\@U?$default_delete\@VCommandArea\@\@\@std\@\@\@std\@\@\@Z
     */
    MCAPI void setCmdArea(std::unique_ptr<class CommandArea>);
    /**
     * @symbol  ?setQueueID\@StructureAnimationData\@\@QEAAXI\@Z
     */
    MCAPI void setQueueID(unsigned int);
    /**
     * @symbol  ?setTargetDimension\@StructureAnimationData\@\@QEAAXAEBV?$AutomaticID\@VDimension\@\@H\@\@\@Z
     */
    MCAPI void setTargetDimension(class AutomaticID<class Dimension, int> const &);
    /**
     * @symbol  ??1StructureAnimationData\@\@QEAA\@XZ
     */
    MCAPI ~StructureAnimationData();
    /**
     * @symbol  ?load\@StructureAnimationData\@\@SA?AV1\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEBVCompoundTag\@\@\@Z
     */
    MCAPI static class StructureAnimationData load(std::string const &, class CompoundTag const &);

};