#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/AutomaticID.h"

class StructureAnimationData {

public:
    // prevent constructor by default
    StructureAnimationData& operator=(StructureAnimationData const&) = delete;
    StructureAnimationData(StructureAnimationData const&)            = delete;
    StructureAnimationData()                                         = delete;

public:
    /**
     * @symbol
     * ??0StructureAnimationData\@\@QEAA\@V?$unique_ptr\@VCommandArea\@\@U?$default_delete\@VCommandArea\@\@\@std\@\@\@std\@\@_KAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@2\@AEBVStructureSettings\@\@EAEBVBlockPos\@\@\@Z
     */
    MCAPI
    StructureAnimationData(std::unique_ptr<class CommandArea>, unsigned __int64, std::string const&, class StructureSettings const&, unsigned char, class BlockPos const&); // NOLINT
    /**
     * @symbol ?allBlocksPlaced\@StructureAnimationData\@\@QEBA_NXZ
     */
    MCAPI bool allBlocksPlaced() const; // NOLINT
    /**
     * @symbol ?getBlocksExpectedToPlace\@StructureAnimationData\@\@QEBAI_K\@Z
     */
    MCAPI unsigned int getBlocksExpectedToPlace(unsigned __int64) const; // NOLINT
    /**
     * @symbol ?getBlocksPlaced\@StructureAnimationData\@\@QEBAIXZ
     */
    MCAPI unsigned int getBlocksPlaced() const; // NOLINT
    /**
     * @symbol ?getDimensionBlockSource\@StructureAnimationData\@\@QEBAAEAVBlockSource\@\@XZ
     */
    MCAPI class BlockSource& getDimensionBlockSource() const; // NOLINT
    /**
     * @symbol ?getPosition\@StructureAnimationData\@\@QEBAAEBVBlockPos\@\@XZ
     */
    MCAPI class BlockPos const& getPosition() const; // NOLINT
    /**
     * @symbol ?getQueueID\@StructureAnimationData\@\@QEBAIXZ
     */
    MCAPI unsigned int getQueueID() const; // NOLINT
    /**
     * @symbol
     * ?getStructureName\@StructureAnimationData\@\@QEBAAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    MCAPI std::string const& getStructureName() const; // NOLINT
    /**
     * @symbol ?getStructureSettings\@StructureAnimationData\@\@QEBAAEBVStructureSettings\@\@XZ
     */
    MCAPI class StructureSettings const& getStructureSettings() const; // NOLINT
    /**
     * @symbol ?getStructureVersion\@StructureAnimationData\@\@QEBAEXZ
     */
    MCAPI unsigned char getStructureVersion() const; // NOLINT
    /**
     * @symbol ?getTargetDimension\@StructureAnimationData\@\@QEBAAEBV?$AutomaticID\@VDimension\@\@H\@\@XZ
     */
    MCAPI class AutomaticID<class Dimension, int> const& getTargetDimension() const; // NOLINT
    /**
     * @symbol ?getTotalBlocks\@StructureAnimationData\@\@QEBAIXZ
     */
    MCAPI unsigned int getTotalBlocks() const; // NOLINT
    /**
     * @symbol ?serialize\@StructureAnimationData\@\@QEAAAEAVCompoundTag\@\@AEAV2\@\@Z
     */
    MCAPI class CompoundTag& serialize(class CompoundTag&); // NOLINT
    /**
     * @symbol ?setBlocksPlaced\@StructureAnimationData\@\@QEAAXI\@Z
     */
    MCAPI void setBlocksPlaced(unsigned int); // NOLINT
    /**
     * @symbol
     * ?setCmdArea\@StructureAnimationData\@\@QEAAXV?$unique_ptr\@VCommandArea\@\@U?$default_delete\@VCommandArea\@\@\@std\@\@\@std\@\@\@Z
     */
    MCAPI void setCmdArea(std::unique_ptr<class CommandArea>); // NOLINT
    /**
     * @symbol ?setQueueID\@StructureAnimationData\@\@QEAAXI\@Z
     */
    MCAPI void setQueueID(unsigned int); // NOLINT
    /**
     * @symbol ?setTargetDimension\@StructureAnimationData\@\@QEAAXAEBV?$AutomaticID\@VDimension\@\@H\@\@\@Z
     */
    MCAPI void setTargetDimension(class AutomaticID<class Dimension, int> const&); // NOLINT
    /**
     * @symbol ??1StructureAnimationData\@\@QEAA\@XZ
     */
    MCAPI ~StructureAnimationData(); // NOLINT
    /**
     * @symbol
     * ?load\@StructureAnimationData\@\@SA?AV1\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEBVCompoundTag\@\@\@Z
     */
    MCAPI static class StructureAnimationData load(std::string const&, class CompoundTag const&); // NOLINT
};
