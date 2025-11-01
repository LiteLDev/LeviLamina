#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/platform/threading/Mutex.h"

// auto generated forward declare list
// clang-format off
class Block;
class BlockType;
class IUnknownBlockTypeRegistry;
class Level;
struct BlockID;
struct NewBlockID;
// clang-format on

class BlockPalette {
public:
    // BlockPalette inner types declare
    // clang-format off
    struct ConstructorToken;
    // clang-format on

    // BlockPalette inner types define
    struct ConstructorToken {
    };

    enum class PaletteType : int {
        Sequential = 0,
        Hashed = 1,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 80, ::Bedrock::Threading::Mutex> mBlockTypeStatesConversionWarningMutex;
    ::ll::TypedStorage<8, 16, ::std::set<::std::pair<int, int>>> mBlockTypeStatesConversionWarningSet;
    ::ll::TypedStorage<8, 24, ::std::vector<::Block const*>> mBlockFromNetworkId;
    ::ll::TypedStorage<8, 8, ::Level*> mLevel;
    // NOLINTEND

public:
    // prevent constructor by default
    BlockPalette();

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
    MCNAPI explicit BlockPalette(::BlockPalette::ConstructorToken);

    MCNAPI explicit BlockPalette(::Level& level);

    MCNAPI ::Block const& getBlockFromLegacyData(::NewBlockID id, uint data) const;

    MCNAPI ::Bedrock::NonOwnerPointer<::IUnknownBlockTypeRegistry> const getUnknownBlockTypeRegistry() const;

    MCNAPI bool shouldWarnFor(::NewBlockID id, ushort data) const;

    MCNAPI ::Block const& switchBlock(::Block const& oldBlock, ::BlockType const& newBlockType) const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Block const& convertLegacyBlock(::BlockID id, ushort data);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::BlockPalette::ConstructorToken);

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
