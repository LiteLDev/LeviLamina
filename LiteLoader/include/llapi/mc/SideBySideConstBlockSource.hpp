/**
 * @file  SideBySideConstBlockSource.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

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
     * @hash   789370248
     * @vftbl  1
     * @symbol  ?getBlock\@SideBySideConstBlockSource\@\@UEBAAEBVBlock\@\@HHH\@Z
     */
    virtual class Block const & getBlock(int, int, int) const;
    /**
     * @hash   1184936995
     * @vftbl  2
     * @symbol  ?getBlock\@SideBySideConstBlockSource\@\@UEBAAEBVBlock\@\@AEBVBlockPos\@\@\@Z
     */
    virtual class Block const & getBlock(class BlockPos const &) const;
    /**
     * @hash   183313253
     * @vftbl  3
     * @symbol  ?getBlock\@SideBySideConstBlockSource\@\@UEBAAEBVBlock\@\@AEBVBlockPos\@\@I\@Z
     */
    virtual class Block const & getBlock(class BlockPos const &, unsigned int) const;
    /**
     * @hash   1548404807
     * @vftbl  4
     * @symbol  ?getBlockEntity\@SideBySideConstBlockSource\@\@UEBAPEBVBlockActor\@\@AEBVBlockPos\@\@\@Z
     */
    virtual class BlockActor const * getBlockEntity(class BlockPos const &) const;
    /**
     * @hash   -559859609
     * @vftbl  5
     * @symbol  ?getExtraBlock\@SideBySideConstBlockSource\@\@UEBAAEBVBlock\@\@AEBVBlockPos\@\@\@Z
     */
    virtual class Block const & getExtraBlock(class BlockPos const &) const;
    /**
     * @hash   1026997631
     * @vftbl  6
     * @symbol  ?getLiquidBlock\@SideBySideConstBlockSource\@\@UEBAAEBVBlock\@\@AEBVBlockPos\@\@\@Z
     */
    virtual class Block const & getLiquidBlock(class BlockPos const &) const;
    /**
     * @hash   158933015
     * @vftbl  7
     * @symbol  ?hasBlock\@SideBySideConstBlockSource\@\@UEBA_NAEBVBlockPos\@\@\@Z
     */
    virtual bool hasBlock(class BlockPos const &) const;
    /**
     * @hash   -645376856
     * @vftbl  8
     * @symbol  ?containsAnyLiquid\@SideBySideConstBlockSource\@\@UEBA_NAEBVAABB\@\@\@Z
     */
    virtual bool containsAnyLiquid(class AABB const &) const;
    /**
     * @hash   1539486742
     * @vftbl  9
     * @symbol  ?containsMaterial\@SideBySideConstBlockSource\@\@UEBA_NAEBVAABB\@\@W4MaterialType\@\@\@Z
     */
    virtual bool containsMaterial(class AABB const &, enum class MaterialType) const;
    /**
     * @hash   369664079
     * @vftbl  10
     * @symbol  ?getMaterial\@SideBySideConstBlockSource\@\@UEBAAEBVMaterial\@\@AEBVBlockPos\@\@\@Z
     */
    virtual class Material const & getMaterial(class BlockPos const &) const;
    /**
     * @hash   -928430476
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
     * @hash   -1459716403
     * @vftbl  15
     * @symbol  ?getDimensionId\@SideBySideConstBlockSource\@\@UEBA?AV?$AutomaticID\@VDimension\@\@H\@\@XZ
     */
    virtual class AutomaticID<class Dimension, int> getDimensionId() const;
    /**
     * @hash   1638213222
     * @vftbl  16
     * @symbol  ?fetchAABBs\@SideBySideConstBlockSource\@\@UEBAXAEAV?$vector\@VAABB\@\@V?$allocator\@VAABB\@\@\@std\@\@\@std\@\@AEBVAABB\@\@_N\@Z
     */
    virtual void fetchAABBs(std::vector<class AABB> &, class AABB const &, bool) const;
    /**
     * @hash   -1674742971
     * @vftbl  17
     * @symbol  ?fetchCollisionShapes\@SideBySideConstBlockSource\@\@UEBAXAEAV?$vector\@VAABB\@\@V?$allocator\@VAABB\@\@\@std\@\@\@std\@\@AEBVAABB\@\@PEAM_NV?$optional_ref\@$$CBVGetCollisionShapeInterface\@\@\@\@\@Z
     */
    virtual void fetchCollisionShapes(std::vector<class AABB> &, class AABB const &, float *, bool, class optional_ref<class GetCollisionShapeInterface const>) const;
    /**
     * @hash   -1680874110
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
     * @hash   543252820
     * @symbol  ?hasChunksAt\@SideBySideConstBlockSource\@\@UEBA_NAEBUBounds\@\@_N\@Z
     */
    MCVAPI bool hasChunksAt(struct Bounds const &, bool) const;
    /**
     * @hash   1314718300
     * @symbol  ?hasChunksAt\@SideBySideConstBlockSource\@\@UEBA_NAEBVAABB\@\@_N\@Z
     */
    MCVAPI bool hasChunksAt(class AABB const &, bool) const;
    /**
     * @hash   1524454164
     * @symbol  ?hasChunksAt\@SideBySideConstBlockSource\@\@UEBA_NAEBVBlockPos\@\@H_N\@Z
     */
    MCVAPI bool hasChunksAt(class BlockPos const &, int, bool) const;
#endif
    /**
     * @hash   -1451421146
     * @symbol  ??0SideBySideConstBlockSource\@\@QEAA\@V?$not_null\@PEBUAccessedBlockSourceBlocks\@\@\@gsl\@\@_K\@Z
     */
    MCAPI SideBySideConstBlockSource(class gsl::not_null<struct AccessedBlockSourceBlocks const *>, unsigned __int64);
    /**
     * @hash   -985520507
     * @symbol  ?getCurrentIndex\@SideBySideConstBlockSource\@\@QEBA_KXZ
     */
    MCAPI unsigned __int64 getCurrentIndex() const;

};