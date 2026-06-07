#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/world/level/levelgen/structure/StructureBlockPaletteLoadResult.h"

// auto generated forward declare list
// clang-format off
class Block;
class BlockPalette;
class CompoundTag;
class IUnknownBlockTypeRegistry;
// clang-format on

class StructureBlockPalette {
public:
    // StructureBlockPalette inner types declare
    // clang-format off
    struct TickingQueueData;
    struct BlockPositionData;
    // clang-format on

    // StructureBlockPalette inner types define
    struct TickingQueueData {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<4, 4, int> mTickDelay;
        // NOLINTEND
    };

    struct BlockPositionData {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 8, ::std::unique_ptr<::CompoundTag>>                          mBlockEntityData;
        ::ll::TypedStorage<8, 24, ::std::vector<::StructureBlockPalette::TickingQueueData>> mTickData;
        // NOLINTEND

    public:
        // prevent constructor by default
        BlockPositionData& operator=(BlockPositionData const&);
        BlockPositionData();

    public:
        // member functions
        // NOLINTBEGIN
        MCAPI BlockPositionData(::StructureBlockPalette::BlockPositionData const& rhs);

        MCAPI bool isValid() const;

        MCAPI ~BlockPositionData();
        // NOLINTEND

    public:
        // constructor thunks
        // NOLINTBEGIN
        MCAPI void* $ctor(::StructureBlockPalette::BlockPositionData const& rhs);
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCFOLD void $dtor();
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::std::vector<::std::unique_ptr<::CompoundTag>>> mStructurePaletteIdToSerializationId;
    ::ll::TypedStorage<8, 64, ::std::unordered_map<uint64, ::StructureBlockPalette::BlockPositionData>>
        mBlockPositionData;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::StructureBlockPaletteLoadResult _parseBlockPalette(::CompoundTag const& tag);

    MCAPI ::StructureBlockPaletteLoadResult _parseBlockPositionData(::CompoundTag const& tag, int index);

    MCAPI ::StructureBlockPaletteLoadResult _parseBlockPositionDataList(::CompoundTag const& tag);

    MCAPI void _saveBlockPalette(::CompoundTag& tag) const;

    MCAPI void _saveBlockPositionDataList(::CompoundTag& tag) const;

    MCAPI void addBlockPositionData(uint64 id, ::StructureBlockPalette::BlockPositionData blockPositionData);

    MCAPI uint64 addMapping(::std::unique_ptr<::CompoundTag> serializationId);

    MCFOLD ::std::unordered_map<uint64, ::StructureBlockPalette::BlockPositionData> const&
    getAllBlockPositionData() const;

    MCAPI ::Block const& getBlock(
        ::BlockPalette const&                                   blockPalette,
        uint64                                                  paletteId,
        ::Bedrock::NonOwnerPointer<::IUnknownBlockTypeRegistry> unknownBlockRegistry
    ) const;

    MCAPI ::StructureBlockPalette::BlockPositionData const* getBlockPositionData(uint64 blockIndex) const;

    MCFOLD uint64 getSize() const;

    MCAPI bool load(::CompoundTag const& tag, int formatVersion);

    MCAPI void removeBlockPositionData(uint64 id);

    MCAPI ::std::unique_ptr<::CompoundTag> save() const;

    MCAPI ::Block const*
    tryGetBlock(uint64 paletteId, ::Bedrock::NonOwnerPointer<::IUnknownBlockTypeRegistry> unknownBlockRegistry) const;

    MCAPI ~StructureBlockPalette();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
