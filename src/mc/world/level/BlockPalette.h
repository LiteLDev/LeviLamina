#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/core/utility/buffer_span.h"
#include "mc/deps/core/utility/buffer_span_mut.h"

class BlockPalette {
public:
    // BlockPalette inner types declare
    // clang-format off
    struct ConstructorToken;
    // clang-format on

    // BlockPalette inner types define
    enum class PaletteType {};

    struct ConstructorToken {
    public:
        // prevent constructor by default
        ConstructorToken& operator=(ConstructorToken const&);
        ConstructorToken(ConstructorToken const&);
        ConstructorToken();
    };

public:
    // prevent constructor by default
    BlockPalette& operator=(BlockPalette const&);
    BlockPalette(BlockPalette const&);
    BlockPalette();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~BlockPalette();

    // vIndex: 1
    virtual ::BlockPalette::PaletteType getPaletteType();

    // vIndex: 2
    virtual void appendBlock(class Block const& blockState);

    // vIndex: 3
    virtual class Block const& getBlock(uint const& networkId) const;

    // vIndex: 4
    virtual void assignBlockNetworkId(class Block const& block, uint64 networkId) const;

    MCAPI explicit BlockPalette(class Level& level);

    MCAPI explicit BlockPalette(struct BlockPalette::ConstructorToken);

    MCAPI void cacheBlockComponentData();

    MCAPI class Block const& getBlockFromLegacyData(struct NewBlockID id, uint data) const;

    MCAPI class Bedrock::NonOwnerPointer<class IUnknownBlockTypeRegistry> const getUnknownBlockTypeRegistry() const;

    MCAPI void initFromBlockDefinitions();

    MCAPI class Block const& switchBlock(class Block const& oldBlock, class BlockLegacy const& newBlockType) const;

    MCAPI static class Block const& convertLegacyBlock(struct BlockID id, ushort data);

    MCAPI static bool convertLegacyBlocks(
        class buffer_span_mut<class Block const*> dst,
        class buffer_span<struct BlockID>         blockIDs,
        class buffer_span<struct NibblePair>      data,
        uint64                                    volume
    );

    // NOLINTEND

    // protected:
    // NOLINTBEGIN
    MCAPI bool shouldWarnFor(struct NewBlockID id, ushort data) const;

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** $vftable();

    template <class... Args>
    auto* ctor$(Args... args) {
        return std::construct_at(this, std::forward<Args>(args)...);
    }

    MCAPI void dtor$();

    MCAPI void appendBlock$(class Block const& blockState);

    MCAPI void assignBlockNetworkId$(class Block const& block, uint64 networkId) const;

    MCAPI class Block const& getBlock$(uint const& networkId) const;

    MCAPI ::BlockPalette::PaletteType getPaletteType$();

    // NOLINTEND
};
