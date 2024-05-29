#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/world/level/levelgen/structure/StructureSettings.h"

// auto generated inclusion list
#include "mc/enums/AnimationMode.h"
#include "mc/enums/Mirror.h"
#include "mc/enums/Rotation.h"
#include "mc/world/level/levelgen/structure/StructureBlockType.h"
#include "mc/world/level/levelgen/structure/StructureRedstoneSaveMode.h"

class StructureEditorData {
public:
    std::string               mStructureName;
    std::string               mDataField;
    bool                      mIncludePlayers;
    bool                      mShowBoundingBox;
    StructureRedstoneSaveMode mRedstoneSaveMode;
    StructureBlockType        mType;
    StructureSettings         mSettings;


    // prevent constructor by default
    StructureEditorData& operator=(StructureEditorData const&);

public:
    // NOLINTBEGIN
    // symbol: ??0StructureEditorData@@QEAA@XZ
    MCAPI StructureEditorData();

    // symbol: ??0StructureEditorData@@QEAA@AEBV0@@Z
    MCAPI StructureEditorData(class StructureEditorData const&);

    // symbol:
    // ?getAnimationModeAsString@StructureEditorData@@QEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    MCAPI std::string getAnimationModeAsString() const;

    // symbol: ?getAnimationSeconds@StructureEditorData@@QEBAMXZ
    MCAPI float getAnimationSeconds() const;

    // symbol: ?getIgnoreBlocks@StructureEditorData@@QEBA_NXZ
    MCAPI bool getIgnoreBlocks() const;

    // symbol: ?getIgnoreEntities@StructureEditorData@@QEBA_NXZ
    MCAPI bool getIgnoreEntities() const;

    // symbol: ?getIncludePlayers@StructureEditorData@@QEBA_NXZ
    MCAPI bool getIncludePlayers() const;

    // symbol: ?getIntegritySeed@StructureEditorData@@QEBAIXZ
    MCAPI uint getIntegritySeed() const;

    // symbol: ?getIntegrityValue@StructureEditorData@@QEBAMXZ
    MCAPI float getIntegrityValue() const;

    // symbol: ?getIsWaterLogged@StructureEditorData@@QEBA_NXZ
    MCAPI bool getIsWaterLogged() const;

    // symbol: ?getMirror@StructureEditorData@@QEBA?AW4Mirror@@XZ
    MCAPI ::Mirror getMirror() const;

    // symbol: ?getPivot@StructureEditorData@@QEBAAEBVVec3@@XZ
    MCAPI class Vec3 const& getPivot() const;

    // symbol: ?getRedstoneSaveMode@StructureEditorData@@QEBA?AW4StructureRedstoneSaveMode@@XZ
    MCAPI ::StructureRedstoneSaveMode getRedstoneSaveMode() const;

    // symbol: ?getRotation@StructureEditorData@@QEBA?AW4Rotation@@XZ
    MCAPI ::Rotation getRotation() const;

    // symbol: ?getShowBoundingBox@StructureEditorData@@QEBA_NXZ
    MCAPI bool getShowBoundingBox() const;

    // symbol: ?getStructureBlockType@StructureEditorData@@QEBA?AW4StructureBlockType@@XZ
    MCAPI ::StructureBlockType getStructureBlockType() const;

    // symbol:
    // ?getStructureName@StructureEditorData@@QEBAAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    MCAPI std::string const& getStructureName() const;

    // symbol: ?getStructureOffset@StructureEditorData@@QEBAAEBVBlockPos@@XZ
    MCAPI class BlockPos const& getStructureOffset() const;

    // symbol: ?getStructureSettings@StructureEditorData@@QEBAAEBVStructureSettings@@XZ
    MCAPI class StructureSettings const& getStructureSettings() const;

    // symbol: ?getStructureSize@StructureEditorData@@QEBAAEBVBlockPos@@XZ
    MCAPI class BlockPos const& getStructureSize() const;

    // symbol: ?load@StructureEditorData@@QEAAXAEBVCompoundTag@@AEAVDataLoadHelper@@@Z
    MCAPI void load(class CompoundTag const& base, class DataLoadHelper& dataLoadHelper);

    // symbol: ?save@StructureEditorData@@QEBAXAEAVCompoundTag@@@Z
    MCAPI void save(class CompoundTag& tag) const;

    // symbol: ?setAllowNonTickingPlayerAndTickingAreaChunks@StructureEditorData@@QEAAX_N@Z
    MCAPI void setAllowNonTickingPlayerAndTickingAreaChunks(bool allowNonPlayerTicking);

