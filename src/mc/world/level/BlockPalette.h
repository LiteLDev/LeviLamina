#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/core/utility/buffer_span.h"

// auto generated forward declare list
// clang-format off
class Block;
class BlockLegacy;
class IUnknownBlockTypeRegistry;
class Level;
struct BlockID;
struct NewBlockID;
struct NibblePair;
namespace Bedrock::Threading { class Mutex; }
// clang-format on

class BlockPalette {
public:
    // BlockPalette inner types declare
    // clang-format off
    struct ConstructorToken;
    // clang-format on

    // BlockPalette inner types define
    struct ConstructorToken {};

    enum class PaletteType : int {
        Sequential = 0,
        Hashed     = 1,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 80, ::Bedrock::Threading::Mutex>       mLegacyBlockStatesConversionWarningMutex;
    ::ll::TypedStorage<8, 16, ::std::set<::std::pair<int, int>>> mLegacyBlockStatesConversionWarningSet;
    ::ll::TypedStorage<8, 24, ::std::vector<::Block const*>>     mBlockFromNetworkId;
    ::ll::TypedStorage<8, 8, ::Level*>                           mLevel;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~BlockPalette();

    // vIndex: 1
    virtual ::BlockPalette::PaletteType getPaletteType();

    // vIndex: 2
    virtual void appendBlock(::Block const& blockState);

    // vIndex: 3
    virtual ::Block const& getBlock(uint const& networkId) const;

    // vIndex: 4
    virtual void assignBlockNetworkId(::Block const& block, uint64 networkId) const;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit BlockPalette(::BlockPalette::ConstructorToken);

    MCAPI explicit BlockPalette(::Level& level);

    MCAPI void cacheBlockComponentData();

    MCAPI ::Block const& getBlockFromLegacyData(::NewBlockID id, uint data) const;

    MCAPI ::Bedrock::NonOwnerPointer<::IUnknownBlockTypeRegistry> const getUnknownBlockTypeRegistry() const;

    MCAPI void initFromBlockDefinitions();

    MCAPI bool shouldWarnFor(::NewBlockID id, ushort data) const;

    MCAPI ::Block const& switchBlock(::Block const& oldBlock, ::BlockLegacy const& newBlockType) const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::Block const& convertLegacyBlock(::BlockID id, ushort data);

    MCAPI static bool convertLegacyBlocks(
        ::buffer_span_mut<::Block const*> dst,
        ::buffer_span<::BlockID>          blockIDs,
        ::buffer_span<::NibblePair>       data,
        uint64                            volume
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::BlockPalette::ConstructorToken);

    MCAPI void* $ctor(::Level& level);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCFOLD ::BlockPalette::PaletteType $getPaletteType();

    MCAPI void $appendBlock(::Block const& blockState);

    MCAPI ::Block const& $getBlock(uint const& networkId) const;

    MCAPI void $assignBlockNetworkId(::Block const& block, uint64 networkId) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
