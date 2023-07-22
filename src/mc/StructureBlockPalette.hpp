/**
 * @file  StructureBlockPalette.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "liteloader/api/Global.h"

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
     * @symbol  ??0StructureBlockPalette\@\@QEAA\@XZ
     */
    MCAPI StructureBlockPalette();
    /**
     * @symbol  ??0StructureBlockPalette\@\@QEAA\@$$QEAV0\@\@Z
     */
    MCAPI StructureBlockPalette(class StructureBlockPalette &&);
    /**
     * @symbol  ?addBlockPositionData\@StructureBlockPalette\@\@QEAAX_KUBlockPositionData\@1\@\@Z
     */
    MCAPI void addBlockPositionData(unsigned __int64, struct StructureBlockPalette::BlockPositionData);
    /**
     * @symbol  ?addMapping\@StructureBlockPalette\@\@QEAA_KV?$unique_ptr\@VCompoundTag\@\@U?$default_delete\@VCompoundTag\@\@\@std\@\@\@std\@\@\@Z
     */
    MCAPI unsigned __int64 addMapping(std::unique_ptr<class CompoundTag>);
    /**
     * @symbol  ?getAllBlockPositionData\@StructureBlockPalette\@\@QEBAAEBV?$unordered_map\@_KUBlockPositionData\@StructureBlockPalette\@\@U?$hash\@_K\@std\@\@U?$equal_to\@_K\@4\@V?$allocator\@U?$pair\@$$CB_KUBlockPositionData\@StructureBlockPalette\@\@\@std\@\@\@4\@\@std\@\@XZ
     */
    MCAPI class std::unordered_map<unsigned __int64, struct StructureBlockPalette::BlockPositionData, struct std::hash<unsigned __int64>, struct std::equal_to<unsigned __int64>, class std::allocator<struct std::pair<unsigned __int64 const, struct StructureBlockPalette::BlockPositionData>>> const & getAllBlockPositionData() const;
    /**
     * @symbol  ?getBlock\@StructureBlockPalette\@\@QEBAAEBVBlock\@\@AEBVBlockPalette\@\@_K\@Z
     */
    MCAPI class Block const & getBlock(class BlockPalette const &, unsigned __int64) const;
    /**
     * @symbol  ?getBlock\@StructureBlockPalette\@\@QEBAAEBVBlock\@\@_K\@Z
     */
    MCAPI class Block const & getBlock(unsigned __int64) const;
    /**
     * @symbol  ?getBlockPositionData\@StructureBlockPalette\@\@QEBAPEBUBlockPositionData\@1\@_K\@Z
     */
    MCAPI struct StructureBlockPalette::BlockPositionData const * getBlockPositionData(unsigned __int64) const;
    /**
     * @symbol  ?getSize\@StructureBlockPalette\@\@QEBA_KXZ
     */
    MCAPI unsigned __int64 getSize() const;
    /**
     * @symbol  ?load\@StructureBlockPalette\@\@QEAA_NAEBVCompoundTag\@\@H\@Z
     */
    MCAPI bool load(class CompoundTag const &, int);
    /**
     * @symbol  ?save\@StructureBlockPalette\@\@QEBA?AV?$unique_ptr\@VCompoundTag\@\@U?$default_delete\@VCompoundTag\@\@\@std\@\@\@std\@\@XZ
     */
    MCAPI std::unique_ptr<class CompoundTag> save() const;
    /**
     * @symbol  ??1StructureBlockPalette\@\@QEAA\@XZ
     */
    MCAPI ~StructureBlockPalette();

//protected:
    /**
     * @symbol  ?_parseBlockPalette\@StructureBlockPalette\@\@IEAA?AW4StructureBlockPaletteLoadResult\@\@AEBVCompoundTag\@\@\@Z
     */
    MCAPI enum class StructureBlockPaletteLoadResult _parseBlockPalette(class CompoundTag const &);
    /**
     * @symbol  ?_parseBlockPositionData\@StructureBlockPalette\@\@IEAA?AW4StructureBlockPaletteLoadResult\@\@AEBVCompoundTag\@\@H\@Z
     */
    MCAPI enum class StructureBlockPaletteLoadResult _parseBlockPositionData(class CompoundTag const &, int);
    /**
     * @symbol  ?_parseBlockPositionDataList\@StructureBlockPalette\@\@IEAA?AW4StructureBlockPaletteLoadResult\@\@AEBVCompoundTag\@\@\@Z
     */
    MCAPI enum class StructureBlockPaletteLoadResult _parseBlockPositionDataList(class CompoundTag const &);
    /**
     * @symbol  ?_saveBlockPositionDataList\@StructureBlockPalette\@\@IEBAXAEAVCompoundTag\@\@\@Z
     */
    MCAPI void _saveBlockPositionDataList(class CompoundTag &) const;

//private:
    /**
     * @symbol  ?_contentErrorMissingField\@StructureBlockPalette\@\@AEBAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI void _contentErrorMissingField(std::string const &) const;

protected:

private:

};