#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/enums/AnimationMode.h"
#include "mc/enums/Mirror.h"
#include "mc/enums/Rotation.h"
#include "mc/math/Vec3.h"
#include "mc/world/ActorUniqueID.h"
#include "mc/world/level/BlockPos.h"

class StructureSettings {

public:
    std::string   mPaletteName;                               // this+0x0
    bool          mIgnoreEntities;                            // this+0x20
    bool          mReloadActorEquipment;                      // this+0x21
    bool          mIgnoreBlocks;                              // this+0x22
    bool          mIsWaterLogged;                             // this+0x23
    bool          mIgnoreJigsawBlocks;                        // this+0x24
    bool          mAllowNonTickingPlayerAndTickingAreaChunks; // this+0x25
    BlockPos      mStructureSize;                             // this+0x28
    BlockPos      mStructureOffset;                           // this+0x34
    Vec3          mPivot;                                     // this+0x40
    ActorUniqueID mLastTouchedByPlayer;                       // this+0x50
    Rotation      mRotation;                                  // this+0x58
    Mirror        mMirror;                                    // this+0x59
    AnimationMode mAnimationMode;                             // this+0x5A
    float         mAnimationSeconds;                          // this+0x5C
    float         mIntegrityValue;                            // this+0x60
    unsigned int  mIntegritySeed;                             // this+0x64

