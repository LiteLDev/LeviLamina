#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/BlockPos.h"
#include "mc/world/level/chunk/NeighborAwareBlockUpgradeVersionType.h"
#include "mc/world/level/levelgen/structure/StructureCompression.h"
#include "mc/world/level/levelgen/structure/StructureLoadResult.h"

// auto generated forward declare list
// clang-format off
class CompoundTag;
class StructureBlockPalette;
class Tag;
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
    ::ll::TypedStorage<8, 32, ::std::optional<::std::vector<int>>>   mExtraBlockIndices;
    ::ll::TypedStorage<8, 64, ::std::unordered_map<::std::string, ::StructureBlockPalette>> mPalettes;
    ::ll::TypedStorage<8, 24, ::std::vector<::std::unique_ptr<::CompoundTag>>>              mEntityData;
    // NOLINTEND

public:
    // prevent constructor by default
    StructureTemplateData& operator=(StructureTemplateData const&);
    StructureTemplateData(StructureTemplateData const&);
    StructureTemplateData();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~StructureTemplateData();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::StructureLoadResult _parseBlockIndices(::CompoundTag const& structureTag);

    MCAPI ::StructureLoadResult _parseEntities(::CompoundTag const& structureTag);

    MCAPI ::StructureLoadResult _parsePalettes(::CompoundTag const& structureTag);

    MCAPI void _saveSize(::CompoundTag& tag) const;

    MCAPI bool _saveStructureTag(::CompoundTag& tag, ::StructureCompression compression) const;

    MCAPI void _saveStructureWorldOrigin(::CompoundTag& tag) const;

    MCAPI ::StructureLoadResult _validateSizeAndBlockIndicesSize() const;

    MCAPI void clear();

    MCAPI ::StructureBlockPalette const* getPalette(::std::string const& name) const;

    MCAPI bool load(::CompoundTag const& tag);

    MCAPI ::StructureTemplateData& operator=(::StructureTemplateData&&);

    MCAPI bool operator==(::StructureTemplateData const& other) const;

    MCAPI ::std::unique_ptr<::CompoundTag> save(::StructureCompression compression) const;

    MCAPI void setBlockIndices(::std::vector<int> blockIndices);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::CompoundTag const* _parseStructureTag(
        ::CompoundTag const&              tag,
        ::StructureCompression            compression,
        ::std::unique_ptr<::CompoundTag>& decompressedStructure
    );

    MCAPI static bool _readBlockIndexArray(::Tag const& tag, int formatVersion, ::std::vector<int>& blockIndices);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::std::string const& DEFAULT_PALETTE_NAME();

    MCAPI static int const& NO_BLOCK_INDEX_VALUE();
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
