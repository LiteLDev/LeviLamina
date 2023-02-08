/**
 * @file  ArmorItemComponent.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class ArmorItemComponent.
 *
 */
class ArmorItemComponent {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ARMORITEMCOMPONENT
public:
    class ArmorItemComponent& operator=(class ArmorItemComponent const &) = delete;
    ArmorItemComponent(class ArmorItemComponent const &) = delete;
    ArmorItemComponent() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~ArmorItemComponent();
    /**
     * @hash   1527283766
     * @vftbl  1
     * @symbol  ?isNetworkComponent\@?$NetworkedItemComponent\@VArmorItemComponent\@\@\@\@UEBA_NXZ
     */
    virtual bool isNetworkComponent() const;
    /**
     * @vftbl  2
     * @symbol  __unk_vfn_2
     */
    virtual void __unk_vfn_2();
    /**
     * @vftbl  3
     * @symbol  __unk_vfn_3
     */
    virtual void __unk_vfn_3();
    /**
     * @vftbl  4
     * @symbol  __unk_vfn_4
     */
    virtual void __unk_vfn_4();
    /**
     * @hash   1755854312
     * @vftbl  5
     * @symbol  ?buildNetworkTag\@?$NetworkedItemComponent\@VArmorItemComponent\@\@\@\@UEBA?AV?$unique_ptr\@VCompoundTag\@\@U?$default_delete\@VCompoundTag\@\@\@std\@\@\@std\@\@XZ
     */
    virtual std::unique_ptr<class CompoundTag> buildNetworkTag() const;
    /**
     * @hash   1032503208
     * @vftbl  6
     * @symbol  ?initializeFromNetwork\@?$NetworkedItemComponent\@VArmorItemComponent\@\@\@\@UEAA_NAEBVCompoundTag\@\@\@Z
     */
    virtual bool initializeFromNetwork(class CompoundTag const &);
    /**
     * @hash   1203095118
     * @symbol  ?getArmorTextureType\@ArmorItemComponent\@\@QEBA?AW4ArmorTextureType\@\@XZ
     */
    MCAPI enum class ArmorTextureType getArmorTextureType() const;
    /**
     * @hash   24661302
     * @symbol  ?getArmorValue\@ArmorItemComponent\@\@QEBAHXZ
     */
    MCAPI int getArmorValue() const;
    /**
     * @hash   467479555
     * @symbol  ?bindType\@ArmorItemComponent\@\@SAXXZ
     */
    MCAPI static void bindType();
    /**
     * @hash   120350098
     * @symbol  ?getIdentifier\@ArmorItemComponent\@\@SAAEBVHashedString\@\@XZ
     */
    MCAPI static class HashedString const & getIdentifier();

};