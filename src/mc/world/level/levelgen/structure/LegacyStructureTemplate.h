#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/util/Mirror.h"
#include "mc/util/Rotation.h"
#include "mc/world/level/levelgen/structure/ILegacyStructureTemplate.h"
#include "mc/world/level/levelgen/structure/IStructureTemplate.h"

// auto generated forward declare list
// clang-format off
class Block;
class BlockPos;
class BlockSource;
class CompoundTag;
class JigsawStructureBlockInfo;
class LegacyStructureSettings;
class Random;
namespace br::worldgen { struct StructureTemplateBlockPalette; }
// clang-format on

class LegacyStructureTemplate : public ::ILegacyStructureTemplate, public ::IStructureTemplate {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnk467b1d;
    ::ll::UntypedStorage<4, 12> mUnk2575f4;
    ::ll::UntypedStorage<8, 64> mUnk5003c3;
    ::ll::UntypedStorage<8, 64> mUnk74807d;
    ::ll::UntypedStorage<8, 24> mUnk70fc6f;
    ::ll::UntypedStorage<8, 24> mUnk2fd089;
    // NOLINTEND

public:
    // prevent constructor by default
    LegacyStructureTemplate& operator=(LegacyStructureTemplate const&);
    LegacyStructureTemplate(LegacyStructureTemplate const&);

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

    MCFOLD ::IStructureTemplate const& asStructureTemplate() const;

    MCAPI ::BlockPos calculateConnectedPosition(
        ::LegacyStructureSettings const& settings1,
        ::BlockPos const&                connection1,
        ::LegacyStructureSettings const& settings2,
        ::BlockPos const&                connection2
    ) const;

    MCAPI void
    finalizeBlockRules(::BlockSource& region, ::BlockPos const& position, ::LegacyStructureSettings& settings, ::Random&)
        const;

    MCAPI ::std::vector<::JigsawStructureBlockInfo> getJigsawMarkers() const;

    MCAPI ::BlockPos getSize(::Rotation rotation) const;

    MCAPI void load(::CompoundTag const& tag);

    MCAPI void placeInWorldChunk(
        ::BlockSource&             region,
        ::BlockPos const&          position,
        ::LegacyStructureSettings& settings,
        ::Random&                  random
    );
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void _fixItemStack(::CompoundTag& itemTag, int dataVersion);

    MCAPI static void _mapPropertiesToTags(::CompoundTag& originalTag, ::CompoundTag const& paletteTag);

    MCAPI static ::Block const*
    _mapPropertyToExtraBlock(::std::string const& propertyString, ::std::string const& valueString);

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

    MCAPI static ::BlockPos
    getZeroPositionWithTransform(::BlockPos const& zeroPos, ::Mirror mirror, ::Rotation rotation, int sizeX, int sizeZ);

    MCAPI static ::BlockPos transform(::BlockPos pos, ::Mirror mirror, ::Rotation rotation);
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

    MCAPI static int const& STRUCTURE_VERSION();

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
