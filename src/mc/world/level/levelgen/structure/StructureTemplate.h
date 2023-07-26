#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/NonOwnerPointer.h"

class StructureTemplate {

public:
    // prevent constructor by default
    StructureTemplate& operator=(StructureTemplate const&) = delete;
    StructureTemplate(StructureTemplate const&)            = delete;
    StructureTemplate()                                    = delete;

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0(); // NOLINT
    /**
     * @vftbl 1
     * @symbol ?clear\@StructureTemplate\@\@UEAAXXZ
     */
    virtual void clear(); // NOLINT
    /**
     * @vftbl 2
     * @symbol ?_allowReadBlock\@StructureTemplate\@\@MEBA_NAEBVBlockPos\@\@AEBVBlock\@\@\@Z
     */
    virtual bool _allowReadBlock(class BlockPos const&, class Block const&) const; // NOLINT
    /**
     * @vftbl 3
     * @symbol ?_allowReadActor\@StructureTemplate\@\@MEBA_NAEBVActor\@\@\@Z
     */
    virtual bool _allowReadActor(class Actor const&) const; // NOLINT
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_STRUCTURETEMPLATE
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~StructureTemplate(); // NOLINT
#endif
    /**
     * @symbol
     * ??0StructureTemplate\@\@QEAA\@V?$basic_string_view\@DU?$char_traits\@D\@std\@\@\@std\@\@V?$NonOwnerPointer\@VIUnknownBlockTypeRegistry\@\@\@Bedrock\@\@\@Z
     */
    MCAPI
        StructureTemplate(class std::basic_string_view<char, struct std::char_traits<char>>, class Bedrock::NonOwnerPointer<class IUnknownBlockTypeRegistry>); // NOLINT
    /**
     * @symbol ?fillFromWorld\@StructureTemplate\@\@QEAAXAEAVBlockSource\@\@AEBVBlockPos\@\@AEBVStructureSettings\@\@\@Z
     */
    MCAPI void fillFromWorld(class BlockSource&, class BlockPos const&, class StructureSettings const&); // NOLINT
    /**
     * @symbol ?getBlockAtPos\@StructureTemplate\@\@QEBAAEBVBlock\@\@AEBVBlockPos\@\@\@Z
     */
    MCAPI class Block const& getBlockAtPos(class BlockPos const&) const; // NOLINT
    /**
     * @symbol
     * ?getJigsawMarkers\@StructureTemplate\@\@QEBA?AV?$vector\@VJigsawStructureBlockInfo\@\@V?$allocator\@VJigsawStructureBlockInfo\@\@\@std\@\@\@std\@\@XZ
     */
    MCAPI std::vector<class JigsawStructureBlockInfo> getJigsawMarkers() const; // NOLINT
    /**
     * @symbol
     * ?getName\@StructureTemplate\@\@QEBAAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    MCAPI std::string const& getName() const; // NOLINT
    /**
     * @symbol ?getSize\@StructureTemplate\@\@QEBAAEBVBlockPos\@\@XZ
     */
    MCAPI class BlockPos const& getSize() const; // NOLINT
    /**
     * @symbol
     * ?getTransformedBounds\@StructureTemplate\@\@QEBA?AVBoundingBox\@\@VBlockPos\@\@AEBVStructureSettings\@\@\@Z
     */
    MCAPI class BoundingBox getTransformedBounds(class BlockPos, class StructureSettings const&) const; // NOLINT
    /**
     * @symbol ?isLoaded\@StructureTemplate\@\@QEBA_NXZ
     */
    MCAPI bool isLoaded() const; // NOLINT
    /**
     * @symbol
     * ?placeInWorld\@StructureTemplate\@\@QEBAXAEAVBlockSource\@\@AEBVBlockPalette\@\@AEBVBlockPos\@\@AEBVStructureSettings\@\@PEAVStructureTelemetryServerData\@\@_N\@Z
     */
    MCAPI void placeInWorld(
        class BlockSource&,
        class BlockPalette const&,
        class BlockPos const&,
        class StructureSettings const&,
        class StructureTelemetryServerData*,
        bool
    ) const; // NOLINT
    /**
     * @symbol ?placeNextSegmentInWorld\@StructureTemplate\@\@QEBAXAEAVStructureAnimationData\@\@AEBVBlockPalette\@\@\@Z
     */
    MCAPI void placeNextSegmentInWorld(class StructureAnimationData&, class BlockPalette const&) const; // NOLINT
    /**
     * @symbol
     * ?save\@StructureTemplate\@\@QEBA?AV?$unique_ptr\@VCompoundTag\@\@U?$default_delete\@VCompoundTag\@\@\@std\@\@\@std\@\@XZ
     */
    MCAPI std::unique_ptr<class CompoundTag> save() const; // NOLINT
    /**
     * @symbol ?setStructureTemplateData\@StructureTemplate\@\@QEAAXAEBVStructureTemplateData\@\@\@Z
     */
    MCAPI void setStructureTemplateData(class StructureTemplateData const&); // NOLINT
    /**
     * @symbol ?INVALID_POSITION\@StructureTemplate\@\@2VBlockPos\@\@B
     */
    MCAPI static class BlockPos const INVALID_POSITION; // NOLINT

    // private:
    /**
     * @symbol ?_fillBlockInfo\@StructureTemplate\@\@AEAAXAEAVBlockSource\@\@AEBVBlockPos\@\@11\@Z
     */
    MCAPI void
    _fillBlockInfo(class BlockSource&, class BlockPos const&, class BlockPos const&, class BlockPos const&); // NOLINT
    /**
     * @symbol ?_fillEntityList\@StructureTemplate\@\@AEAAXAEAVBlockSource\@\@AEBVBlockPos\@\@1\@Z
     */
    MCAPI void _fillEntityList(class BlockSource&, class BlockPos const&, class BlockPos const&); // NOLINT
    /**
     * @symbol ?_placeEntitiesInWorld\@StructureTemplate\@\@AEBAXAEAVBlockSource\@\@AEAVDataLoadHelper\@\@_N\@Z
     */
    MCAPI void _placeEntitiesInWorld(class BlockSource&, class DataLoadHelper&, bool) const; // NOLINT
    /**
     * @symbol
     * ?_placeNextBlockSegmentInWorld\@StructureTemplate\@\@AEBAXAEAVBlockSource\@\@_K1AEBVStructureSettings\@\@AEAVDataLoadHelper\@\@AEBVStructureBlockPalette\@\@AEBVBlockPalette\@\@VBlockPos\@\@AEBV7\@AEBVVec3\@\@W4Rotation\@\@W4Mirror\@\@MIPEAVStructureTelemetryServerData\@\@_N_N\@Z
     */
    MCAPI void _placeNextBlockSegmentInWorld(
        class BlockSource&,
        unsigned __int64,
        unsigned __int64,
        class StructureSettings const&,
        class DataLoadHelper&,
        class StructureBlockPalette const&,
        class BlockPalette const&,
        class BlockPos,
        class BlockPos const&,
        class Vec3 const&,
        enum class Rotation,
        enum class Mirror,
        float,
        unsigned int,
        class StructureTelemetryServerData*,
        bool,
        bool
    ) const; // NOLINT

private:
};
