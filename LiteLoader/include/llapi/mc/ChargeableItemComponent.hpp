/**
 * @file  ChargeableItemComponent.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "cereal.hpp"
#include "ItemComponent.hpp"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class ChargeableItemComponent.
 *
 */
class ChargeableItemComponent : public ItemComponent {

#define AFTER_EXTRA

#undef AFTER_EXTRA
public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 3
     * @symbol ?isNetworkComponent\@ChargeableItemComponent\@\@UEBA_NXZ
     */
    virtual bool isNetworkComponent() const;
    /**
     * @vftbl 4
     * @symbol ?buildNetworkTag\@ChargeableItemComponent\@\@UEBA?AV?$unique_ptr\@VCompoundTag\@\@U?$default_delete\@VCompoundTag\@\@\@std\@\@\@std\@\@AEAUReflectionCtx\@cereal\@\@\@Z
     */
    virtual std::unique_ptr<class CompoundTag> buildNetworkTag(struct cereal::ReflectionCtx &) const;
    /**
     * @vftbl 5
     * @symbol ?initializeFromNetwork\@ChargeableItemComponent\@\@UEAA_NAEBVCompoundTag\@\@AEAUReflectionCtx\@cereal\@\@\@Z
     */
    virtual bool initializeFromNetwork(class CompoundTag const &, struct cereal::ReflectionCtx &);
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_CHARGEABLEITEMCOMPONENT
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~ChargeableItemComponent();
#endif
    /**
     * @symbol ??0ChargeableItemComponent\@\@QEAA\@AEBV0\@\@Z
     */
    MCAPI ChargeableItemComponent(class ChargeableItemComponent const &);
    /**
     * @symbol ??0ChargeableItemComponent\@\@QEAA\@XZ
     */
    MCAPI ChargeableItemComponent();
    /**
     * @symbol ?getMovementModifier\@ChargeableItemComponent\@\@QEBAMXZ
     */
    MCAPI float getMovementModifier() const;
    /**
     * @symbol ??4ChargeableItemComponent\@\@QEAAAEAV0\@$$QEAV0\@\@Z
     */
    MCAPI class ChargeableItemComponent & operator=(class ChargeableItemComponent &&);
    /**
     * @symbol ??4ChargeableItemComponent\@\@QEAAAEAV0\@AEBV0\@\@Z
     */
    MCAPI class ChargeableItemComponent & operator=(class ChargeableItemComponent const &);
    /**
     * @symbol ?use\@ChargeableItemComponent\@\@QEBA_NAEAVItemStack\@\@AEAVPlayer\@\@\@Z
     */
    MCAPI bool use(class ItemStack &, class Player &) const;
    /**
     * @symbol ?useTimeDepleted\@ChargeableItemComponent\@\@QEBAXAEAVItemStack\@\@AEAVPlayer\@\@AEAVLevel\@\@\@Z
     */
    MCAPI void useTimeDepleted(class ItemStack &, class Player &, class Level &) const;
    /**
     * @symbol ?bindType\@ChargeableItemComponent\@\@SAXAEAUReflectionCtx\@cereal\@\@AEBV?$vector\@W4AllExperiments\@\@V?$allocator\@W4AllExperiments\@\@\@std\@\@\@std\@\@V?$optional\@VSemVersion\@\@\@5\@\@Z
     */
    MCAPI static void bindType(struct cereal::ReflectionCtx &, std::vector<enum class AllExperiments> const &, class std::optional<class SemVersion>);
    /**
     * @symbol ?getIdentifier\@ChargeableItemComponent\@\@SAAEBVHashedString\@\@XZ
     */
    MCAPI static class HashedString const & getIdentifier();

};