    inline StructureSettings(BlockPos const& size, bool ignoreEntities, bool ignoreBlocks) : StructureSettings() {
        setIgnoreBlocks(ignoreBlocks);
        setIgnoreEntities(ignoreEntities);
        setStructureSize(size);
    };

public:
    // NOLINTBEGIN
    /**
     * @symbol ??0StructureSettings\@\@QEAA\@XZ
     */
    MCAPI StructureSettings();
    /**
     * @symbol ??0StructureSettings\@\@QEAA\@$$QEAV0\@\@Z
     */
    MCAPI StructureSettings(class StructureSettings&&);
    /**
     * @symbol ?getAnimationMode\@StructureSettings\@\@QEBA?AW4AnimationMode\@\@XZ
     */
    MCAPI enum class AnimationMode getAnimationMode() const;
    /**
     * @symbol ?getAnimationSeconds\@StructureSettings\@\@QEBAMXZ
     */
    MCAPI float getAnimationSeconds() const;
    /**
     * @symbol ?getAnimationTicks\@StructureSettings\@\@QEBAIXZ
     */
    MCAPI unsigned int getAnimationTicks() const;
    /**
     * @symbol ?getIgnoreBlocks\@StructureSettings\@\@QEBA_NXZ
     */
    MCAPI bool getIgnoreBlocks() const;
    /**
     * @symbol ?getIgnoreEntities\@StructureSettings\@\@QEBA_NXZ
     */
    MCAPI bool getIgnoreEntities() const;
    /**
     * @symbol ?getIntegritySeed\@StructureSettings\@\@QEBAIXZ
     */
    MCAPI unsigned int getIntegritySeed() const;
    /**
     * @symbol ?getIntegrityValue\@StructureSettings\@\@QEBAMXZ
     */
    MCAPI float getIntegrityValue() const;
    /**
     * @symbol ?getLastTouchedByPlayerID\@StructureSettings\@\@QEBA?AUActorUniqueID\@\@XZ
     */
    MCAPI struct ActorUniqueID getLastTouchedByPlayerID() const;
    /**
     * @symbol ?getMirror\@StructureSettings\@\@QEBA?AW4Mirror\@\@XZ
     */
    MCAPI enum class Mirror getMirror() const;
    /**
     * @symbol
     * ?getPaletteName\@StructureSettings\@\@QEBAAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    MCAPI std::string const& getPaletteName() const;
    /**
     * @symbol ?getPivot\@StructureSettings\@\@QEBAAEBVVec3\@\@XZ
     */
    MCAPI class Vec3 const& getPivot() const;
    /**
     * @symbol ?getRotation\@StructureSettings\@\@QEBA?AW4Rotation\@\@XZ
     */
    MCAPI enum class Rotation getRotation() const;
    /**
     * @symbol ?getStructureOffset\@StructureSettings\@\@QEBAAEBVBlockPos\@\@XZ
     */
    MCAPI class BlockPos const& getStructureOffset() const;
    /**
     * @symbol ?getStructureSize\@StructureSettings\@\@QEBAAEBVBlockPos\@\@XZ
     */
    MCAPI class BlockPos const& getStructureSize() const;
    /**
     * @symbol ?isAnimated\@StructureSettings\@\@QEBA_NXZ
     */
    MCAPI bool isAnimated() const;
    /**
     * @symbol ??4StructureSettings\@\@QEAAAEAV0\@AEBV0\@\@Z
     */
    MCAPI class StructureSettings& operator=(class StructureSettings const&);
    /**
     * @symbol ??4StructureSettings\@\@QEAAAEAV0\@$$QEAV0\@\@Z
     */
    MCAPI class StructureSettings& operator=(class StructureSettings&&);
    /**
     * @symbol ?setAllowNonTickingPlayerAndTickingAreaChunks\@StructureSettings\@\@QEAAX_N\@Z
     */
    MCAPI void setAllowNonTickingPlayerAndTickingAreaChunks(bool);
    /**
     * @symbol ?setAnimationMode\@StructureSettings\@\@QEAAXW4AnimationMode\@\@\@Z
     */
    MCAPI void setAnimationMode(enum class AnimationMode);
    /**
     * @symbol ?setAnimationSeconds\@StructureSettings\@\@QEAAXM\@Z
     */
    MCAPI void setAnimationSeconds(float);
    /**
     * @symbol ?setIgnoreBlocks\@StructureSettings\@\@QEAAX_N\@Z
     */
    MCAPI void setIgnoreBlocks(bool);
    /**
     * @symbol ?setIgnoreEntities\@StructureSettings\@\@QEAAX_N\@Z
     */
    MCAPI void setIgnoreEntities(bool);
    /**
     * @symbol ?setIgnoreJigsawBlocks\@StructureSettings\@\@QEAAX_N\@Z
     */
    MCAPI void setIgnoreJigsawBlocks(bool);
    /**
     * @symbol ?setIntegritySeed\@StructureSettings\@\@QEAAXI\@Z
     */
    MCAPI void setIntegritySeed(unsigned int);
    /**
     * @symbol ?setIntegrityValue\@StructureSettings\@\@QEAAXM\@Z
     */
    MCAPI void setIntegrityValue(float);
    /**
     * @symbol ?setLastTouchedByPlayerID\@StructureSettings\@\@QEAAXUActorUniqueID\@\@\@Z
     */
    MCAPI void setLastTouchedByPlayerID(struct ActorUniqueID);
    /**
     * @symbol ?setMirror\@StructureSettings\@\@QEAAXW4Mirror\@\@\@Z
     */
    MCAPI void setMirror(enum class Mirror);
    /**
     * @symbol
     * ?setPaletteName\@StructureSettings\@\@QEAAXV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI void setPaletteName(std::string);
    /**
     * @symbol ?setPivot\@StructureSettings\@\@QEAAXAEBVVec3\@\@\@Z
     */
    MCAPI void setPivot(class Vec3 const&);
    /**
     * @symbol ?setReloadActorEquipment\@StructureSettings\@\@QEAAX_N\@Z
     */
    MCAPI void setReloadActorEquipment(bool);
    /**
     * @symbol ?setRotation\@StructureSettings\@\@QEAAXW4Rotation\@\@\@Z
     */
    MCAPI void setRotation(enum class Rotation);
    /**
     * @symbol ?setStructureOffset\@StructureSettings\@\@QEAAXAEBVBlockPos\@\@\@Z
     */
    MCAPI void setStructureOffset(class BlockPos const&);
    /**
     * @symbol ?setStructureSize\@StructureSettings\@\@QEAAXAEBVBlockPos\@\@\@Z
     */
    MCAPI void setStructureSize(class BlockPos const&);
    /**
     * @symbol ?shouldAllowNonTickingPlayerAndTickingAreaChunks\@StructureSettings\@\@QEBA_NXZ
     */
    MCAPI bool shouldAllowNonTickingPlayerAndTickingAreaChunks() const;
    /**
     * @symbol ??1StructureSettings\@\@QEAA\@XZ
     */
    MCAPI ~StructureSettings();
    /**
     * @symbol ?DEFAULT_STRUCTURE_OFFSET\@StructureSettings\@\@2VBlockPos\@\@B
     */
    MCAPI static class BlockPos const DEFAULT_STRUCTURE_OFFSET;
    /**
     * @symbol ?DEFAULT_STRUCTURE_SIZE\@StructureSettings\@\@2VBlockPos\@\@B
     */
    MCAPI static class BlockPos const DEFAULT_STRUCTURE_SIZE;
    // NOLINTEND
};
