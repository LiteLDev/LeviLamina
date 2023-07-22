/**
 * @file  SideBySideConstBlockSource.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "liteloader/api/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class SideBySideConstBlockSource.
 *
 */
class SideBySideConstBlockSource {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SIDEBYSIDECONSTBLOCKSOURCE
public:
    class SideBySideConstBlockSource& operator=(class SideBySideConstBlockSource const &) = delete;
    SideBySideConstBlockSource(class SideBySideConstBlockSource const &) = delete;
    SideBySideConstBlockSource() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~SideBySideConstBlockSource();
    /**
     * @vftbl  1
     * @symbol  ?getBlock\@SideBySideConstBlockSource\@\@UEBAAEBVBlock\@\@HHH\@Z
     */
    virtual class Block const & getBlock(int, int, int) const;
    /**
     * @vftbl  2
     * @symbol  ?getBlock\@SideBySideConstBlockSource\@\@UEBAAEBVBlock\@\@AEBVBlockPos\@\@\@Z
     */
    virtual class Block const & getBlock(class BlockPos const &) const;
    /**
     * @vftbl  3
     * @symbol  ?getBlock\@SideBySideConstBlockSource\@\@UEBAAEBVBlock\@\@AEBVBlockPos\@\@I\@Z
     */
    virtual class Block const & getBlock(class BlockPos const &, unsigned int) const;
    /**
     * @vftbl  4
     * @symbol  ?getBlockEntity\@SideBySideConstBlockSource\@\@UEBAPEBVBlockActor\@\@AEBVBlockPos\@\@\@Z
     */
    virtual class BlockActor const * getBlockEntity(class BlockPos const &) const;
    /**
     * @vftbl  5
     * @symbol  ?getExtraBlock\@SideBySideConstBlockSource\@\@UEBAAEBVBlock\@\@AEBVBlockPos\@\@\@Z
     */
    virtual class Block const & getExtraBlock(class BlockPos const &) const;
    /**
     * @vftbl  6
     * @symbol  ?getLiquidBlock\@SideBySideConstBlockSource\@\@UEBAAEBVBlock\@\@AEBVBlockPos\@\@\@Z
     */
    virtual class Block const & getLiquidBlock(class BlockPos const &) const;
    /**
     * @vftbl  7
     * @symbol  ?hasBlock\@SideBySideConstBlockSource\@\@UEBA_NAEBVBlockPos\@\@\@Z
     */
    virtual bool hasBlock(class BlockPos const &) const;
    /**
     * @vftbl  8
     * @symbol  ?containsAnyLiquid\@SideBySideConstBlockSource\@\@UEBA_NAEBVAABB\@\@\@Z
     */
    virtual bool containsAnyLiquid(class AABB const &) const;
    /**
     * @vftbl  9
     * @symbol  ?containsMaterial\@SideBySideConstBlockSource\@\@UEBA_NAEBVAABB\@\@W4MaterialType\@\@\@Z
     */
    virtual bool containsMaterial(class AABB const &, enum class MaterialType) const;
    /**
     * @vftbl  10
     * @symbol  ?getMaterial\@SideBySideConstBlockSource\@\@UEBAAEBVMaterial\@\@AEBVBlockPos\@\@\@Z
     */
    virtual class Material const & getMaterial(class BlockPos const &) const;
    /**
     * @vftbl  11
     * @symbol  ?getMaterial\@SideBySideConstBlockSource\@\@UEBAAEBVMaterial\@\@HHH\@Z
     */
    virtual class Material const & getMaterial(int, int, int) const;
    /**
     * @vftbl  12
     * @symbol  __unk_vfn_12
     */
    virtual void __unk_vfn_12();
    /**
     * @vftbl  13
     * @symbol  __unk_vfn_13
     */
    virtual void __unk_vfn_13();
    /**
     * @vftbl  14
     * @symbol  __unk_vfn_14
     */
    virtual void __unk_vfn_14();
    /**
     * @vftbl  15
     * @symbol  ?getDimensionId\@SideBySideConstBlockSource\@\@UEBA?AV?$AutomaticID\@VDimension\@\@H\@\@XZ
     */
    virtual class AutomaticID<class Dimension, int> getDimensionId() const;
    /**
     * @vftbl  16
     * @symbol  ?fetchAABBs\@SideBySideConstBlockSource\@\@UEBAXAEAV?$vector\@VAABB\@\@V?$allocator\@VAABB\@\@\@std\@\@\@std\@\@AEBVAABB\@\@_N\@Z
     */
    virtual void fetchAABBs(std::vector<class AABB> &, class AABB const &, bool) const;
    /**
     * @vftbl  17
     * @symbol  ?fetchCollisionShapes\@SideBySideConstBlockSource\@\@UEBAXAEAV?$vector\@VAABB\@\@V?$allocator\@VAABB\@\@\@std\@\@\@std\@\@AEBVAABB\@\@PEAM_NV?$optional_ref\@$$CBVGetCollisionShapeInterface\@\@\@\@\@Z
     */
    virtual void fetchCollisionShapes(std::vector<class AABB> &, class AABB const &, float *, bool, class optional_ref<class GetCollisionShapeInterface const>) const;
    /**
     * @vftbl  18
     * @symbol  ?getTallestCollisionShape\@SideBySideConstBlockSource\@\@UEBA?AVAABB\@\@AEBV2\@PEAM_NV?$optional_ref\@$$CBVGetCollisionShapeInterface\@\@\@\@\@Z
     */
    virtual class AABB getTallestCollisionShape(class AABB const &, float *, bool, class optional_ref<class GetCollisionShapeInterface const>) const;
    /**
     * @vftbl  19
     * @symbol  ?getBrightness\@SideBySideConstBlockSource\@\@UEBAMAEBVBlockPos\@\@\@Z
     */
    virtual float getBrightness(class BlockPos const &) const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_SIDEBYSIDECONSTBLOCKSOURCE
    /**
     * @symbol  ?hasChunksAt\@SideBySideConstBlockSource\@\@UEBA_NAEBUBounds\@\@_N\@Z
     */
    MCVAPI bool hasChunksAt(struct Bounds const &, bool) const;
    /**
     * @symbol  ?hasChunksAt\@SideBySideConstBlockSource\@\@UEBA_NAEBVAABB\@\@_N\@Z
     */
    MCVAPI bool hasChunksAt(class AABB const &, bool) const;
    /**
     * @symbol  ?hasChunksAt\@SideBySideConstBlockSource\@\@UEBA_NAEBVBlockPos\@\@H_N\@Z
     */
    MCVAPI bool hasChunksAt(class BlockPos const &, int, bool) const;
#endif
    /**
     * @symbol  ??0SideBySideConstBlockSource\@\@QEAA\@V?$not_null\@PEBUAccessedBlockSourceBlocks\@\@\@gsl\@\@_K\@Z
     */
    MCAPI SideBySideConstBlockSource(class gsl::not_null<struct AccessedBlockSourceBlocks const *>, unsigned __int64);
    /**
     * @symbol  ?getCurrentIndex\@SideBySideConstBlockSource\@\@QEBA_KXZ
     */
    MCAPI unsigned __int64 getCurrentIndex() const;

};