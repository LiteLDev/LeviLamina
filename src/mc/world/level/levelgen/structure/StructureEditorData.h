#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/safety/RedactableString.h"
#include "mc/util/AnimationMode.h"
#include "mc/util/Mirror.h"
#include "mc/util/Rotation.h"
#include "mc/world/level/block/StructureBlockType.h"
#include "mc/world/level/levelgen/structure/StructureRedstoneSaveMode.h"
#include "mc/world/level/levelgen/structure/StructureSettings.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
class CompoundTag;
class DataLoadHelper;
class Vec3;
struct ActorUniqueID;
// clang-format on

class StructureEditorData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 72, ::Bedrock::Safety::RedactableString> mStructureName;
    ::ll::TypedStorage<8, 32, ::std::string>                       mDataField;
    ::ll::TypedStorage<1, 1, bool>                                 mIncludePlayers;
    ::ll::TypedStorage<1, 1, bool>                                 mShowBoundingBox;
    ::ll::TypedStorage<1, 1, ::StructureRedstoneSaveMode>          mRedstoneSaveMode;
    ::ll::TypedStorage<4, 4, ::StructureBlockType>                 mType;
    ::ll::TypedStorage<8, 104, ::StructureSettings>                mSettings;
    // NOLINTEND

public:
    // prevent constructor by default
    StructureEditorData& operator=(StructureEditorData const&);

public:
    // member functions
    // NOLINTBEGIN
    MCAPI StructureEditorData();

    MCAPI StructureEditorData(::StructureEditorData&&);

    MCAPI StructureEditorData(::StructureEditorData const&);

#ifdef LL_PLAT_C
    MCAPI ::AnimationMode getAnimationMode() const;
#endif

    MCAPI ::std::string getAnimationModeAsString() const;

    MCAPI float getAnimationSeconds() const;

    MCAPI bool getIgnoreBlocks() const;

    MCAPI bool getIgnoreEntities() const;

    MCFOLD bool getIncludePlayers() const;

    MCAPI uint getIntegritySeed() const;

    MCAPI float getIntegrityValue() const;

    MCAPI bool getIsWaterLogged() const;

    MCAPI ::Mirror getMirror() const;

    MCAPI ::Vec3 const& getPivot() const;

    MCAPI ::StructureRedstoneSaveMode getRedstoneSaveMode() const;

    MCAPI ::Rotation getRotation() const;

    MCAPI bool getShowBoundingBox() const;

    MCFOLD ::StructureBlockType getStructureBlockType() const;

#ifdef LL_PLAT_C
    MCFOLD ::std::string const& getStructureDataField() const;
#endif

    MCFOLD ::Bedrock::Safety::RedactableString const& getStructureName() const;

    MCAPI ::BlockPos const& getStructureOffset() const;

    MCFOLD ::StructureSettings const& getStructureSettings() const;

    MCAPI ::BlockPos const& getStructureSize() const;

    MCAPI void load(::CompoundTag const& base, ::DataLoadHelper& dataLoadHelper);

    MCAPI ::StructureEditorData& operator=(::StructureEditorData&&);

    MCAPI void save(::CompoundTag& tag) const;

    MCAPI void setAllowNonTickingPlayerAndTickingAreaChunks(bool allowNonTickingPlayerAndTickingAreaChunks);

    MCAPI void setAnimationMode(::AnimationMode animationMode);

    MCAPI void setAnimationSeconds(float animationSeconds);

    MCAPI void setAnimationTicks(uint animationTicks);

    MCAPI void setFilteredStructureName(::std::string const& filteredName);

    MCAPI void setIgnoreBlocks(bool ignoreBlocks);

    MCAPI void setIgnoreEntities(bool ignoreEntities);

#ifdef LL_PLAT_C
    MCFOLD void setIncludePlayers(bool includePlayers);
#endif

    MCAPI void setIntegritySeed(uint integritySeed);

    MCAPI void setIntegrityValue(float integrityValue);

    MCAPI void setIsWaterLogged(bool waterLogged);

    MCAPI void setLastTouchedByPlayerID(::ActorUniqueID lastTouchedByPlayerID);

    MCAPI void setMirror(::Mirror mirror);

#ifdef LL_PLAT_C
    MCAPI void setRedstoneSaveMode(::StructureRedstoneSaveMode redstoneSaveMode);
#endif

    MCAPI void setRotation(::Rotation rotation);

    MCAPI void setShowBoundingBox(bool showBoundingBox);

    MCAPI void setStructureBlockType(::StructureBlockType structureBlockType);

#ifdef LL_PLAT_C
    MCFOLD void setStructureDataField(::std::string const& dataField);
#endif

    MCAPI void setStructureName(::Bedrock::Safety::RedactableString const& name);

    MCAPI void setStructureOffset(::BlockPos const& offset);

    MCAPI void setStructureSize(::BlockPos const& size);

    MCAPI void validateOffset(::BlockPos const& structurePosition, short minHeight, short maxHeight);

    MCAPI void validateSize(::BlockPos const& structurePosition, short minHeight, short maxHeight);

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

    MCAPI static ::BlockPos const& MIN_STRUCTURE_SIZE();

    MCAPI static char const& NAMESPACE_DELIMITER();

    MCAPI static ::std::string const& NAME_PREFIX();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();

    MCAPI void* $ctor(::StructureEditorData&&);

    MCAPI void* $ctor(::StructureEditorData const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
