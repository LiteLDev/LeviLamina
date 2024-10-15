#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/util/Mirror.h"
#include "mc/util/Rotation.h"

class LegacyStructureTemplate {
public:
    // prevent constructor by default
    LegacyStructureTemplate& operator=(LegacyStructureTemplate const&);
    LegacyStructureTemplate(LegacyStructureTemplate const&);

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual std::unordered_map<class BlockPos, std::string>
    getMarkers(class BlockPos const& position, class LegacyStructureSettings& settings) const;

    // vIndex: 1
    virtual void placeInWorld(
        class BlockSource&             region,
        class BlockPos const&          pos,
        class LegacyStructureSettings& settings,
        class Random&                  random
    ) const;

    // vIndex: 2
    virtual ~LegacyStructureTemplate() = default;

    MCAPI LegacyStructureTemplate();

    MCAPI class BlockPos calculateConnectedPosition(
        class LegacyStructureSettings const& settings1,
        class BlockPos const&                connection1,
        class LegacyStructureSettings const& settings2,
        class BlockPos const&                connection2
    ) const;

    MCAPI void
    finalizeBlockRules(class BlockSource& region, class BlockPos const& position, class LegacyStructureSettings& settings, class Random&)
        const;

    MCAPI std::vector<class JigsawStructureBlockInfo> getJigsawMarkers() const;

    MCAPI class BlockPos getSize(::Rotation rotation) const;

    MCAPI void load(class CompoundTag const& tag);

    MCAPI void placeInWorldChunk(
        class BlockSource&             region,
        class BlockPos const&          position,
        class LegacyStructureSettings& settings,
        class Random&                  random
    );

    MCAPI static class Block const*
    _mapPropertyToExtraBlock(std::string const& propertyString, std::string const& valueString);

    MCAPI static class Block const* _mapToBlock(std::string const& blockName);

    MCAPI static class Block const& _mapToData(class Block const& curr, class LegacyStructureSettings const& settings);

    MCAPI static class Block const*
    _mapToProperty(std::string const& propertyString, std::string const& valueString, class Block const& block);

    MCAPI static class BlockPos getZeroPositionWithTransform(
        class BlockPos const& zeroPos,
        ::Mirror              mirror,
        ::Rotation            rotation,
        int                   sizeX,
        int                   sizeZ
    );

    MCAPI static class BlockPos transform(class BlockPos pos, ::Mirror mirror, ::Rotation rotation);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI static void _fixItemStack(class CompoundTag& itemTag, int dataVersion);

    MCAPI static void _mapPropertiesToTags(class CompoundTag& originalTag, class CompoundTag const& paletteTag);

    MCAPI static void _mapPropertyToTag(
        class CompoundTag& originalTag,
        std::string const& propertyString,
        std::string const& valueString
    );

    MCAPI static std::unique_ptr<class CompoundTag>
    _mapTag(std::unique_ptr<class CompoundTag> originalTag, std::string const& javaBlockName, int dataVersion);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** $vftable();

    MCAPI void* ctor$();

    MCAPI std::unordered_map<class BlockPos, std::string>
          getMarkers$(class BlockPos const& position, class LegacyStructureSettings& settings) const;

    MCAPI void placeInWorld$(
        class BlockSource&             region,
        class BlockPos const&          pos,
        class LegacyStructureSettings& settings,
        class Random&                  random
    ) const;

    MCAPI static std::string const& AUTHOR_TAG();

    MCAPI static std::string const& BLOCKS_TAG();

    MCAPI static std::string const& BLOCK_TAG_NBT();

    MCAPI static std::string const& BLOCK_TAG_POS();

    MCAPI static std::string const& BLOCK_TAG_STATE();

    MCAPI static int const& CHUNK_SIZE();

    MCAPI static std::string const& DATA_VERSION_TAG();

    MCAPI static std::string const& ENTITIES_TAG();

    MCAPI static std::string const& ENTITY_TAG_BLOCKPOS();

    MCAPI static std::string const& ENTITY_TAG_NBT();

    MCAPI static std::string const& ENTITY_TAG_POS();

    MCAPI static std::string const& MINECRAFT_PREFIX();

    MCAPI static std::string const& PALETTE_TAG();

    MCAPI static std::string const& SIZE_TAG();

    MCAPI static int const& STRUCTURE_VERSION();

    MCAPI static std::string const& VERSION_TAG();

    MCAPI static class LegacyStructureSettings const& defaultSettings();

    // NOLINTEND
};
