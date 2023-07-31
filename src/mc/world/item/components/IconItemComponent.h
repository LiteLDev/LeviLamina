#pragma once

#include "mc/_HeaderOutputPredefine.h"

class IconItemComponent {

public:
    // prevent constructor by default
    IconItemComponent& operator=(IconItemComponent const&) = delete;
    IconItemComponent(IconItemComponent const&)            = delete;
    IconItemComponent()                                    = delete;

public:
    // NOLINTBEGIN
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?isNetworkComponent\@?$NetworkedItemComponent\@VIconItemComponent\@\@\@\@UEBA_NXZ
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
     * ?buildNetworkTag\@?$NetworkedItemComponent\@VIconItemComponent\@\@\@\@UEBA?AV?$unique_ptr\@VCompoundTag\@\@U?$default_delete\@VCompoundTag\@\@\@std\@\@\@std\@\@XZ
     */
    virtual std::unique_ptr<class CompoundTag> buildNetworkTag() const;
    /**
     * @vftbl 5
     * @symbol ?initializeFromNetwork\@?$NetworkedItemComponent\@VIconItemComponent\@\@\@\@UEAA_NAEBVCompoundTag\@\@\@Z
     */
    virtual bool initializeFromNetwork(class CompoundTag const&);
    /**
     * @symbol ??0IconItemComponent\@\@QEAA\@PEAVComponentItem\@\@\@Z
     */
    MCAPI IconItemComponent(class ComponentItem*);
    /**
     * @symbol ?setOwnerIcon\@IconItemComponent\@\@QEAAXXZ
     */
    MCAPI void setOwnerIcon();
    /**
     * @symbol
     * ?setTexturePath\@IconItemComponent\@\@QEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI void setTexturePath(std::string const&);
    /**
     * @symbol ?bindType\@IconItemComponent\@\@SAXXZ
     */
    MCAPI static void bindType();
    /**
     * @symbol ?getIdentifier\@IconItemComponent\@\@SAAEBVHashedString\@\@XZ
     */
    MCAPI static class HashedString const& getIdentifier();
    // NOLINTEND
};
