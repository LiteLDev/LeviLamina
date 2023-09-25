/**
 * @file  StructureBlockPalette.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "Bedrock.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class StructureBlockPalette.
 *
 */
class StructureBlockPalette {

#define AFTER_EXTRA
// Add Member There
public:
struct BlockPositionData {
    BlockPositionData() = delete;
    BlockPositionData(BlockPositionData const&) = delete;
    BlockPositionData(BlockPositionData const&&) = delete;
};

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_STRUCTUREBLOCKPALETTE
public:
    class StructureBlockPalette& operator=(class StructureBlockPalette const &) = delete;
    StructureBlockPalette(class StructureBlockPalette const &) = delete;
#endif

public:
    /**
     * @symbol ??0StructureBlockPalette\@\@QEAA\@XZ
     */
    MCAPI StructureBlockPalette();
    /**
     * @symbol ??0StructureBlockPalette\@\@QEAA\@$$QEAV0\@\@Z
     */
    MCAPI StructureBlockPalette(class StructureBlockPalette &&);
    /**
     * @symbol ?addMapping\@StructureBlockPalette\@\@QEAA_KV?$unique_ptr\@VCompoundTag\@\@U?$default_delete\@VCompoundTag\@\@\@std\@\@\@std\@\@\@Z
     */
    MCAPI unsigned __int64 addMapping(std::unique_ptr<class CompoundTag>);
    /**
     * @symbol ?getBlock\@StructureBlockPalette\@\@QEBAAEBVBlock\@\@AEBVBlockPalette\@\@_KV?$NonOwnerPointer\@VIUnknownBlockTypeRegistry\@\@\@Bedrock\@\@\@Z
     */
    MCAPI class Block const & getBlock(class BlockPalette const &, unsigned __int64, class Bedrock::NonOwnerPointer<class IUnknownBlockTypeRegistry>) const;
    /**
     * @symbol ?getBlockPositionData\@StructureBlockPalette\@\@QEBAPEBUBlockPositionData\@1\@_K\@Z
     */
    MCAPI struct StructureBlockPalette::BlockPositionData const * getBlockPositionData(unsigned __int64) const;
    /**
     * @symbol ?save\@StructureBlockPalette\@\@QEBA?AV?$unique_ptr\@VCompoundTag\@\@U?$default_delete\@VCompoundTag\@\@\@std\@\@\@std\@\@XZ
     */
    MCAPI std::unique_ptr<class CompoundTag> save() const;
    /**
     * @symbol ??1StructureBlockPalette\@\@QEAA\@XZ
     */
    MCAPI ~StructureBlockPalette();

//protected:
    /**
     * @symbol ?_parseBlockPositionData\@StructureBlockPalette\@\@IEAA?AW4StructureBlockPaletteLoadResult\@\@AEBVCompoundTag\@\@H\@Z
     */
    MCAPI enum class StructureBlockPaletteLoadResult _parseBlockPositionData(class CompoundTag const &, int);
    /**
     * @symbol ?_parseBlockPositionDataList\@StructureBlockPalette\@\@IEAA?AW4StructureBlockPaletteLoadResult\@\@AEBVCompoundTag\@\@\@Z
     */
    MCAPI enum class StructureBlockPaletteLoadResult _parseBlockPositionDataList(class CompoundTag const &);
    /**
     * @symbol ?_saveBlockPositionDataList\@StructureBlockPalette\@\@IEBAXAEAVCompoundTag\@\@\@Z
     */
    MCAPI void _saveBlockPositionDataList(class CompoundTag &) const;

//private:
    /**
     * @symbol ?_contentErrorMissingField\@StructureBlockPalette\@\@AEBAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI void _contentErrorMissingField(std::string const &) const;

protected:

private:

};
