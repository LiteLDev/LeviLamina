/**
 * @file  BlockRotationDescription.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC structure BlockRotationDescription.
 *
 */
struct BlockRotationDescription {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BLOCKROTATIONDESCRIPTION
public:
    struct BlockRotationDescription& operator=(struct BlockRotationDescription const &) = delete;
    BlockRotationDescription(struct BlockRotationDescription const &) = delete;
    BlockRotationDescription() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~BlockRotationDescription();
    /**
     * @hash   2098838568
     * @vftbl  1
     * @symbol  ?getName\@BlockRotationDescription\@\@UEBAAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    virtual std::string const & getName() const;
    /**
     * @hash   -1349745892
     * @vftbl  2
     * @symbol  ?initializeComponent\@BlockRotationDescription\@\@UEBAXAEAVEntityContext\@\@\@Z
     */
    virtual void initializeComponent(class EntityContext &) const;
    /**
     * @vftbl  3
     * @symbol  __unk_vfn_3
     */
    virtual void __unk_vfn_3();
    /**
     * @hash   -2134878704
     * @vftbl  4
     * @symbol  ?isNetworkComponent\@BlockRotationDescription\@\@UEBA_NXZ
     */
    virtual bool isNetworkComponent() const;
    /**
     * @hash   1890038146
     * @vftbl  5
     * @symbol  ?buildNetworkTag\@BlockRotationDescription\@\@UEBA?AV?$unique_ptr\@VCompoundTag\@\@U?$default_delete\@VCompoundTag\@\@\@std\@\@\@std\@\@XZ
     */
    virtual std::unique_ptr<class CompoundTag> buildNetworkTag() const;
    /**
     * @hash   635169504
     * @vftbl  6
     * @symbol  ?initializeFromNetwork\@BlockRotationDescription\@\@UEAAXAEBVCompoundTag\@\@\@Z
     */
    virtual void initializeFromNetwork(class CompoundTag const &);
    /**
     * @hash   1346257397
     * @symbol  ?NameID\@BlockRotationDescription\@\@2V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@B
     */
    MCAPI static std::string const NameID;
    /**
     * @hash   2051131043
     * @symbol  ?bindType\@BlockRotationDescription\@\@SAXXZ
     */
    MCAPI static void bindType();

};