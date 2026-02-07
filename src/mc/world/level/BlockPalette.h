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
    enum class PaletteType : int {
        Sequential = 0,
        Hashed     = 1,
    };

    struct ConstructorToken {};

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 80, ::Bedrock::Threading::Mutex>       mBlockTypeStatesConversionWarningMutex;
    ::ll::TypedStorage<8, 16, ::std::set<::std::pair<int, int>>> mBlockTypeStatesConversionWarningSet;
    ::ll::TypedStorage<8, 24, ::std::vector<::Block const*>>     mBlockFromNetworkId;
    ::ll::TypedStorage<8, 8, ::Level*>                           mLevel;
    // NOLINTEND

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
    MCAPI explicit BlockPalette(::Level& level);

    MCAPI ::Block const& getBlockFromLegacyData(::NewBlockID id, uint data) const;

    MCAPI ::Bedrock::NonOwnerPointer<::IUnknownBlockTypeRegistry> const getUnknownBlockTypeRegistry() const;

    MCAPI bool shouldWarnFor(::NewBlockID id, ushort data) const;

    MCAPI ::Block const& switchBlock(::Block const& oldBlock, ::BlockType const& newBlockType) const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::Block const& convertLegacyBlock(::BlockID id, ushort data);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
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
