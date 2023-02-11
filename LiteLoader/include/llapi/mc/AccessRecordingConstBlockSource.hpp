/**
 * @file  AccessRecordingConstBlockSource.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class AccessRecordingConstBlockSource.
 *
 */
class AccessRecordingConstBlockSource {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ACCESSRECORDINGCONSTBLOCKSOURCE
public:
    class AccessRecordingConstBlockSource& operator=(class AccessRecordingConstBlockSource const &) = delete;
    AccessRecordingConstBlockSource(class AccessRecordingConstBlockSource const &) = delete;
    AccessRecordingConstBlockSource() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~AccessRecordingConstBlockSource();
    /**
     * @hash   -1466096240
     * @vftbl  1
     * @symbol  ?getBlock\@AccessRecordingConstBlockSource\@\@UEBAAEBVBlock\@\@HHH\@Z
     */
    virtual class Block const & getBlock(int, int, int) const;
    /**
     * @hash   1769550907
     * @vftbl  2
     * @symbol  ?getBlock\@AccessRecordingConstBlockSource\@\@UEBAAEBVBlock\@\@AEBVBlockPos\@\@\@Z
     */
    virtual class Block const & getBlock(class BlockPos const &) const;
    /**
     * @hash   1138007341
     * @vftbl  3
     * @symbol  ?getBlock\@AccessRecordingConstBlockSource\@\@UEBAAEBVBlock\@\@AEBVBlockPos\@\@I\@Z
     */
    virtual class Block const & getBlock(class BlockPos const &, unsigned int) const;
    /**
     * @hash   -1281471969
     * @vftbl  4
     * @symbol  ?getBlockEntity\@AccessRecordingConstBlockSource\@\@UEBAPEBVBlockActor\@\@AEBVBlockPos\@\@\@Z
     */
    virtual class BlockActor const * getBlockEntity(class BlockPos const &) const;
    /**
     * @hash   -1355555473
     * @vftbl  5
     * @symbol  ?getExtraBlock\@AccessRecordingConstBlockSource\@\@UEBAAEBVBlock\@\@AEBVBlockPos\@\@\@Z
     */
    virtual class Block const & getExtraBlock(class BlockPos const &) const;
    /**
     * @hash   -1587015129
     * @vftbl  6
     * @symbol  ?getLiquidBlock\@AccessRecordingConstBlockSource\@\@UEBAAEBVBlock\@\@AEBVBlockPos\@\@\@Z
     */
    virtual class Block const & getLiquidBlock(class BlockPos const &) const;
    /**
     * @hash   1290833103
     * @vftbl  7
     * @symbol  ?hasBlock\@AccessRecordingConstBlockSource\@\@UEBA_NAEBVBlockPos\@\@\@Z
     */
    virtual bool hasBlock(class BlockPos const &) const;
    /**
     * @hash   1854714960
     * @vftbl  8
     * @symbol  ?containsAnyLiquid\@AccessRecordingConstBlockSource\@\@UEBA_NAEBVAABB\@\@\@Z
     */
    virtual bool containsAnyLiquid(class AABB const &) const;
    /**
     * @hash   -123544786
     * @vftbl  9
     * @symbol  ?containsMaterial\@AccessRecordingConstBlockSource\@\@UEBA_NAEBVAABB\@\@W4MaterialType\@\@\@Z
     */
    virtual bool containsMaterial(class AABB const &, enum class MaterialType) const;
    /**
     * @hash   857606279
     * @vftbl  10
     * @symbol  ?getMaterial\@AccessRecordingConstBlockSource\@\@UEBAAEBVMaterial\@\@AEBVBlockPos\@\@\@Z
     */
    virtual class Material const & getMaterial(class BlockPos const &) const;
    /**
     * @hash   -1801913428
     * @vftbl  11
     * @symbol  ?getMaterial\@AccessRecordingConstBlockSource\@\@UEBAAEBVMaterial\@\@HHH\@Z
     */
    virtual class Material const & getMaterial(int, int, int) const;
    /**
     * @hash   1455780764
     * @vftbl  12
     * @symbol  ?hasChunksAt\@AccessRecordingConstBlockSource\@\@UEBA_NAEBUBounds\@\@_N\@Z
     */
    virtual bool hasChunksAt(struct Bounds const &, bool) const;
    /**
     * @hash   1490471692
     * @vftbl  13
     * @symbol  ?hasChunksAt\@AccessRecordingConstBlockSource\@\@UEBA_NAEBVBlockPos\@\@H_N\@Z
     */
    virtual bool hasChunksAt(class BlockPos const &, int, bool) const;
    /**
     * @hash   -488355628
     * @vftbl  14
     * @symbol  ?hasChunksAt\@AccessRecordingConstBlockSource\@\@UEBA_NAEBVAABB\@\@_N\@Z
     */
    virtual bool hasChunksAt(class AABB const &, bool) const;
    /**
     * @hash   2008360149
     * @vftbl  15
     * @symbol  ?getDimensionId\@AccessRecordingConstBlockSource\@\@UEBA?AV?$AutomaticID\@VDimension\@\@H\@\@XZ
     */
    virtual class AutomaticID<class Dimension, int> getDimensionId() const;
    /**
     * @hash   -317515730
     * @vftbl  16
     * @symbol  ?fetchAABBs\@AccessRecordingConstBlockSource\@\@UEBAXAEAV?$vector\@VAABB\@\@V?$allocator\@VAABB\@\@\@std\@\@\@std\@\@AEBVAABB\@\@_N\@Z
     */
    virtual void fetchAABBs(std::vector<class AABB> &, class AABB const &, bool) const;
    /**
     * @hash   1821115677
     * @vftbl  17
     * @symbol  ?fetchCollisionShapes\@AccessRecordingConstBlockSource\@\@UEBAXAEAV?$vector\@VAABB\@\@V?$allocator\@VAABB\@\@\@std\@\@\@std\@\@AEBVAABB\@\@PEAM_NV?$optional_ref\@$$CBVGetCollisionShapeInterface\@\@\@\@\@Z
     */
    virtual void fetchCollisionShapes(std::vector<class AABB> &, class AABB const &, float *, bool, class optional_ref<class GetCollisionShapeInterface const>) const;
    /**
     * @hash   387926042
     * @vftbl  18
     * @symbol  ?getTallestCollisionShape\@AccessRecordingConstBlockSource\@\@UEBA?AVAABB\@\@AEBV2\@PEAM_NV?$optional_ref\@$$CBVGetCollisionShapeInterface\@\@\@\@\@Z
     */
    virtual class AABB getTallestCollisionShape(class AABB const &, float *, bool, class optional_ref<class GetCollisionShapeInterface const>) const;
    /**
     * @vftbl  19
     * @symbol  ?getBrightness\@AccessRecordingConstBlockSource\@\@UEBAMAEBVBlockPos\@\@\@Z
     */
    virtual float getBrightness(class BlockPos const &) const;
    /**
     * @hash   -2066308974
     * @symbol  ??0AccessRecordingConstBlockSource\@\@QEAA\@V?$not_null\@PEBVIConstBlockSource\@\@\@gsl\@\@\@Z
     */
    MCAPI AccessRecordingConstBlockSource(class gsl::not_null<class IConstBlockSource const *>);
    /**
     * @hash   -449047716
     * @symbol  ?takeAccessedBlocks\@AccessRecordingConstBlockSource\@\@QEHAA?AUAccessedBlockSourceBlocks\@\@XZ
     */
    MCAPI struct AccessedBlockSourceBlocks takeAccessedBlocks();

};