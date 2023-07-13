/**
 * @file  BlockGeometryDescription.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA


struct BlockGeometryDescription {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BLOCKGEOMETRYDESCRIPTION
public:
    struct BlockGeometryDescription& operator=(struct BlockGeometryDescription const &) = delete;
    BlockGeometryDescription(struct BlockGeometryDescription const &) = delete;
#endif

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?getName\@BlockGeometryDescription\@\@UEBAAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    virtual std::string const & getName() const;
    /**
     * @vftbl 2
     * @symbol __unk_vfn_2
     */
    virtual void __unk_vfn_2();
    /**
     * @vftbl 3
     * @symbol ?initializeComponent\@BlockGeometryDescription\@\@UEBAXAEAVEntityContext\@\@\@Z
     */
    virtual void initializeComponent(class EntityContext &) const;
    /**
     * @vftbl 4
     * @symbol ?initializeComponentFromCode\@BlockGeometryDescription\@\@UEBAXAEAVEntityContext\@\@\@Z
     */
    virtual void initializeComponentFromCode(class EntityContext &) const;
    /**
     * @vftbl 5
     * @symbol __unk_vfn_5
     */
    virtual void __unk_vfn_5();
    /**
     * @vftbl 6
     * @symbol ?isNetworkComponent\@?$NetworkedBlockComponentDescription\@UBlockGeometryDescription\@\@\@\@UEBA_NXZ
     */
    virtual bool isNetworkComponent() const;
    /**
     * @vftbl 7
     * @symbol ?buildNetworkTag\@?$NetworkedBlockComponentDescription\@UBlockGeometryDescription\@\@\@\@UEBA?AV?$unique_ptr\@VCompoundTag\@\@U?$default_delete\@VCompoundTag\@\@\@std\@\@\@std\@\@XZ
     */
    virtual std::unique_ptr<class CompoundTag> buildNetworkTag() const;
    /**
     * @vftbl 8
     * @symbol ?initializeFromNetwork\@?$NetworkedBlockComponentDescription\@UBlockGeometryDescription\@\@\@\@UEAAXAEBVCompoundTag\@\@\@Z
     */
    virtual void initializeFromNetwork(class CompoundTag const &);
    /**
     * @vftbl 9
     * @symbol ?handleVersionBasedInitialization\@BlockGeometryDescription\@\@UEAAXAEBVSemVersion\@\@\@Z
     */
    virtual void handleVersionBasedInitialization(class SemVersion const &);
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_BLOCKGEOMETRYDESCRIPTION
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~BlockGeometryDescription();
#endif
    /**
     * @symbol ??0BlockGeometryDescription\@\@QEAA\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI BlockGeometryDescription(std::string const &);
    /**
     * @symbol ??0BlockGeometryDescription\@\@QEAA\@XZ
     */
    MCAPI BlockGeometryDescription();
    /**
     * @symbol ?NameID\@BlockGeometryDescription\@\@2V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@B
     */
    MCAPI static std::string const NameID;
    /**
     * @symbol ?bindType\@BlockGeometryDescription\@\@SAXXZ
     */
    MCAPI static void bindType();

};