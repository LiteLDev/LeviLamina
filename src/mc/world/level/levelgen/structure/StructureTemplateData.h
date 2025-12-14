#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/BlockPos.h"
#include "mc/world/level/chunk/NeighborAwareBlockUpgradeVersionType.h"
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
    ::ll::TypedStorage<4, 4, int>                                    mFormatVersion;
    ::ll::TypedStorage<4, 4, ::NeighborAwareBlockUpgradeVersionType> mNeighborAwareBlockUpgradeVersion;
    ::ll::TypedStorage<4, 12, ::BlockPos>                            mSize;
    ::ll::TypedStorage<4, 12, ::BlockPos>                            mStructureWorldOrigin;
    ::ll::TypedStorage<8, 24, ::std::vector<int>>                    mBlockIndices;
    ::ll::TypedStorage<8, 24, ::std::vector<int>>                    mExtraBlockIndices;
    ::ll::TypedStorage<8, 64, ::std::unordered_map<::std::string, ::StructureBlockPalette>> mPalettes;
    ::ll::TypedStorage<8, 24, ::std::vector<::std::unique_ptr<::CompoundTag>>>              mEntityData;
    // NOLINTEND

public:
    // prevent constructor by default
    StructureTemplateData& operator=(StructureTemplateData const&);
    StructureTemplateData(StructureTemplateData const&);

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~StructureTemplateData();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI StructureTemplateData();

    MCAPI StructureTemplateData(::StructureTemplateData&&);

    MCAPI ::StructureLoadResult _parseBlockIndices(::CompoundTag const& structureTag);

    MCAPI ::StructureLoadResult _parseEntities(::CompoundTag const& structureTag);

    MCAPI ::StructureLoadResult _parseNeighborAwareBlockUpgradeVersion(::CompoundTag const& tag);

    MCAPI ::StructureLoadResult _parsePalettes(::CompoundTag const& structureTag);

    MCAPI ::StructureLoadResult _parseSize(::CompoundTag const& tag);

    MCAPI ::StructureLoadResult _parseStructureWorldOrigin(::CompoundTag const& tag);

    MCAPI void _saveBlockIndices(::CompoundTag& structureTag) const;

    MCAPI void _saveEntities(::CompoundTag& structureTag) const;

    MCAPI void _savePalettes(::CompoundTag& structureTag) const;

    MCAPI ::StructureBlockPalette const* getPalette(::std::string const& name) const;

    MCAPI bool load(::CompoundTag const& tag);

    MCAPI ::StructureTemplateData& operator=(::StructureTemplateData&&);

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

    MCAPI void* $ctor(::StructureTemplateData&&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
