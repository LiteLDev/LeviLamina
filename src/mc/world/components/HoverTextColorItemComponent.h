#pragma once

#include "mc/_HeaderOutputPredefine.h"

class HoverTextColorItemComponent {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_HOVERTEXTCOLORITEMCOMPONENT
public:
    HoverTextColorItemComponent& operator=(HoverTextColorItemComponent const&) = delete;
    HoverTextColorItemComponent(HoverTextColorItemComponent const&)            = delete;
    HoverTextColorItemComponent()                                              = delete;
#endif

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?isNetworkComponent\@?$NetworkedItemComponent\@VHoverTextColorItemComponent\@\@\@\@UEBA_NXZ
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
     * ?buildNetworkTag\@?$NetworkedItemComponent\@VHoverTextColorItemComponent\@\@\@\@UEBA?AV?$unique_ptr\@VCompoundTag\@\@U?$default_delete\@VCompoundTag\@\@\@std\@\@\@std\@\@XZ
     */
    virtual std::unique_ptr<class CompoundTag> buildNetworkTag() const;
    /**
     * @vftbl 5
     * @symbol
     * ?initializeFromNetwork\@?$NetworkedItemComponent\@VHoverTextColorItemComponent\@\@\@\@UEAA_NAEBVCompoundTag\@\@\@Z
     */
    virtual bool initializeFromNetwork(class CompoundTag const&);
    /**
     * @vftbl 6
     * @symbol __unk_vfn_6
     */
    virtual void __unk_vfn_6();
    /**
     * @vftbl 7
     * @symbol ?initializeComponent\@HoverTextColorItemComponent\@\@UEBAXXZ
     */
    virtual void initializeComponent() const;
    /**
     * @symbol ?bindType\@HoverTextColorItemComponent\@\@SAXXZ
     */
    MCAPI static void bindType();
    /**
     * @symbol ?getIdentifier\@HoverTextColorItemComponent\@\@SAAEBVHashedString\@\@XZ
     */
    MCAPI static class HashedString const& getIdentifier();
};
