/**
 * @file  StructureBlockPalette.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

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
     * @hash   -1659099187
     * @symbol  ??0StructureBlockPalette\@\@QEAA\@XZ
     */
    MCAPI StructureBlockPalette();
    /**
     * @hash   -16950917
     * @symbol  ??0StructureBlockPalette\@\@QEAA\@$$QEAV0\@\@Z
     */
    MCAPI StructureBlockPalette(class StructureBlockPalette &&);
    /**
     * @hash   525701952
     * @symbol  ?addBlockPositionData\@StructureBlockPalette\@\@QEAAX_KUBlockPositionData\@1\@\@Z
     */
    MCAPI void addBlockPositionData(unsigned __int64, struct StructureBlockPalette::BlockPositionData);
    /**
     * @hash   -1889822340
     * @symbol  ?addMapping\@StructureBlockPalette\@\@QEAA_KV?$unique_ptr\@VCompoundTag\@\@U?$default_delete\@VCompoundTag\@\@\@std\@\@\@std\@\@\@Z
     */
    MCAPI unsigned __int64 addMapping(std::unique_ptr<class CompoundTag>);
    /**
     * @hash   -1406727035
     * @symbol  ?getAllBlockPositionData\@StructureBlockPalette\@\@QEBAAEBV?$unordered_map\@_KUBlockPositionData\@StructureBlockPalette\@\@U?$hash\@_K\@std\@\@U?$equal_to\@_K\@4\@V?$allocator\@U?$pair\@$$CB_KUBlockPositionData\@StructureBlockPalette\@\@\@std\@\@\@4\@\@std\@\@XZ
     */
    MCAPI class std::unordered_map<unsigned __int64, struct StructureBlockPalette::BlockPositionData, struct std::hash<unsigned __int64>, struct std::equal_to<unsigned __int64>, class std::allocator<struct std::pair<unsigned __int64 const, struct StructureBlockPalette::BlockPositionData>>> const & getAllBlockPositionData() const;
    /**
     * @hash   -1559603909
     * @symbol  ?getBlock\@StructureBlockPalette\@\@QEBAAEBVBlock\@\@AEBVBlockPalette\@\@_K\@Z
     */
    MCAPI class Block const & getBlock(class BlockPalette const &, unsigned __int64) const;
    /**
     * @hash   -1343835736
     * @symbol  ?getBlock\@StructureBlockPalette\@\@QEBAAEBVBlock\@\@_K\@Z
     */
    MCAPI class Block const & getBlock(unsigned __int64) const;
    /**
     * @hash   -1240976555
     * @symbol  ?getBlockPositionData\@StructureBlockPalette\@\@QEBAPEBUBlockPositionData\@1\@_K\@Z
     */
    MCAPI struct StructureBlockPalette::BlockPositionData const * getBlockPositionData(unsigned __int64) const;
    /**
     * @hash   1102561927
     * @symbol  ?getSize\@StructureBlockPalette\@\@QEBA_KXZ
     */
    MCAPI unsigned __int64 getSize() const;
    /**
     * @hash   -252125894
     * @symbol  ?load\@StructureBlockPalette\@\@QEAA_NAEBVCompoundTag\@\@H\@Z
     */
    MCAPI bool load(class CompoundTag const &, int);
    /**
     * @hash   -2082199646
     * @symbol  ?save\@StructureBlockPalette\@\@QEBA?AV?$unique_ptr\@VCompoundTag\@\@U?$default_delete\@VCompoundTag\@\@\@std\@\@\@std\@\@XZ
     */
    MCAPI std::unique_ptr<class CompoundTag> save() const;
    /**
     * @hash   1982887165
     * @symbol  ??1StructureBlockPalette\@\@QEAA\@XZ
     */
    MCAPI ~StructureBlockPalette();

//protected:
    /**
     * @hash   356049498
     * @symbol  ?_parseBlockPalette\@StructureBlockPalette\@\@IEAA?AW4StructureBlockPaletteLoadResult\@\@AEBVCompoundTag\@\@\@Z
     */
    MCAPI enum class StructureBlockPaletteLoadResult _parseBlockPalette(class CompoundTag const &);
    /**
     * @hash   -2054211761
     * @symbol  ?_parseBlockPositionData\@StructureBlockPalette\@\@IEAA?AW4StructureBlockPaletteLoadResult\@\@AEBVCompoundTag\@\@H\@Z
     */
    MCAPI enum class StructureBlockPaletteLoadResult _parseBlockPositionData(class CompoundTag const &, int);
    /**
     * @hash   -881662078
     * @symbol  ?_parseBlockPositionDataList\@StructureBlockPalette\@\@IEAA?AW4StructureBlockPaletteLoadResult\@\@AEBVCompoundTag\@\@\@Z
     */
    MCAPI enum class StructureBlockPaletteLoadResult _parseBlockPositionDataList(class CompoundTag const &);
    /**
     * @hash   253615880
     * @symbol  ?_saveBlockPositionDataList\@StructureBlockPalette\@\@IEBAXAEAVCompoundTag\@\@\@Z
     */
    MCAPI void _saveBlockPositionDataList(class CompoundTag &) const;

//private:
    /**
     * @hash   243079342
     * @symbol  ?_contentErrorMissingField\@StructureBlockPalette\@\@AEBAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI void _contentErrorMissingField(std::string const &) const;

protected:

private:

};