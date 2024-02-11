#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/NonOwnerPointer.h"
#include "mc/deps/core/utility/buffer_span.h"
#include "mc/deps/core/utility/buffer_span_mut.h"

class BlockPalette {
public:
    // BlockPalette inner types declare
    // clang-format off
    struct ConstructorToken;
    // clang-format on

    // BlockPalette inner types define
    enum class PaletteType : int {
        Sequential = 0x0,
        Hashed     = 0x1,
    };

    struct ConstructorToken {
    public:
        // prevent constructor by default
        ConstructorToken& operator=(ConstructorToken const&);
        ConstructorToken(ConstructorToken const&);
        ConstructorToken();
    };

    std::mutex                                      mLegacyBlockStatesConversionWarningMutex;
    std::set<std::pair<int, int>>                   mLegacyBlockStatesConversionWarningSet;
    std::map<std::string, class BlockLegacy const*> mNameLookup;
    std::vector<class Block const*>                 mBlockFromNetworkId;
    class Level*                                    mLevel;

public:
    // prevent constructor by default
    BlockPalette& operator=(BlockPalette const&);
    BlockPalette(BlockPalette const&);
    BlockPalette();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1BlockPalette@@UEAA@XZ
    virtual ~BlockPalette();

    // vIndex: 1, symbol: ?getPaletteType@BlockPalette@@UEAA?AW4PaletteType@1@XZ
    virtual ::BlockPalette::PaletteType getPaletteType();

    // vIndex: 2, symbol: ?appendBlock@BlockPalette@@UEAAXAEBVBlock@@@Z
    virtual void appendBlock(class Block const& blockState);

    // vIndex: 3, symbol: ?getBlock@BlockPalette@@UEBAAEBVBlock@@AEBI@Z
    virtual class Block const& getBlock(uint const&) const;

    // vIndex: 4, symbol: ?assignBlockNetworkId@BlockPalette@@MEBAXAEBVBlock@@_K@Z
    virtual void assignBlockNetworkId(class Block const& block, uint64) const;

    // symbol: ??0BlockPalette@@QEAA@AEAVLevel@@@Z
    MCAPI explicit BlockPalette(class Level& level);

    // symbol: ??0BlockPalette@@QEAA@UConstructorToken@0@@Z
    MCAPI explicit BlockPalette(struct BlockPalette::ConstructorToken);

    // symbol: ?cacheBlockComponentData@BlockPalette@@QEAAXXZ
    MCAPI void cacheBlockComponentData();

    // symbol: ?getBlockFromLegacyData@BlockPalette@@QEBAAEBVBlock@@UNewBlockID@@I@Z
    MCAPI class Block const& getBlockFromLegacyData(struct NewBlockID id, uint data) const;

    // symbol:
    // ?getUnknownBlockTypeRegistry@BlockPalette@@QEBA?BV?$NonOwnerPointer@VIUnknownBlockTypeRegistry@@@Bedrock@@XZ
    MCAPI class Bedrock::NonOwnerPointer<class IUnknownBlockTypeRegistry> const getUnknownBlockTypeRegistry() const;

    // symbol: ?initFromBlockDefinitions@BlockPalette@@QEAAXXZ
    MCAPI void initFromBlockDefinitions();

    // symbol: ?switchBlock@BlockPalette@@QEBAAEBVBlock@@AEBV2@AEBVBlockLegacy@@@Z
    MCAPI class Block const& switchBlock(class Block const& oldBlock, class BlockLegacy const& newBlockType) const;

    // symbol: ?convertLegacyBlock@BlockPalette@@SAAEBVBlock@@UBlockID@@G@Z
    MCAPI static class Block const& convertLegacyBlock(struct BlockID, ushort);

    // symbol:
    // ?convertLegacyBlocks@BlockPalette@@SA_NV?$buffer_span_mut@PEBVBlock@@@@V?$buffer_span@UBlockID@@@@V?$buffer_span@UNibblePair@@@@_K@Z
    MCAPI static bool convertLegacyBlocks(
        class buffer_span_mut<class Block const*>,
        class buffer_span<struct BlockID>,
        class buffer_span<struct NibblePair>,
        uint64
    );

    // NOLINTEND

    // protected:
    // NOLINTBEGIN
    // symbol: ?shouldWarnFor@BlockPalette@@IEBA_NUNewBlockID@@G@Z
    MCAPI bool shouldWarnFor(struct NewBlockID id, ushort data) const;

    // NOLINTEND
};
