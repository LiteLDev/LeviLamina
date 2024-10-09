#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/util/AnimationMode.h"
#include "mc/util/Mirror.h"
#include "mc/util/Rotation.h"
#include "mc/world/level/block/StructureBlockType.h"
#include "mc/world/level/levelgen/structure/StructureRedstoneSaveMode.h"

class StructureEditorData {
public:
    // prevent constructor by default
    StructureEditorData& operator=(StructureEditorData const&);

public:
    // NOLINTBEGIN
    MCAPI StructureEditorData();

    MCAPI StructureEditorData(class StructureEditorData const&);

    MCAPI std::string getAnimationModeAsString() const;

    MCAPI float getAnimationSeconds() const;

    MCAPI bool getIgnoreBlocks() const;

    MCAPI bool getIgnoreEntities() const;

    MCAPI bool getIncludePlayers() const;

    MCAPI uint getIntegritySeed() const;

    MCAPI float getIntegrityValue() const;

    MCAPI bool getIsWaterLogged() const;

    MCAPI ::Mirror getMirror() const;

    MCAPI class Vec3 const& getPivot() const;

    MCAPI ::StructureRedstoneSaveMode getRedstoneSaveMode() const;

    MCAPI ::Rotation getRotation() const;

    MCAPI bool getShowBoundingBox() const;

    MCAPI ::StructureBlockType getStructureBlockType() const;

    MCAPI std::string const& getStructureName() const;

    MCAPI class BlockPos const& getStructureOffset() const;

    MCAPI class StructureSettings const& getStructureSettings() const;

    MCAPI class BlockPos const& getStructureSize() const;

    MCAPI void load(class CompoundTag const& base, class DataLoadHelper& dataLoadHelper);

    MCAPI void save(class CompoundTag& tag) const;

    MCAPI void setAllowNonTickingPlayerAndTickingAreaChunks(bool allowNonTickingPlayerAndTickingAreaChunks);

    MCAPI void setAnimationMode(::AnimationMode animationMode);

    MCAPI void setAnimationSeconds(float animationSeconds);

    MCAPI void setAnimationTicks(uint animationTicks);

    MCAPI void setIgnoreBlocks(bool ignoreBlocks);

    MCAPI void setIgnoreEntities(bool ignoreEntities);

    MCAPI void setIntegritySeed(uint integritySeed);

    MCAPI void setIntegrityValue(float integrityValue);

    MCAPI void setIsWaterLogged(bool waterLogged);

    MCAPI void setLastTouchedByPlayerID(struct ActorUniqueID lastTouchedByPlayerID);

    MCAPI void setMirror(::Mirror mirror);

    MCAPI void setRotation(::Rotation rotation);

    MCAPI void setShowBoundingBox(bool showBoundingBox);

    MCAPI void setStructureBlockType(::StructureBlockType structureBlockType);

    MCAPI void setStructureName(std::string_view name);

    MCAPI void setStructureOffset(class BlockPos const& offset);

    MCAPI void setStructureSize(class BlockPos const& size);

    MCAPI ~StructureEditorData();

    MCAPI static class BlockPos getOrientedBounds(class BlockPos const& size, ::Rotation rotation);

    MCAPI static std::string const DEFAULT_EXPORT_NAME;

    MCAPI static std::string const DEFAULT_STRUCTURE_NAMESPACE;

    MCAPI static class BlockPos const MAX_STRUCTURE_OFFSET;

    MCAPI static class BlockPos const MIN_STRUCTURE_OFFSET;

    MCAPI static class BlockPos const MIN_STRUCTURE_SIZE;

    MCAPI static char const NAMESPACE_DELIMITER;

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI static ::StructureBlockType const DEFAULT_STRUCTURE_TYPE;

    // NOLINTEND
};
