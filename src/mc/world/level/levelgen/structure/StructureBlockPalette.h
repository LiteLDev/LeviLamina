#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/wrapper/StructureBlockPaletteLoadResult.h"
#include "mc/deps/core/common/bedrock/NonOwnerPointer.h"

class StructureBlockPalette {
public:
    // StructureBlockPalette inner types declare
    // clang-format off
    struct BlockPositionData;
    // clang-format on

    // StructureBlockPalette inner types define
    struct BlockPositionData {
    public:
        // prevent constructor by default
        BlockPositionData& operator=(BlockPositionData const&);
        BlockPositionData();

    public:
        // NOLINTBEGIN
        // symbol: ??0BlockPositionData@StructureBlockPalette@@QEAA@AEBU01@@Z
        MCAPI BlockPositionData(struct StructureBlockPalette::BlockPositionData const&);

        // symbol: ??1BlockPositionData@StructureBlockPalette@@QEAA@XZ
        MCAPI ~BlockPositionData();

        // NOLINTEND
    };

public:
    // prevent constructor by default
    StructureBlockPalette& operator=(StructureBlockPalette const&);
    StructureBlockPalette(StructureBlockPalette const&);

public:
    // NOLINTBEGIN
    // symbol: ??0StructureBlockPalette@@QEAA@XZ
    MCAPI StructureBlockPalette();

    // symbol: ??0StructureBlockPalette@@QEAA@$$QEAV0@@Z
    MCAPI StructureBlockPalette(class StructureBlockPalette&&);

    // symbol:
    // ?addMapping@StructureBlockPalette@@QEAA_KV?$unique_ptr@VCompoundTag@@U?$default_delete@VCompoundTag@@@std@@@std@@@Z
    MCAPI uint64 addMapping(std::unique_ptr<class CompoundTag>);

    // symbol:
    // ?getBlock@StructureBlockPalette@@QEBAAEBVBlock@@AEBVBlockPalette@@_KV?$NonOwnerPointer@VIUnknownBlockTypeRegistry@@@Bedrock@@@Z
    MCAPI class Block const&
    getBlock(class BlockPalette const&, uint64, class Bedrock::NonOwnerPointer<class IUnknownBlockTypeRegistry>) const;

    // symbol: ?getBlockPositionData@StructureBlockPalette@@QEBAPEBUBlockPositionData@1@_K@Z
    MCAPI struct StructureBlockPalette::BlockPositionData const* getBlockPositionData(uint64) const;

    // symbol:
    // ?save@StructureBlockPalette@@QEBA?AV?$unique_ptr@VCompoundTag@@U?$default_delete@VCompoundTag@@@std@@@std@@XZ
    MCAPI std::unique_ptr<class CompoundTag> save() const;

    // symbol: ??1StructureBlockPalette@@QEAA@XZ
    MCAPI ~StructureBlockPalette();

    // NOLINTEND

    // protected:
    // NOLINTBEGIN
    // symbol:
    // ?_parseBlockPositionData@StructureBlockPalette@@IEAA?AW4StructureBlockPaletteLoadResult@@AEBVCompoundTag@@H@Z
    MCAPI ::StructureBlockPaletteLoadResult _parseBlockPositionData(class CompoundTag const&, int);

    // symbol:
    // ?_parseBlockPositionDataList@StructureBlockPalette@@IEAA?AW4StructureBlockPaletteLoadResult@@AEBVCompoundTag@@@Z
    MCAPI ::StructureBlockPaletteLoadResult _parseBlockPositionDataList(class CompoundTag const&);

    // symbol: ?_saveBlockPositionDataList@StructureBlockPalette@@IEBAXAEAVCompoundTag@@@Z
    MCAPI void _saveBlockPositionDataList(class CompoundTag&) const;

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol:
    // ?_contentErrorMissingField@StructureBlockPalette@@AEBAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCAPI void _contentErrorMissingField(std::string const&) const;

    // NOLINTEND
};
