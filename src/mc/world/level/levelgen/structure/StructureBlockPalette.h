#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
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
        BlockPositionData& operator=(BlockPositionData const&) = delete;
        BlockPositionData()                                    = delete;

    public:
        // NOLINTBEGIN
        /**
         * @symbol ??0BlockPositionData\@StructureBlockPalette\@\@QEAA\@AEBU01\@\@Z
         */
        MCAPI BlockPositionData(struct StructureBlockPalette::BlockPositionData const&);
        /**
         * @symbol ?isValid\@BlockPositionData\@StructureBlockPalette\@\@QEBA_NXZ
         */
        MCAPI bool isValid() const;
        /**
         * @symbol ??1BlockPositionData\@StructureBlockPalette\@\@QEAA\@XZ
         */
        MCAPI ~BlockPositionData();
        // NOLINTEND
    };

public:
    // prevent constructor by default
    StructureBlockPalette& operator=(StructureBlockPalette const&) = delete;
    StructureBlockPalette(StructureBlockPalette const&)            = delete;

public:
    // NOLINTBEGIN
    /**
     * @symbol ??0StructureBlockPalette\@\@QEAA\@XZ
     */
    MCAPI StructureBlockPalette();
    /**
     * @symbol ??0StructureBlockPalette\@\@QEAA\@$$QEAV0\@\@Z
     */
    MCAPI StructureBlockPalette(class StructureBlockPalette&&);
    /**
     * @symbol ?addBlockPositionData\@StructureBlockPalette\@\@QEAAX_KUBlockPositionData\@1\@\@Z
     */
    MCAPI void addBlockPositionData(uint64_t, struct StructureBlockPalette::BlockPositionData);
    /**
     * @symbol
     * ?addMapping\@StructureBlockPalette\@\@QEAA_KV?$unique_ptr\@VCompoundTag\@\@U?$default_delete\@VCompoundTag\@\@\@std\@\@\@std\@\@\@Z
     */
    MCAPI uint64_t addMapping(std::unique_ptr<class CompoundTag>);
    /**
     * @symbol
     * ?getAllBlockPositionData\@StructureBlockPalette\@\@QEBAAEBV?$unordered_map\@_KUBlockPositionData\@StructureBlockPalette\@\@U?$hash\@_K\@std\@\@U?$equal_to\@_K\@4\@V?$allocator\@U?$pair\@$$CB_KUBlockPositionData\@StructureBlockPalette\@\@\@std\@\@\@4\@\@std\@\@XZ
     */
    MCAPI std::unordered_map<uint64_t, struct StructureBlockPalette::BlockPositionData> const&
          getAllBlockPositionData() const;
    /**
     * @symbol
     * ?getBlock\@StructureBlockPalette\@\@QEBAAEBVBlock\@\@AEBVBlockPalette\@\@_KV?$NonOwnerPointer\@VIUnknownBlockTypeRegistry\@\@\@Bedrock\@\@\@Z
     */
    MCAPI class Block const&
    getBlock(class BlockPalette const&, uint64_t, class Bedrock::NonOwnerPointer<class IUnknownBlockTypeRegistry>)
        const;
    /**
     * @symbol ?getBlockPositionData\@StructureBlockPalette\@\@QEBAPEBUBlockPositionData\@1\@_K\@Z
     */
    MCAPI struct StructureBlockPalette::BlockPositionData const* getBlockPositionData(uint64_t) const;
    /**
     * @symbol ?getSize\@StructureBlockPalette\@\@QEBA_KXZ
     */
    MCAPI uint64_t getSize() const;
    /**
     * @symbol ?load\@StructureBlockPalette\@\@QEAA_NAEBVCompoundTag\@\@H\@Z
     */
    MCAPI bool load(class CompoundTag const&, int);
    /**
     * @symbol
     * ?save\@StructureBlockPalette\@\@QEBA?AV?$unique_ptr\@VCompoundTag\@\@U?$default_delete\@VCompoundTag\@\@\@std\@\@\@std\@\@XZ
     */
    MCAPI std::unique_ptr<class CompoundTag> save() const;
    /**
     * @symbol ??1StructureBlockPalette\@\@QEAA\@XZ
     */
    MCAPI ~StructureBlockPalette();
    // NOLINTEND

    // protected:
    // NOLINTBEGIN
    /**
     * @symbol
     * ?_parseBlockPalette\@StructureBlockPalette\@\@IEAA?AW4StructureBlockPaletteLoadResult\@\@AEBVCompoundTag\@\@\@Z
     */
    MCAPI enum class StructureBlockPaletteLoadResult _parseBlockPalette(class CompoundTag const&);
    /**
     * @symbol
     * ?_parseBlockPositionData\@StructureBlockPalette\@\@IEAA?AW4StructureBlockPaletteLoadResult\@\@AEBVCompoundTag\@\@H\@Z
     */
    MCAPI enum class StructureBlockPaletteLoadResult _parseBlockPositionData(class CompoundTag const&, int);
    /**
     * @symbol
     * ?_parseBlockPositionDataList\@StructureBlockPalette\@\@IEAA?AW4StructureBlockPaletteLoadResult\@\@AEBVCompoundTag\@\@\@Z
     */
    MCAPI enum class StructureBlockPaletteLoadResult _parseBlockPositionDataList(class CompoundTag const&);
    /**
     * @symbol ?_saveBlockPositionDataList\@StructureBlockPalette\@\@IEBAXAEAVCompoundTag\@\@\@Z
     */
    MCAPI void _saveBlockPositionDataList(class CompoundTag&) const;
    // NOLINTEND

    // private:
    // NOLINTBEGIN
    /**
     * @symbol
     * ?_contentErrorMissingField\@StructureBlockPalette\@\@AEBAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI void _contentErrorMissingField(std::string const&) const;
    // NOLINTEND
};
