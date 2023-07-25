#pragma once

#include "mc/_HeaderOutputPredefine.h"

class CooldownItemComponent {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_COOLDOWNITEMCOMPONENT
public:
    CooldownItemComponent& operator=(CooldownItemComponent const&) = delete;
    CooldownItemComponent(CooldownItemComponent const&)            = delete;
    CooldownItemComponent()                                        = delete;
#endif

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?isNetworkComponent\@?$NetworkedItemComponent\@VCooldownItemComponent\@\@\@\@UEBA_NXZ
     */
    virtual bool isNetworkComponent() const;
    /**
     * @vftbl 2
     * @symbol __unk_vfn_2
     */
    virtual void __unk_vfn_2();
    /**
     * @vftbl 3
     * @symbol __unk_vfn_3
     */
    virtual void __unk_vfn_3();
    /**
     * @vftbl 4
     * @symbol
     * ?buildNetworkTag\@?$NetworkedItemComponent\@VCooldownItemComponent\@\@\@\@UEBA?AV?$unique_ptr\@VCompoundTag\@\@U?$default_delete\@VCompoundTag\@\@\@std\@\@\@std\@\@XZ
     */
    virtual std::unique_ptr<class CompoundTag> buildNetworkTag() const;
    /**
     * @vftbl 5
     * @symbol
     * ?initializeFromNetwork\@?$NetworkedItemComponent\@VCooldownItemComponent\@\@\@\@UEAA_NAEBVCompoundTag\@\@\@Z
     */
    virtual bool initializeFromNetwork(class CompoundTag const&);
    /**
     * @symbol ?bindType\@CooldownItemComponent\@\@SAXXZ
     */
    MCAPI static void bindType();
    /**
     * @symbol ?getIdentifier\@CooldownItemComponent\@\@SAAEBVHashedString\@\@XZ
     */
    MCAPI static class HashedString const& getIdentifier();
};
