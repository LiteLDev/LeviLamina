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
    MCNAPI ::StructureLoadResult _parseBlockIndices(::CompoundTag const& structureTag);

    MCNAPI ::StructureLoadResult _parseEntities(::CompoundTag const& structureTag);

    MCNAPI ::StructureLoadResult _parsePalettes(::CompoundTag const& structureTag);

    MCNAPI void _saveSize(::CompoundTag& tag) const;

    MCNAPI bool _saveStructureTag(::CompoundTag& tag, ::StructureCompression compression) const;

    MCNAPI void _saveStructureWorldOrigin(::CompoundTag& tag) const;

    MCNAPI ::StructureLoadResult _validateSizeAndBlockIndicesSize() const;

    MCNAPI void clear();

    MCAPI ::StructureBlockPalette const* getPalette(::std::string const& name) const;

    MCNAPI bool load(::CompoundTag const& tag);

    MCNAPI ::StructureTemplateData& operator=(::StructureTemplateData&&);

    MCNAPI bool operator==(::StructureTemplateData const& other) const;

    MCNAPI ::std::unique_ptr<::CompoundTag> save(::StructureCompression compression) const;

    MCNAPI void setBlockIndices(::std::vector<int> blockIndices);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::CompoundTag const* _parseStructureTag(
        ::CompoundTag const&              tag,
        ::StructureCompression            compression,
        ::std::unique_ptr<::CompoundTag>& decompressedStructure
    );

    MCNAPI static bool _readBlockIndexArray(::Tag const& tag, int formatVersion, ::std::vector<int>& blockIndices);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::std::string const& DEFAULT_PALETTE_NAME();

    MCNAPI static int const& NO_BLOCK_INDEX_VALUE();
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
