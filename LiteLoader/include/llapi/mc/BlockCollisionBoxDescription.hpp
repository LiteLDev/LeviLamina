/**
 * @file  BlockCollisionBoxDescription.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA


struct BlockCollisionBoxDescription {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BLOCKCOLLISIONBOXDESCRIPTION
public:
    struct BlockCollisionBoxDescription& operator=(struct BlockCollisionBoxDescription const &) = delete;
    BlockCollisionBoxDescription(struct BlockCollisionBoxDescription const &) = delete;
    BlockCollisionBoxDescription() = delete;
#endif

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?getName\@BlockCollisionBoxDescription\@\@UEBAAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    virtual std::string const & getName() const;
    /**
     * @vftbl 2
     * @symbol ?initializeComponent\@BlockCollisionBoxDescription\@\@UEBAXAEAVEntityContext\@\@\@Z
     */
    virtual void initializeComponent(class EntityContext &) const;
    /**
     * @vftbl 3
     * @symbol ?initializeComponentFromCode\@BlockCollisionBoxDescription\@\@UEBAXAEAVEntityContext\@\@\@Z
     */
    virtual void initializeComponentFromCode(class EntityContext &) const;
    /**
     * @vftbl 4
     * @symbol __unk_vfn_4
     */
    virtual void __unk_vfn_4();
    /**
     * @vftbl 5
     * @symbol ?isNetworkComponent\@BlockCollisionBoxDescription\@\@UEBA_NXZ
     */
    virtual bool isNetworkComponent() const;
    /**
     * @vftbl 6
     * @symbol ?buildNetworkTag\@BlockCollisionBoxDescription\@\@UEBA?AV?$unique_ptr\@VCompoundTag\@\@U?$default_delete\@VCompoundTag\@\@\@std\@\@\@std\@\@XZ
     */
    virtual std::unique_ptr<class CompoundTag> buildNetworkTag() const;
    /**
     * @vftbl 7
     * @symbol ?initializeFromNetwork\@BlockCollisionBoxDescription\@\@UEAAXAEBVCompoundTag\@\@\@Z
     */
    virtual void initializeFromNetwork(class CompoundTag const &);
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_BLOCKCOLLISIONBOXDESCRIPTION
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~BlockCollisionBoxDescription();
#endif
    /**
     * @symbol ??0BlockCollisionBoxDescription\@\@QEAA\@AEBVVec3\@\@0\@Z
     */
    MCAPI BlockCollisionBoxDescription(class Vec3 const &, class Vec3 const &);
    /**
     * @symbol ??0BlockCollisionBoxDescription\@\@QEAA\@_N\@Z
     */
    MCAPI BlockCollisionBoxDescription(bool);
    /**
     * @symbol ?NameID\@BlockCollisionBoxDescription\@\@2V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@B
     */
    MCAPI static std::string const NameID;
    /**
     * @symbol ?bindType\@BlockCollisionBoxDescription\@\@SAXXZ
     */
    MCAPI static void bindType();

};