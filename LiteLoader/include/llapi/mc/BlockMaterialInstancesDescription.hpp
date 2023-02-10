/**
 * @file  BlockMaterialInstancesDescription.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC structure BlockMaterialInstancesDescription.
 *
 */
struct BlockMaterialInstancesDescription {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BLOCKMATERIALINSTANCESDESCRIPTION
public:
    struct BlockMaterialInstancesDescription& operator=(struct BlockMaterialInstancesDescription const &) = delete;
    BlockMaterialInstancesDescription(struct BlockMaterialInstancesDescription const &) = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~BlockMaterialInstancesDescription();
    /**
     * @hash   508623319
     * @vftbl  1
     * @symbol  ?getName\@BlockMaterialInstancesDescription\@\@UEBAAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    virtual std::string const & getName() const;
    /**
     * @hash   2049482445
     * @vftbl  2
     * @symbol  ?initializeComponent\@BlockMaterialInstancesDescription\@\@UEBAXAEAVEntityContext\@\@\@Z
     */
    virtual void initializeComponent(class EntityContext &) const;
    /**
     * @vftbl  3
     * @symbol  __unk_vfn_3
     */
    virtual void __unk_vfn_3();
    /**
     * @hash   1964530511
     * @vftbl  4
     * @symbol  ?isNetworkComponent\@BlockMaterialInstancesDescription\@\@UEBA_NXZ
     */
    virtual bool isNetworkComponent() const;
    /**
     * @hash   -247203007
     * @vftbl  5
     * @symbol  ?buildNetworkTag\@BlockMaterialInstancesDescription\@\@UEBA?AV?$unique_ptr\@VCompoundTag\@\@U?$default_delete\@VCompoundTag\@\@\@std\@\@\@std\@\@XZ
     */
    virtual std::unique_ptr<class CompoundTag> buildNetworkTag() const;
    /**
     * @hash   -1502972527
     * @vftbl  6
     * @symbol  ?initializeFromNetwork\@BlockMaterialInstancesDescription\@\@UEAAXAEBVCompoundTag\@\@\@Z
     */
    virtual void initializeFromNetwork(class CompoundTag const &);
    /**
     * @hash   -1058648130
     * @symbol  ??0BlockMaterialInstancesDescription\@\@QEAA\@XZ
     */
    MCAPI BlockMaterialInstancesDescription();
    /**
     * @hash   1808567377
     * @symbol  ?NameID\@BlockMaterialInstancesDescription\@\@2V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@B
     */
    MCAPI static std::string const NameID;
    /**
     * @hash   647070127
     * @symbol  ?bindType\@BlockMaterialInstancesDescription\@\@SAXXZ
     */
    MCAPI static void bindType();

};