/**
 * @file  Option.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Json.hpp"
#include "Bedrock.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class Option.
 *
 */
class Option {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_OPTION
public:
    class Option& operator=(class Option const &) = delete;
    Option(class Option const &) = delete;
    Option() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol __unk_destructor_0
     */
    virtual ~Option();
    /**
     * @hash   -1624698346
     * @vftbl  1
     * @symbol ?save@BoolOption@@UEAAXAEAV?$vector@U?$pair@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V12@@std@@V?$allocator@U?$pair@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V12@@std@@@2@@std@@@Z
     */
    virtual void save(std::vector<struct std::pair<std::string, std::string>> &) = 0;
    /**
     * @hash   -1174284081
     * @vftbl  2
     * @symbol ?load@BoolOption@@UEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     */
    virtual void load(std::string const &) = 0;
    /**
     * @hash   1968997724
     * @vftbl  3
     * @symbol ?load@Option@@UEAAXAEAV?$map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V12@U?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V12@@std@@@2@@std@@@Z
     */
    virtual void load(class std::map<std::string, std::string, struct std::less<std::string>, class std::allocator<struct std::pair<std::string const, std::string>>> &);
    /**
     * @hash   1938666816
     * @vftbl  4
     * @symbol ?load@Option@@UEAAXAEBVValue@Json@@@Z
     */
    virtual void load(class Json::Value const &);
    /**
     * @hash   225046195
     * @symbol ??0Option@@QEAA@W4OptionID@@W4OptionOwnerType@@W4OptionResetFlags@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@3W4OptionType@@@Z
     */
    MCAPI Option(enum OptionID, enum OptionOwnerType, enum OptionResetFlags, std::string const &, std::string const &, enum OptionType);
    /**
     * @hash   -1704364870
     * @symbol ?canModify@Option@@QEBA_NXZ
     */
    MCAPI bool canModify() const;
    /**
     * @hash   -1752338634
     * @symbol ?getBool@Option@@QEBA_NXZ
     */
    MCAPI bool getBool() const;
    /**
     * @hash   -799262424
     * @symbol ?hasOverrideSource@Option@@QEBA_NXZ
     */
    MCAPI bool hasOverrideSource() const;
    /**
     * @hash   410843302
     * @symbol ?notifyOptionValueChanged@Option@@QEAAX_N@Z
     */
    MCAPI void notifyOptionValueChanged(bool);
    /**
     * @hash   -1176367707
     * @symbol ?registerLock@Option@@QEAA?AVSubscription@PubSub@Bedrock@@V?$function@$$A6AXAEA_N@Z@std@@@Z
     */
    MCAPI class Bedrock::PubSub::Subscription registerLock(class std::function<void (bool &)>);
    /**
     * @hash   2054508292
     * @symbol ?registerObserver@Option@@QEAA?AVSubscription@PubSub@Bedrock@@V?$function@$$A6AXAEBVOption@@@Z@std@@@Z
     */
    MCAPI class Bedrock::PubSub::Subscription registerObserver(class std::function<void (class Option const &)>);
    /**
     * @hash   -770262153
     * @symbol ?setRequestSaveCallback@Option@@QEAAXV?$function@$$A6AX_N@Z@std@@@Z
     */
    MCAPI void setRequestSaveCallback(class std::function<void (bool)>);
    /**
     * @hash   672622035
     * @symbol ?read@Option@@SA_NAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEA_N@Z
     */
    MCAPI static bool read(std::string const &, bool &);

//private:
    /**
     * @hash   -275348759
     * @symbol ?_updatePropertyVector@Option@@AEAAXAEAV?$vector@U?$pair@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V12@@std@@V?$allocator@U?$pair@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V12@@std@@@2@@std@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@3@@Z
     */
    MCAPI void _updatePropertyVector(std::vector<struct std::pair<std::string, std::string>> &, std::string const &);

private:

};