#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/safety/RedactableString.h"
#include "mc/world/level/block/StructureBlockType.h"
#include "mc/world/level/levelgen/structure/StructureRedstoneSaveMode.h"
#include "mc/world/level/levelgen/structure/StructureSettings.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
class CompoundTag;
class DataLoadHelper;
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

#ifdef LL_PLAT_S
public:
    // prevent constructor by default
    StructureEditorData& operator=(StructureEditorData const&);

#else // LL_PLAT_C
#endif
public:
    // member functions
    // NOLINTBEGIN
    MCAPI StructureEditorData();

    MCAPI StructureEditorData(::StructureEditorData&&);

    MCAPI StructureEditorData(::StructureEditorData const&);

    MCAPI void load(::CompoundTag const& base, ::DataLoadHelper& dataLoadHelper);

#ifdef LL_PLAT_C
    MCAPI ::StructureEditorData& operator=(::StructureEditorData const&);
#endif

    MCAPI void save(::CompoundTag& tag) const;

#ifdef LL_PLAT_C
    MCAPI void setStructureName(::Bedrock::Safety::RedactableString const& name);

    MCAPI void setStructureSize(::BlockPos const& size);

    MCAPI void validateSize(::BlockPos const& structurePosition, short minHeight, short maxHeight);
#endif

    MCAPI ~StructureEditorData();
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::std::string const& DEFAULT_EXPORT_NAME();

    MCAPI static ::std::string const& DEFAULT_STRUCTURE_NAMESPACE();

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
