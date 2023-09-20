/**
 * @file  InteractButtonItemComponent.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "cereal.hpp"
#include "ItemComponent.hpp"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA


class InteractButtonItemComponent : public ItemComponent {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_INTERACTBUTTONITEMCOMPONENT
public:
    InteractButtonItemComponent(class InteractButtonItemComponent const &) = delete;
#endif

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 3
     * @symbol ?isNetworkComponent\@InteractButtonItemComponent\@\@UEBA_NXZ
     */
    virtual bool isNetworkComponent() const;
    /**
     * @vftbl 4
     * @symbol ?buildNetworkTag\@InteractButtonItemComponent\@\@UEBA?AV?$unique_ptr\@VCompoundTag\@\@U?$default_delete\@VCompoundTag\@\@\@std\@\@\@std\@\@AEAUReflectionCtx\@cereal\@\@\@Z
     */
    virtual std::unique_ptr<class CompoundTag> buildNetworkTag(struct cereal::ReflectionCtx &) const;
    /**
     * @vftbl 5
     * @symbol ?initializeFromNetwork\@InteractButtonItemComponent\@\@UEAA_NAEBVCompoundTag\@\@AEAUReflectionCtx\@cereal\@\@\@Z
     */
    virtual bool initializeFromNetwork(class CompoundTag const &, struct cereal::ReflectionCtx &);
    /**
     * @vftbl 9
     * @symbol ?_initializeComponent\@InteractButtonItemComponent\@\@UEBAXXZ
     */
    virtual void _initializeComponent() const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_INTERACTBUTTONITEMCOMPONENT
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~InteractButtonItemComponent();
#endif
    /**
     * @symbol ??0InteractButtonItemComponent\@\@QEAA\@XZ
     */
    MCAPI InteractButtonItemComponent();
    /**
     * @symbol ?getInteractText\@InteractButtonItemComponent\@\@QEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    MCAPI std::string getInteractText() const;
    /**
     * @symbol ??4InteractButtonItemComponent\@\@QEAAAEAV0\@AEBV0\@\@Z
     */
    MCAPI class InteractButtonItemComponent & operator=(class InteractButtonItemComponent const &);
    /**
     * @symbol ?bindType\@InteractButtonItemComponent\@\@SAXAEAUReflectionCtx\@cereal\@\@AEBV?$vector\@W4AllExperiments\@\@V?$allocator\@W4AllExperiments\@\@\@std\@\@\@std\@\@V?$optional\@VSemVersion\@\@\@5\@\@Z
     */
    MCAPI static void bindType(struct cereal::ReflectionCtx &, std::vector<enum class AllExperiments> const &, class std::optional<class SemVersion>);
    /**
     * @symbol ?getIdentifier\@InteractButtonItemComponent\@\@SAAEBVHashedString\@\@XZ
     */
    MCAPI static class HashedString const & getIdentifier();

};
