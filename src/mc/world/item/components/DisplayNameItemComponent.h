#pragma once

#include "mc/_HeaderOutputPredefine.h"

class DisplayNameItemComponent {

public:
    // prevent constructor by default
    DisplayNameItemComponent& operator=(DisplayNameItemComponent const&) = delete;
    DisplayNameItemComponent(DisplayNameItemComponent const&)            = delete;
    DisplayNameItemComponent()                                           = delete;

public:
    // NOLINTBEGIN
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?isNetworkComponent\@?$NetworkedItemComponent\@VDisplayNameItemComponent\@\@\@\@UEBA_NXZ
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
     * ?buildNetworkTag\@?$NetworkedItemComponent\@VDisplayNameItemComponent\@\@\@\@UEBA?AV?$unique_ptr\@VCompoundTag\@\@U?$default_delete\@VCompoundTag\@\@\@std\@\@\@std\@\@XZ
     */
    virtual std::unique_ptr<class CompoundTag> buildNetworkTag() const;
    /**
     * @vftbl 5
     * @symbol
     * ?initializeFromNetwork\@?$NetworkedItemComponent\@VDisplayNameItemComponent\@\@\@\@UEAA_NAEBVCompoundTag\@\@\@Z
     */
    virtual bool initializeFromNetwork(class CompoundTag const&);
    /**
     * @symbol ??0DisplayNameItemComponent\@\@QEAA\@PEAVComponentItem\@\@\@Z
     */
    MCAPI DisplayNameItemComponent(class ComponentItem*);
    /**
     * @symbol ?bindType\@DisplayNameItemComponent\@\@SAXXZ
     */
    MCAPI static void bindType();
    /**
     * @symbol
     * ?getDescriptionId\@DisplayNameItemComponent\@\@QEBAAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    MCAPI std::string const& getDescriptionId() const;
    /**
     * @symbol ?getIdentifier\@DisplayNameItemComponent\@\@SAAEBVHashedString\@\@XZ
     */
    MCAPI static class HashedString const& getIdentifier();
    /**
     * @symbol
     * ?setDescriptionId\@DisplayNameItemComponent\@\@QEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI void setDescriptionId(std::string const&);
    // NOLINTEND
};
