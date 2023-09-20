/**
 * @file  BlockSelectionBoxDescription.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "JsonUtil.hpp"
#include "cereal.hpp"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA


struct BlockSelectionBoxDescription {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BLOCKSELECTIONBOXDESCRIPTION
public:
    struct BlockSelectionBoxDescription& operator=(struct BlockSelectionBoxDescription const &) = delete;
    BlockSelectionBoxDescription(struct BlockSelectionBoxDescription const &) = delete;
    BlockSelectionBoxDescription() = delete;
#endif

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?getName\@BlockSelectionBoxDescription\@\@UEBAAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    virtual std::string const & getName() const;
    /**
     * @vftbl 3
     * @symbol ?initializeComponent\@BlockSelectionBoxDescription\@\@UEBAXAEAVBlockComponentStorage\@\@\@Z
     */
    virtual void initializeComponent(class BlockComponentStorage &) const;
    /**
     * @vftbl 5
     * @symbol ?initializeComponentFromCode\@BlockSelectionBoxDescription\@\@UEBAXAEAVBlockComponentStorage\@\@\@Z
     */
    virtual void initializeComponentFromCode(class BlockComponentStorage &) const;
    /**
     * @vftbl 7
     * @symbol ?isNetworkComponent\@BlockSelectionBoxDescription\@\@UEBA_NXZ
     */
    virtual bool isNetworkComponent() const;
    /**
     * @vftbl 8
     * @symbol ?buildNetworkTag\@BlockSelectionBoxDescription\@\@UEBA?AV?$unique_ptr\@VCompoundTag\@\@U?$default_delete\@VCompoundTag\@\@\@std\@\@\@std\@\@AEAUReflectionCtx\@cereal\@\@\@Z
     */
    virtual std::unique_ptr<class CompoundTag> buildNetworkTag(struct cereal::ReflectionCtx &) const;
    /**
     * @vftbl 9
     * @symbol ?initializeFromNetwork\@BlockSelectionBoxDescription\@\@UEAAXAEBVCompoundTag\@\@AEAUReflectionCtx\@cereal\@\@\@Z
     */
    virtual void initializeFromNetwork(class CompoundTag const &, struct cereal::ReflectionCtx &);
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_BLOCKSELECTIONBOXDESCRIPTION
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~BlockSelectionBoxDescription();
#endif
    /**
     * @symbol ??0BlockSelectionBoxDescription\@\@QEAA\@_N\@Z
     */
    MCAPI BlockSelectionBoxDescription(bool);
    /**
     * @symbol ??0BlockSelectionBoxDescription\@\@QEAA\@AEBVVec3\@\@0\@Z
     */
    MCAPI BlockSelectionBoxDescription(class Vec3 const &, class Vec3 const &);
    /**
     * @symbol ?NameID\@BlockSelectionBoxDescription\@\@2V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@B
     */
    MCAPI static std::string const NameID;
    /**
     * @symbol ?bindType\@BlockSelectionBoxDescription\@\@SAXAEAUReflectionCtx\@cereal\@\@\@Z
     */
    MCAPI static void bindType(struct cereal::ReflectionCtx &);

};