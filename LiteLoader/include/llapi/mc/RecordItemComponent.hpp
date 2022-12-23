/**
 * @file  RecordItemComponent.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class RecordItemComponent.
 *
 */
class RecordItemComponent {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_RECORDITEMCOMPONENT
public:
    class RecordItemComponent& operator=(class RecordItemComponent const &) = delete;
    RecordItemComponent(class RecordItemComponent const &) = delete;
    RecordItemComponent() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   -1851367129
     */
    virtual ~RecordItemComponent();
    /**
     * @vftbl  1
     * @symbol ?isNetworkComponent@?$NetworkedItemComponent@VRecordItemComponent@@@@UEBA_NXZ
     * @hash   792210632
     */
    virtual bool isNetworkComponent() const;
    /**
     * @vftbl  2
     * @hash   -1265373198
     */
    virtual void __unk_vfn_2();
    /**
     * @vftbl  3
     * @hash   -1256992317
     */
    virtual void __unk_vfn_3();
    /**
     * @vftbl  4
     * @hash   -1313821052
     */
    virtual void __unk_vfn_4();
    /**
     * @vftbl  5
     * @symbol ?buildNetworkTag@?$NetworkedItemComponent@VRecordItemComponent@@@@UEBA?AV?$unique_ptr@VCompoundTag@@U?$default_delete@VCompoundTag@@@std@@@std@@XZ
     * @hash   1319772970
     */
    virtual std::unique_ptr<class CompoundTag> buildNetworkTag() const;
    /**
     * @vftbl  6
     * @symbol ?initializeFromNetwork@?$NetworkedItemComponent@VRecordItemComponent@@@@UEAA_NAEBVCompoundTag@@@Z
     * @hash   788725430
     */
    virtual bool initializeFromNetwork(class CompoundTag const &);
    /**
     * @symbol ?getAlias@RecordItemComponent@@QEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     * @hash   -924157588
     */
    MCAPI std::string getAlias() const;
    /**
     * @symbol ?getComparatorSignal@RecordItemComponent@@QEBAHXZ
     * @hash   -187111104
     */
    MCAPI int getComparatorSignal() const;
    /**
     * @symbol ?getDuration@RecordItemComponent@@QEBAMXZ
     * @hash   -1254628838
     */
    MCAPI float getDuration() const;
    /**
     * @symbol ?getSound@RecordItemComponent@@QEBA?AW4LevelSoundEvent@@XZ
     * @hash   -1911455284
     */
    MCAPI enum class LevelSoundEvent getSound() const;
    /**
     * @symbol ?bindType@RecordItemComponent@@SAXXZ
     * @hash   508708063
     */
    MCAPI static void bindType();
    /**
     * @symbol ?getIdentifier@RecordItemComponent@@SAAEBVHashedString@@XZ
     * @hash   307459606
     */
    MCAPI static class HashedString const & getIdentifier();

};