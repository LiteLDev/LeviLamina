#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/buffer_span.h"

// auto generated forward declare list
// clang-format off
class Block;
class BlockType;
class Level;
struct BlockID;
struct NewBlockID;
struct NibblePair;
// clang-format on

class BlockPalette {
public:
    // BlockPalette inner types declare
    // clang-format off
    struct ConstructorToken;
    // clang-format on

    // BlockPalette inner types define
    enum class PaletteType : int {
        Sequential = 0,
        Hashed     = 1,
    };

    struct ConstructorToken {};

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 80, ::std::mutex>                      mLegacyBlockStatesConversionWarningMutex;
    ::ll::TypedStorage<8, 16, ::std::set<::std::pair<int, int>>> mLegacyBlockStatesConversionWarningSet;
    ::ll::TypedStorage<8, 24, ::std::vector<::Block const*>>     mBlockFromNetworkId;
    ::ll::TypedStorage<8, 8, ::Level*>                           mLevel;
    // NOLINTEND

public:
    /// Walks every registered block type and appends each of its permutations to this palette.
    LLAPI void initFromBlockDefinitions();

public:
    // prevent constructor by default
    BlockPalette();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~BlockPalette();

    virtual ::BlockPalette::PaletteType getPaletteType();

    virtual void appendBlock(::Block const& blockState);

    virtual ::Block const& getBlock(uint const& networkId) const;

    virtual void assignBlockNetworkId(::Block const& block, uint64 networkId) const;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit BlockPalette(::Level& level);

    MCAPI void cacheBlockComponentData();

    MCNAPI ::Block const& getBlockFromLegacyData(::NewBlockID id, uint data) const;

    MCNAPI bool shouldWarnFor(::NewBlockID id, ushort data) const;

    MCNAPI ::Block const& switchBlock(::Block const& oldBlock, ::BlockType const& newBlockType) const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Block const& convertLegacyBlock(::BlockID id, ushort data);

    MCNAPI static bool convertLegacyBlocks(
        ::buffer_span_mut<::Block const*> dst,
        ::buffer_span<::BlockID>          blockIDs,
        ::buffer_span<::NibblePair>       data,
        uint64                            volume
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::Level& level);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::BlockPalette::PaletteType $getPaletteType();

    MCNAPI void $appendBlock(::Block const& blockState);

    MCNAPI ::Block const& $getBlock(uint const& networkId) const;

    MCNAPI void $assignBlockNetworkId(::Block const& block, uint64 networkId) const;


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
