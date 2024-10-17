#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/nbt/CompoundTag.h"

// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/world/level/levelgen/structure/StructureBlockPaletteLoadResult.h"

class BlockPalette;

class StructureBlockPalette {
public:
    // StructureBlockPalette inner types declare
    // clang-format off
    struct BlockPositionData;
    // clang-format on

    struct TickingQueueData {
    public:
        int mTickDelay;
    };

    // StructureBlockPalette inner types define
    struct BlockPositionData {
    public:
        std::unique_ptr<CompoundTag>                         mBlockEntityData;
        std::vector<StructureBlockPalette::TickingQueueData> mTickData;

        // prevent constructor by default
        BlockPositionData& operator=(BlockPositionData const&);
        BlockPositionData();

    public:
        // NOLINTBEGIN
        MCAPI BlockPositionData(struct StructureBlockPalette::BlockPositionData const& rhs);

        MCAPI bool isValid() const;

        MCAPI ~BlockPositionData();

        // NOLINTEND

        // thunks
    public:
        // NOLINTBEGIN
        MCAPI void* ctor$(struct StructureBlockPalette::BlockPositionData const& rhs);

        MCAPI void dtor$();

        // NOLINTEND
    };

public:
    std::vector<std::unique_ptr<CompoundTag>>                            mStructurePaletteIdToSerializationId;
    std::unordered_map<uint64, StructureBlockPalette::BlockPositionData> mBlockPositionData;

    // prevent constructor by default
    StructureBlockPalette& operator=(StructureBlockPalette const&);
    StructureBlockPalette(StructureBlockPalette const&);

public:
    // NOLINTBEGIN
    MCAPI StructureBlockPalette();

    MCAPI StructureBlockPalette(class StructureBlockPalette&&);

    MCAPI void addBlockPositionData(uint64 id, struct StructureBlockPalette::BlockPositionData blockPositionData);

    MCAPI uint64 addMapping(std::unique_ptr<class CompoundTag> serializationId);

    MCAPI std::unordered_map<uint64, struct StructureBlockPalette::BlockPositionData> const&
          getAllBlockPositionData() const;

    MCAPI class Block const& getBlock(
        class BlockPalette const&                                       blockPalette,
        uint64                                                          paletteId,
        class Bedrock::NonOwnerPointer<class IUnknownBlockTypeRegistry> unknownBlockRegistry
    ) const;

    MCAPI struct StructureBlockPalette::BlockPositionData const* getBlockPositionData(uint64 blockIndex) const;

    MCAPI uint64 getSize() const;

    MCAPI bool load(class CompoundTag const& tag, int formatVersion);

    MCAPI void removeBlockPositionData(uint64 id);

    MCAPI std::unique_ptr<class CompoundTag> save() const;

    MCAPI class Block const* tryGetBlock(
        uint64                                                          paletteId,
        class Bedrock::NonOwnerPointer<class IUnknownBlockTypeRegistry> unknownBlockRegistry
    ) const;

    MCAPI ~StructureBlockPalette();

    // NOLINTEND

    // protected:
    // NOLINTBEGIN
    MCAPI ::StructureBlockPaletteLoadResult _parseBlockPalette(class CompoundTag const& tag);

    MCAPI ::StructureBlockPaletteLoadResult _parseBlockPositionData(class CompoundTag const& tag, int index);

    MCAPI ::StructureBlockPaletteLoadResult _parseBlockPositionDataList(class CompoundTag const& tag);

    MCAPI void _saveBlockPositionDataList(class CompoundTag& tag) const;

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI void _contentErrorMissingField(std::string const& tagName) const;

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI void* ctor$();

    MCAPI void* ctor$(class StructureBlockPalette&&);

    MCAPI void dtor$();

    // NOLINTEND
};
