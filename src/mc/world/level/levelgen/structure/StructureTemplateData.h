#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/structure/StructureLoadResult.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
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
    MCAPI StructureTemplateData();

    MCAPI ::StructureLoadResult _parseBlockIndices(::CompoundTag const& structureTag);

    MCAPI ::StructureLoadResult _parseEntities(::CompoundTag const& structureTag);

    MCAPI ::StructureLoadResult _parseFormatVersion(::CompoundTag const& tag);

    MCAPI ::StructureLoadResult _parsePalettes(::CompoundTag const& structureTag);

    MCAPI ::StructureLoadResult _parseSize(::CompoundTag const& tag);

    MCAPI void _saveBlockIndices(::CompoundTag& structureTag) const;

    MCAPI void _savePalettes(::CompoundTag& structureTag) const;

    MCAPI void _saveStructureTag(::CompoundTag& tag) const;

    MCAPI ::std::unordered_map<::std::string, ::StructureBlockPalette> const& getAllPalettes() const;

    MCAPI ::std::vector<int> const& getBlockIndices() const;

    MCAPI ::std::vector<int> const& getExtraBlockIndices() const;

    MCAPI ::StructureBlockPalette const* getPalette(::std::string const& name) const;

    MCAPI ::BlockPos const& getSize() const;

    MCAPI bool load(::CompoundTag const& tag);

    MCAPI ::std::unique_ptr<::CompoundTag> save() const;

    MCAPI void setBlockIndices(::std::vector<int> blockIndices);

    MCAPI void setExtraBlockIndices(::std::vector<int> extraBlockIndices);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::std::string const& DEFAULT_PALETTE_NAME();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
