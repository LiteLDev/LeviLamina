/**
 * @file  RecordItemComponent.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

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
     * @symbol  __unk_destructor_0
     */
    virtual ~RecordItemComponent();
    /**
     * @vftbl  1
     * @symbol  ?isNetworkComponent\@?$NetworkedItemComponent\@VRecordItemComponent\@\@\@\@UEBA_NXZ
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
     * @vftbl  5
     * @symbol  ?buildNetworkTag\@?$NetworkedItemComponent\@VRecordItemComponent\@\@\@\@UEBA?AV?$unique_ptr\@VCompoundTag\@\@U?$default_delete\@VCompoundTag\@\@\@std\@\@\@std\@\@XZ
     */
    virtual std::unique_ptr<class CompoundTag> buildNetworkTag() const;
    /**
     * @vftbl  6
     * @symbol  ?initializeFromNetwork\@?$NetworkedItemComponent\@VRecordItemComponent\@\@\@\@UEAA_NAEBVCompoundTag\@\@\@Z
     */
    virtual bool initializeFromNetwork(class CompoundTag const &);
    /**
     * @symbol  ?getAlias\@RecordItemComponent\@\@QEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    MCAPI std::string getAlias() const;
    /**
     * @symbol  ?getComparatorSignal\@RecordItemComponent\@\@QEBAHXZ
     */
    MCAPI int getComparatorSignal() const;
    /**
     * @symbol  ?getDuration\@RecordItemComponent\@\@QEBAMXZ
     */
    MCAPI float getDuration() const;
    /**
     * @symbol  ?getSound\@RecordItemComponent\@\@QEBA?AW4LevelSoundEvent\@\@XZ
     */
    MCAPI enum class LevelSoundEvent getSound() const;
    /**
     * @symbol  ?bindType\@RecordItemComponent\@\@SAXXZ
     */
    MCAPI static void bindType();
    /**
     * @symbol  ?getIdentifier\@RecordItemComponent\@\@SAAEBVHashedString\@\@XZ
     */
    MCAPI static class HashedString const & getIdentifier();

};