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
    struct NamedTickingQueueData;
    struct TickingQueueData;
    struct BlockPositionData;
    // clang-format on

    // StructureBlockPalette inner types define
    struct NamedTickingQueueData {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 32, ::std::string> mNamespace;
        ::ll::TypedStorage<8, 32, ::std::string> mEventName;
        ::ll::TypedStorage<8, 8, uint64>         mTickDelay;
        // NOLINTEND
    };

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
        ::ll::TypedStorage<8, 8, ::std::unique_ptr<::CompoundTag>>                               mBlockEntityData;
        ::ll::TypedStorage<8, 24, ::std::vector<::StructureBlockPalette::TickingQueueData>>      mTickData;
        ::ll::TypedStorage<8, 24, ::std::vector<::StructureBlockPalette::NamedTickingQueueData>> mNamedTickData;
        ::ll::TypedStorage<8, 24, ::std::vector<::std::unique_ptr<::CompoundTag>>> mNeighborChangedQueueData;
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
    // member functions
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI ::StructureBlockPaletteLoadResult _parseBlockPalette(::CompoundTag const& tag);

    MCNAPI ::StructureBlockPaletteLoadResult _parseBlockPositionDataList(::CompoundTag const& tag);

    MCNAPI void _saveBlockPalette(::CompoundTag& tag) const;

    MCNAPI void _saveBlockPositionDataList(::CompoundTag& tag) const;

    MCNAPI ::StructureBlockPalette clone() const;
#endif

    MCNAPI ::Block const& getBlock(
        ::BlockPalette const&                                   blockPalette,
        uint64                                                  paletteId,
        ::Bedrock::NonOwnerPointer<::IUnknownBlockTypeRegistry> unknownBlockRegistry
    ) const;

    MCNAPI ::StructureBlockPalette::BlockPositionData const* getBlockPositionData(uint64 blockIndex) const;

#ifdef LL_PLAT_C
    MCNAPI ::std::unique_ptr<::CompoundTag> save() const;
#endif

    MCAPI ::Block const*
    tryGetBlock(uint64 paletteId, ::Bedrock::NonOwnerPointer<::IUnknownBlockTypeRegistry> unknownBlockRegistry) const;

    MCNAPI ~StructureBlockPalette();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
