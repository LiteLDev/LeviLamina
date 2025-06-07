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
    struct BlockPositionData;
    struct TickingQueueData;
    // clang-format on

    // StructureBlockPalette inner types define
    struct TickingQueueData {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<4, 4> mUnk91f3e3;
        // NOLINTEND

    public:
        // prevent constructor by default
        TickingQueueData& operator=(TickingQueueData const&);
        TickingQueueData(TickingQueueData const&);
        TickingQueueData();
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
        MCNAPI BlockPositionData(::StructureBlockPalette::BlockPositionData const& rhs);

        MCNAPI ~BlockPositionData();
        // NOLINTEND

    public:
        // constructor thunks
        // NOLINTBEGIN
        MCNAPI void* $ctor(::StructureBlockPalette::BlockPositionData const& rhs);
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI void $dtor();
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
    // prevent constructor by default
    StructureBlockPalette& operator=(StructureBlockPalette const&);
    StructureBlockPalette(StructureBlockPalette const&);

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI StructureBlockPalette();

    MCNAPI StructureBlockPalette(::StructureBlockPalette&&);

    MCNAPI ::StructureBlockPaletteLoadResult _parseBlockPalette(::CompoundTag const& tag);

    MCNAPI ::StructureBlockPaletteLoadResult _parseBlockPositionData(::CompoundTag const& tag, int index);

    MCNAPI ::StructureBlockPaletteLoadResult _parseBlockPositionDataList(::CompoundTag const& tag);

    MCNAPI void _saveBlockPalette(::CompoundTag& tag) const;

    MCNAPI void _saveBlockPositionDataList(::CompoundTag& tag) const;

    MCNAPI ::Block const& getBlock(
        ::BlockPalette const&                                   blockPalette,
        uint64                                                  paletteId,
        ::Bedrock::NonOwnerPointer<::IUnknownBlockTypeRegistry> unknownBlockRegistry
    ) const;

    MCNAPI ::StructureBlockPalette::BlockPositionData const* getBlockPositionData(uint64 blockIndex) const;

    MCNAPI ::Block const*
    tryGetBlock(uint64 paletteId, ::Bedrock::NonOwnerPointer<::IUnknownBlockTypeRegistry> unknownBlockRegistry) const;

    MCNAPI ~StructureBlockPalette();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();

    MCNAPI void* $ctor(::StructureBlockPalette&&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
