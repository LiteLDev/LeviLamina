/**
 * @file  RaidTriggerDescription.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Json.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class RaidTriggerDescription.
 *
 */
class RaidTriggerDescription {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_RAIDTRIGGERDESCRIPTION
public:
    class RaidTriggerDescription& operator=(class RaidTriggerDescription const &) = delete;
    RaidTriggerDescription(class RaidTriggerDescription const &) = delete;
    RaidTriggerDescription() = delete;
#endif

public:
    /**
     * @hash   950063526
     * @vftbl  0
     * @symbol ?getJsonName@RaidTriggerDescription@@UEBAPEBDXZ
     */
    virtual char const * getJsonName() const;
    /**
     * @vftbl  1
     * @symbol __unk_destructor_1
     */
    virtual ~RaidTriggerDescription();
    /**
     * @hash   1240599533
     * @vftbl  2
     * @symbol ?deserializeData@RaidTriggerDescription@@UEAAXUDeserializeDataParams@@@Z
     */
    virtual void deserializeData(struct DeserializeDataParams);
    /**
     * @hash   1694661911
     * @vftbl  3
     * @symbol ?serializeData@RaidTriggerDescription@@UEBAXAEAVValue@Json@@@Z
     */
    virtual void serializeData(class Json::Value &) const;

};