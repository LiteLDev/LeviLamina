#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/util/AnimationMode.h"
#include "mc/util/Mirror.h"
#include "mc/util/Rotation.h"

class StructureSettings {
public:
    // prevent constructor by default
    StructureSettings(StructureSettings const&);

public:
    // NOLINTBEGIN
    MCAPI StructureSettings();

    MCAPI StructureSettings(class StructureSettings&&);

    MCAPI ::AnimationMode getAnimationMode() const;

    MCAPI float getAnimationSeconds() const;

    MCAPI uint getAnimationTicks() const;

    MCAPI bool getIgnoreBlocks() const;

    MCAPI bool getIgnoreEntities() const;

    MCAPI uint getIntegritySeed() const;

    MCAPI float getIntegrityValue() const;

    MCAPI bool getIsWaterLogged() const;

    MCAPI ::Mirror getMirror() const;

    MCAPI class Vec3 const& getPivot() const;

    MCAPI ::Rotation getRotation() const;

    MCAPI class BlockPos const& getStructureOffset() const;

    MCAPI class BlockPos const& getStructureSize() const;

    MCAPI bool isAnimated() const;

    MCAPI class StructureSettings& operator=(class StructureSettings&&);

    MCAPI class StructureSettings& operator=(class StructureSettings const&);

    MCAPI void setAllowNonTickingPlayerAndTickingAreaChunks(bool allowNonTickingPlayerAndTickingAreaChunks);

    MCAPI void setAnimationMode(::AnimationMode animationMode);

    MCAPI void setAnimationSeconds(float seconds);

    MCAPI void setAnimationTicks(uint ticks);

    MCAPI void setIgnoreBlocks(bool ignoreBlocks);

    MCAPI void setIgnoreEntities(bool ignoreEntities);

    MCAPI void setIgnoreJigsawBlocks(bool ignoreJigsawBlocks);

    MCAPI void setIntegritySeed(uint integritySeed);

    MCAPI void setIntegrityValue(float integrityValue);

    MCAPI void setIsWaterLogged(bool waterLogged);

    MCAPI void setLastTouchedByPlayerID(struct ActorUniqueID lastTouchedByPlayerID);

    MCAPI void setMirror(::Mirror mirror);

    MCAPI void setPivotFromStructureSize();

    MCAPI void setReloadActorEquipment(bool reloadActorEquipment);

    MCAPI void setRotation(::Rotation rotation);

    MCAPI void setStructureOffset(class BlockPos const& offset);

    MCAPI void setStructureSize(class BlockPos const& size);

    MCAPI bool shouldAllowNonTickingPlayerAndTickingAreaChunks() const;

    MCAPI ~StructureSettings();

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    template <class... Args>
    auto* ctor$(Args... args) {
        return std::construct_at(this, std::forward<Args>(args)...);
    }

    MCAPI void dtor$();

    MCAPI static class BlockPos const& DEFAULT_STRUCTURE_OFFSET();

    MCAPI static class BlockPos const& DEFAULT_STRUCTURE_SIZE();

    // NOLINTEND
};
