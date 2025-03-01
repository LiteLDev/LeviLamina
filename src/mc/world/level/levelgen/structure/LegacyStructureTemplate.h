#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/structure/ILegacyStructureTemplate.h"
#include "mc/world/level/levelgen/structure/IStructureTemplate.h"

// auto generated forward declare list
// clang-format off
class Block;
class BlockPos;
class BlockSource;
class CompoundTag;
class JigsawStructureBlockInfo;
class LegacyStructureActorInfo;
class LegacyStructureBlockInfo;
class LegacyStructureBlockPalette;
class LegacyStructureSettings;
class Random;
namespace br::worldgen { struct StructureTemplateBlockPalette; }
// clang-format on

class LegacyStructureTemplate : public ::ILegacyStructureTemplate, public ::IStructureTemplate {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::std::string>                             mAuthor;
    ::ll::TypedStorage<4, 12, ::BlockPos>                                mSize;
    ::ll::TypedStorage<8, 64, ::LegacyStructureBlockPalette>             mPalette;
    ::ll::TypedStorage<8, 64, ::LegacyStructureBlockPalette>             mExtraBlockPalette;
    ::ll::TypedStorage<8, 24, ::std::vector<::LegacyStructureBlockInfo>> mBlockInfo;
    ::ll::TypedStorage<8, 24, ::std::vector<::LegacyStructureActorInfo>> mEntityInfo;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~LegacyStructureTemplate() /*override*/;

    // vIndex: 0
    virtual ::std::unordered_map<::BlockPos, ::std::string>
    getMarkers(::BlockPos const& position, ::LegacyStructureSettings& settings) const /*override*/;

    // vIndex: 1
    virtual void
    placeInWorld(::BlockSource& region, ::BlockPos const& pos, ::LegacyStructureSettings& settings, ::Random& random)
        const /*override*/;

    // vIndex: 2
    virtual ::BlockPos rawSize() const /*override*/;

    // vIndex: 1
    virtual ::br::worldgen::StructureTemplateBlockPalette randomPalette(::BlockPos) const /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI LegacyStructureTemplate();

    MCAPI ::BlockPos calculateConnectedPosition(
        ::LegacyStructureSettings const& settings1,
        ::BlockPos const&                connection1,
        ::LegacyStructureSettings const& settings2,
        ::BlockPos const&                connection2
    ) const;

    MCAPI ::std::vector<::JigsawStructureBlockInfo> getJigsawMarkers() const;

    MCAPI void load(::CompoundTag const& tag);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void _fixItemStack(::CompoundTag& itemTag, int dataVersion);

    MCAPI static void _mapPropertiesToTags(::CompoundTag& originalTag, ::CompoundTag const& paletteTag);

    MCAPI static void _mapPropertyToTag(
        ::CompoundTag&       originalTag,
        ::std::string const& propertyString,
        ::std::string const& valueString
    );

    MCAPI static ::std::unique_ptr<::CompoundTag> _mapTag(
        ::std::unique_ptr<::CompoundTag> originalTag,
        ::std::string const&             javaBlockName,
        int                              dataVersion,
        ::Block const*&                  block
    );

    MCAPI static ::Block const* _mapToBlock(::std::string const& blockName);

    MCAPI static ::Block const& _mapToData(::Block const& curr, ::LegacyStructureSettings const& settings);

    MCAPI static ::Block const*
    _mapToProperty(::std::string const& propertyString, ::std::string const& valueString, ::Block const& block);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::std::string const& AUTHOR_TAG();

    MCAPI static ::std::string const& BLOCKS_TAG();

    MCAPI static ::std::string const& BLOCK_TAG_NBT();

    MCAPI static ::std::string const& BLOCK_TAG_POS();

    MCAPI static ::std::string const& BLOCK_TAG_STATE();

    MCAPI static int const& CHUNK_SIZE();

    MCAPI static ::std::string const& DATA_VERSION_TAG();

    MCAPI static ::std::string const& ENTITIES_TAG();

    MCAPI static ::std::string const& ENTITY_TAG_BLOCKPOS();

    MCAPI static ::std::string const& ENTITY_TAG_NBT();

    MCAPI static ::std::string const& ENTITY_TAG_POS();

    MCAPI static ::std::string const& MINECRAFT_PREFIX();

    MCAPI static ::std::string const& PALETTE_TAG();

    MCAPI static ::std::string const& SIZE_TAG();

    MCAPI static ::std::string const& VERSION_TAG();
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
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::std::unordered_map<::BlockPos, ::std::string>
    $getMarkers(::BlockPos const& position, ::LegacyStructureSettings& settings) const;

    MCAPI void
    $placeInWorld(::BlockSource& region, ::BlockPos const& pos, ::LegacyStructureSettings& settings, ::Random& random)
        const;

    MCAPI ::BlockPos $rawSize() const;

    MCAPI ::br::worldgen::StructureTemplateBlockPalette $randomPalette(::BlockPos) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftableForILegacyStructureTemplate();

    MCAPI static void** $vftableForIStructureTemplate();
    // NOLINTEND
};
