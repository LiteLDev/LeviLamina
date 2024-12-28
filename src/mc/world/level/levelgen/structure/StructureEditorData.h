#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/util/AnimationMode.h"
#include "mc/util/Mirror.h"
#include "mc/util/Rotation.h"
#include "mc/world/level/block/StructureBlockType.h"
#include "mc/world/level/levelgen/structure/StructureRedstoneSaveMode.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
class CompoundTag;
class DataLoadHelper;
class StructureSettings;
class Vec3;
struct ActorUniqueID;
// clang-format on

class StructureEditorData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::std::string>              mStructureName;
    ::ll::TypedStorage<8, 32, ::std::string>              mDataField;
    ::ll::TypedStorage<1, 1, bool>                        mIncludePlayers;
    ::ll::TypedStorage<1, 1, bool>                        mShowBoundingBox;
    ::ll::TypedStorage<1, 1, ::StructureRedstoneSaveMode> mRedstoneSaveMode;
    ::ll::TypedStorage<4, 4, ::StructureBlockType>        mType;
    ::ll::TypedStorage<8, 104, ::StructureSettings>       mSettings;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI StructureEditorData();

    MCAPI StructureEditorData(::StructureEditorData const&);

    MCAPI ::std::string getAnimationModeAsString() const;

    MCAPI float getAnimationSeconds() const;

    MCAPI bool getIgnoreBlocks() const;

    MCAPI bool getIgnoreEntities() const;

    MCAPI bool getIncludePlayers() const;

    MCAPI uint getIntegritySeed() const;

    MCAPI float getIntegrityValue() const;

    MCAPI bool getIsWaterLogged() const;

    MCAPI ::Mirror getMirror() const;

    MCAPI ::Vec3 const& getPivot() const;

    MCAPI ::StructureRedstoneSaveMode getRedstoneSaveMode() const;

    MCAPI ::Rotation getRotation() const;

    MCAPI bool getShowBoundingBox() const;

    MCAPI ::StructureBlockType getStructureBlockType() const;

    MCAPI ::std::string const& getStructureName() const;

    MCAPI ::BlockPos const& getStructureOffset() const;

    MCAPI ::StructureSettings const& getStructureSettings() const;

    MCAPI ::BlockPos const& getStructureSize() const;

    MCAPI void load(::CompoundTag const& base, ::DataLoadHelper& dataLoadHelper);

    MCAPI ::StructureEditorData& operator=(::StructureEditorData const&);

    MCAPI void save(::CompoundTag& tag) const;

    MCAPI void setAllowNonTickingPlayerAndTickingAreaChunks(bool allowNonTickingPlayerAndTickingAreaChunks);

    MCAPI void setAnimationMode(::AnimationMode animationMode);

    MCAPI void setAnimationSeconds(float animationSeconds);

    MCAPI void setAnimationTicks(uint animationTicks);

    MCAPI void setIgnoreBlocks(bool ignoreBlocks);

    MCAPI void setIgnoreEntities(bool ignoreEntities);

    MCAPI void setIntegritySeed(uint integritySeed);

    MCAPI void setIntegrityValue(float integrityValue);

    MCAPI void setIsWaterLogged(bool waterLogged);

    MCAPI void setLastTouchedByPlayerID(::ActorUniqueID lastTouchedByPlayerID);

    MCAPI void setMirror(::Mirror mirror);

    MCAPI void setRotation(::Rotation rotation);

    MCAPI void setShowBoundingBox(bool showBoundingBox);

    MCAPI void setStructureBlockType(::StructureBlockType structureBlockType);

    MCAPI void setStructureName(::std::string_view name);

    MCAPI void setStructureOffset(::BlockPos const& offset);

    MCAPI void setStructureSize(::BlockPos const& size);

    MCAPI ~StructureEditorData();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::BlockPos getOrientedBounds(::BlockPos const& size, ::Rotation rotation);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::std::string const& DEFAULT_EXPORT_NAME();

    MCAPI static ::std::string const& DEFAULT_STRUCTURE_NAMESPACE();

    MCAPI static ::StructureBlockType const& DEFAULT_STRUCTURE_TYPE();

    MCAPI static ::BlockPos const& MAX_STRUCTURE_OFFSET();

    MCAPI static ::BlockPos const& MIN_STRUCTURE_OFFSET();

    MCAPI static ::BlockPos const& MIN_STRUCTURE_SIZE();

    MCAPI static char const& NAMESPACE_DELIMITER();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();

    MCAPI void* $ctor(::StructureEditorData const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
