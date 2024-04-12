#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/enums/AnimationMode.h"
#include "mc/enums/Mirror.h"
#include "mc/enums/Rotation.h"

class StructureSettings {
public:
    // NOLINTBEGIN
    // symbol: ??0StructureSettings@@QEAA@XZ
    MCAPI StructureSettings();

    // symbol: ??0StructureSettings@@QEAA@$$QEAV0@@Z
    MCAPI StructureSettings(class StructureSettings&&);

    // symbol: ??0StructureSettings@@QEAA@AEBV0@@Z
    MCAPI StructureSettings(class StructureSettings const&);

    // symbol: ?getAnimationMode@StructureSettings@@QEBA?AW4AnimationMode@@XZ
    MCAPI ::AnimationMode getAnimationMode() const;

    // symbol: ?getAnimationSeconds@StructureSettings@@QEBAMXZ
    MCAPI float getAnimationSeconds() const;

    // symbol: ?getAnimationTicks@StructureSettings@@QEBAIXZ
    MCAPI uint getAnimationTicks() const;

    // symbol: ?getIgnoreBlocks@StructureSettings@@QEBA_NXZ
    MCAPI bool getIgnoreBlocks() const;

    // symbol: ?getIgnoreEntities@StructureSettings@@QEBA_NXZ
    MCAPI bool getIgnoreEntities() const;

    // symbol: ?getIntegritySeed@StructureSettings@@QEBAIXZ
    MCAPI uint getIntegritySeed() const;

    // symbol: ?getIntegrityValue@StructureSettings@@QEBAMXZ
    MCAPI float getIntegrityValue() const;

    // symbol: ?getMirror@StructureSettings@@QEBA?AW4Mirror@@XZ
    MCAPI ::Mirror getMirror() const;

    // symbol: ?getRotation@StructureSettings@@QEBA?AW4Rotation@@XZ
    MCAPI ::Rotation getRotation() const;

    // symbol: ?getStructureOffset@StructureSettings@@QEBAAEBVBlockPos@@XZ
    MCAPI class BlockPos const& getStructureOffset() const;

    // symbol: ?getStructureSize@StructureSettings@@QEBAAEBVBlockPos@@XZ
    MCAPI class BlockPos const& getStructureSize() const;

    // symbol: ?isAnimated@StructureSettings@@QEBA_NXZ
    MCAPI bool isAnimated() const;

    // symbol: ??4StructureSettings@@QEAAAEAV0@$$QEAV0@@Z
    MCAPI class StructureSettings& operator=(class StructureSettings&&);

    // symbol: ??4StructureSettings@@QEAAAEAV0@AEBV0@@Z
    MCAPI class StructureSettings& operator=(class StructureSettings const&);

    // symbol: ?setAllowNonTickingPlayerAndTickingAreaChunks@StructureSettings@@QEAAX_N@Z
    MCAPI void setAllowNonTickingPlayerAndTickingAreaChunks(bool allowNonPlayerTicking);

    // symbol: ?setAnimationMode@StructureSettings@@QEAAXW4AnimationMode@@@Z
    MCAPI void setAnimationMode(::AnimationMode);

    // symbol: ?setAnimationSeconds@StructureSettings@@QEAAXM@Z
    MCAPI void setAnimationSeconds(float seconds);

    // symbol: ?setIgnoreBlocks@StructureSettings@@QEAAX_N@Z
    MCAPI void setIgnoreBlocks(bool ignoreBlocks);

    // symbol: ?setIgnoreEntities@StructureSettings@@QEAAX_N@Z
    MCAPI void setIgnoreEntities(bool ignoreEntities);

    // symbol: ?setIgnoreJigsawBlocks@StructureSettings@@QEAAX_N@Z
    MCAPI void setIgnoreJigsawBlocks(bool ignoreJigsawBlocks);

    // symbol: ?setIntegritySeed@StructureSettings@@QEAAXI@Z
    MCAPI void setIntegritySeed(uint integritySeed);

    // symbol: ?setIntegrityValue@StructureSettings@@QEAAXM@Z
    MCAPI void setIntegrityValue(float integrityValue);

    // symbol: ?setIsWaterLogged@StructureSettings@@QEAAX_N@Z
    MCAPI void setIsWaterLogged(bool);

    // symbol: ?setMirror@StructureSettings@@QEAAXW4Mirror@@@Z
    MCAPI void setMirror(::Mirror mirror);

    // symbol: ?setPivot@StructureSettings@@QEAAXAEBVVec3@@@Z
    MCAPI void setPivot(class Vec3 const& pivot);

    // symbol: ?setReloadActorEquipment@StructureSettings@@QEAAX_N@Z
    MCAPI void setReloadActorEquipment(bool);

    // symbol: ?setRotation@StructureSettings@@QEAAXW4Rotation@@@Z
    MCAPI void setRotation(::Rotation rotation);

    // symbol: ?setStructureOffset@StructureSettings@@QEAAXAEBVBlockPos@@@Z
    MCAPI void setStructureOffset(class BlockPos const& offset);

    // symbol: ?setStructureSize@StructureSettings@@QEAAXAEBVBlockPos@@@Z
    MCAPI void setStructureSize(class BlockPos const& size);

    // symbol: ?shouldAllowNonTickingPlayerAndTickingAreaChunks@StructureSettings@@QEBA_NXZ
    MCAPI bool shouldAllowNonTickingPlayerAndTickingAreaChunks() const;

    // symbol: ??1StructureSettings@@QEAA@XZ
    MCAPI ~StructureSettings();

    // symbol: ?DEFAULT_STRUCTURE_OFFSET@StructureSettings@@2VBlockPos@@B
    MCAPI static class BlockPos const DEFAULT_STRUCTURE_OFFSET;

    // symbol: ?DEFAULT_STRUCTURE_SIZE@StructureSettings@@2VBlockPos@@B
    MCAPI static class BlockPos const DEFAULT_STRUCTURE_SIZE;

    // NOLINTEND
};
