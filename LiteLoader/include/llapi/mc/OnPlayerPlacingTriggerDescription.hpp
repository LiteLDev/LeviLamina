/**
 * @file  OnPlayerPlacingTriggerDescription.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "JsonUtil.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class OnPlayerPlacingTriggerDescription.
 *
 */
class OnPlayerPlacingTriggerDescription {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ONPLAYERPLACINGTRIGGERDESCRIPTION
public:
    class OnPlayerPlacingTriggerDescription& operator=(class OnPlayerPlacingTriggerDescription const &) = delete;
    OnPlayerPlacingTriggerDescription(class OnPlayerPlacingTriggerDescription const &) = delete;
    OnPlayerPlacingTriggerDescription() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~OnPlayerPlacingTriggerDescription();
    /**
     * @hash   -199309295
     * @vftbl  1
     * @symbol  ?getName\@OnPlayerPlacingTriggerDescription\@\@UEBAAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    virtual std::string const & getName() const;
    /**
     * @hash   -136965927
     * @vftbl  4
     * @symbol  ?isNetworkComponent\@OnPlayerPlacingTriggerDescription\@\@UEBA_NXZ
     */
    virtual bool isNetworkComponent() const;
    /**
     * @hash   -1722149509
     * @vftbl  5
     * @symbol  ?buildNetworkTag\@OnPlayerPlacingTriggerDescription\@\@UEBA?AV?$unique_ptr\@VCompoundTag\@\@U?$default_delete\@VCompoundTag\@\@\@std\@\@\@std\@\@XZ
     */
    virtual std::unique_ptr<class CompoundTag> buildNetworkTag() const;
    /**
     * @hash   1840379639
     * @vftbl  6
     * @symbol  ?initializeFromNetwork\@OnPlayerPlacingTriggerDescription\@\@UEAAXAEBVCompoundTag\@\@\@Z
     */
    virtual void initializeFromNetwork(class CompoundTag const &);
    /**
     * @hash   296335029
     * @symbol  ?NameID\@OnPlayerPlacingTriggerDescription\@\@2V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@B
     */
    MCAPI static std::string const NameID;

};