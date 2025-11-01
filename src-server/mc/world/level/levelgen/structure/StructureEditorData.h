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

public:
    // prevent constructor by default
    StructureEditorData& operator=(StructureEditorData const&);

public:
    // member functions
    // NOLINTBEGIN
    MCAPI StructureEditorData();

    MCAPI StructureEditorData(::StructureEditorData&&);

    MCAPI StructureEditorData(::StructureEditorData const&);

    MCAPI void load(::CompoundTag const& base, ::DataLoadHelper& dataLoadHelper);

    MCAPI void save(::CompoundTag& tag) const;

    MCAPI void setStructureSize(::BlockPos const& size);

    MCAPI ~StructureEditorData();
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