    // symbol: ?setAnimationMode@StructureEditorData@@QEAAXW4AnimationMode@@@Z
    MCAPI void setAnimationMode(::AnimationMode);

    // symbol: ?setAnimationSeconds@StructureEditorData@@QEAAXM@Z
    MCAPI void setAnimationSeconds(float);

    // symbol: ?setAnimationTicks@StructureEditorData@@QEAAXI@Z
    MCAPI void setAnimationTicks(uint animationTicks);

    // symbol: ?setIgnoreBlocks@StructureEditorData@@QEAAX_N@Z
    MCAPI void setIgnoreBlocks(bool ignoreBlocks);

    // symbol: ?setIgnoreEntities@StructureEditorData@@QEAAX_N@Z
    MCAPI void setIgnoreEntities(bool ignoreEntities);

    // symbol: ?setIntegritySeed@StructureEditorData@@QEAAXI@Z
    MCAPI void setIntegritySeed(uint integritySeed);

    // symbol: ?setIntegrityValue@StructureEditorData@@QEAAXM@Z
    MCAPI void setIntegrityValue(float integrityValue);

    // symbol: ?setIsWaterLogged@StructureEditorData@@QEAAX_N@Z
    MCAPI void setIsWaterLogged(bool);

    // symbol: ?setLastTouchedByPlayerID@StructureEditorData@@QEAAXUActorUniqueID@@@Z
    MCAPI void setLastTouchedByPlayerID(struct ActorUniqueID lastTouchedByPlayerID);

    // symbol: ?setMirror@StructureEditorData@@QEAAXW4Mirror@@@Z
    MCAPI void setMirror(::Mirror mirror);

    // symbol: ?setRotation@StructureEditorData@@QEAAXW4Rotation@@@Z
    MCAPI void setRotation(::Rotation rotation);

    // symbol: ?setShowBoundingBox@StructureEditorData@@QEAAX_N@Z
    MCAPI void setShowBoundingBox(bool showBoundingBox);

    // symbol: ?setStructureBlockType@StructureEditorData@@QEAAXW4StructureBlockType@@@Z
    MCAPI void setStructureBlockType(::StructureBlockType structureBlockType);

    // symbol: ?setStructureName@StructureEditorData@@QEAAXV?$basic_string_view@DU?$char_traits@D@std@@@std@@@Z
    MCAPI void setStructureName(std::string_view name);

    // symbol: ?setStructureOffset@StructureEditorData@@QEAAXAEBVBlockPos@@@Z
    MCAPI void setStructureOffset(class BlockPos const& offset);

    // symbol: ?setStructureSize@StructureEditorData@@QEAAXAEBVBlockPos@@@Z
    MCAPI void setStructureSize(class BlockPos const& size);

    // symbol: ??1StructureEditorData@@QEAA@XZ
    MCAPI ~StructureEditorData();

    // symbol: ?getOrientedBounds@StructureEditorData@@SA?AVBlockPos@@AEBV2@W4Rotation@@@Z
    MCAPI static class BlockPos getOrientedBounds(class BlockPos const& size, ::Rotation rotation);

    // symbol:
    // ?DEFAULT_EXPORT_NAME@StructureEditorData@@2V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@B
    MCAPI static std::string const DEFAULT_EXPORT_NAME;

    // symbol:
    // ?DEFAULT_STRUCTURE_NAMESPACE@StructureEditorData@@2V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@B
    MCAPI static std::string const DEFAULT_STRUCTURE_NAMESPACE;

    // symbol: ?MAX_STRUCTURE_OFFSET@StructureEditorData@@2VBlockPos@@B
    MCAPI static class BlockPos const MAX_STRUCTURE_OFFSET;

    // symbol: ?MIN_STRUCTURE_OFFSET@StructureEditorData@@2VBlockPos@@B
    MCAPI static class BlockPos const MIN_STRUCTURE_OFFSET;

    // symbol: ?MIN_STRUCTURE_SIZE@StructureEditorData@@2VBlockPos@@B
    MCAPI static class BlockPos const MIN_STRUCTURE_SIZE;

    // symbol: ?NAMESPACE_DELIMITER@StructureEditorData@@2DB
    MCAPI static char const NAMESPACE_DELIMITER;

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?DEFAULT_STRUCTURE_TYPE@StructureEditorData@@0W4StructureBlockType@@B
    MCAPI static ::StructureBlockType const DEFAULT_STRUCTURE_TYPE;

    // NOLINTEND
};
