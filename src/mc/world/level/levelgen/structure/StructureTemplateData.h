#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/BlockPos.h"
#include "mc/world/level/levelgen/structure/StructureLoadResult.h"

// auto generated forward declare list
// clang-format off
class CompoundTag;
class StructureBlockPalette;
// clang-format on

class StructureTemplateData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, int>                                                           mFormatVersion;
    ::ll::TypedStorage<4, 12, ::BlockPos>                                                   mSize;
    ::ll::TypedStorage<4, 12, ::BlockPos>                                                   mStructureWorldOrigin;
    ::ll::TypedStorage<8, 24, ::std::vector<int>>                                           mBlockIndices;
    ::ll::TypedStorage<8, 24, ::std::vector<int>>                                           mExtraBlockIndices;
    ::ll::TypedStorage<8, 64, ::std::unordered_map<::std::string, ::StructureBlockPalette>> mPalettes;
    ::ll::TypedStorage<8, 24, ::std::vector<::std::unique_ptr<::CompoundTag>>>              mEntityData;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~StructureTemplateData();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI StructureTemplateData();

    MCNAPI ::StructureLoadResult _parseBlockIndices(::CompoundTag const& structureTag);

    MCNAPI ::StructureLoadResult _parseEntities(::CompoundTag const& structureTag);

    MCNAPI ::StructureLoadResult _parseFormatVersion(::CompoundTag const& tag);

    MCNAPI ::StructureLoadResult _parsePalettes(::CompoundTag const& structureTag);

    MCNAPI ::StructureLoadResult _parseSize(::CompoundTag const& tag);

    MCNAPI ::StructureLoadResult _parseStructureWorldOrigin(::CompoundTag const& tag);

    MCNAPI void _saveBlockIndices(::CompoundTag& structureTag) const;

    MCNAPI void _saveEntities(::CompoundTag& structureTag) const;

    MCNAPI void _savePalettes(::CompoundTag& structureTag) const;

    MCNAPI ::StructureBlockPalette const* getPalette(::std::string const& name) const;

    MCNAPI bool load(::CompoundTag const& tag);

    MCNAPI ::std::unique_ptr<::CompoundTag> save() const;

    MCNAPI void setBlockIndices(::std::vector<int> blockIndices);

    MCNAPI void setExtraBlockIndices(::std::vector<int> extraBlockIndices);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::std::string const& DEFAULT_PALETTE_NAME();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
