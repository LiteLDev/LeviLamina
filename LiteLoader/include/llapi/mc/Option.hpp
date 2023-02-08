/**
 * @file  Option.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
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
     * @symbol  __unk_destructor_0
     */
    virtual ~Option();
    /**
     * @hash   -1624698346
     * @vftbl  1
     * @symbol  ?save\@BoolOption\@\@UEAAXAEAV?$vector\@U?$pair\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V12\@\@std\@\@V?$allocator\@U?$pair\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V12\@\@std\@\@\@2\@\@std\@\@\@Z
     */
    virtual void save(std::vector<struct std::pair<std::string, std::string>> &) = 0;
    /**
     * @hash   -1174284081
     * @vftbl  2
     * @symbol  ?load\@BoolOption\@\@UEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    virtual void load(std::string const &) = 0;
    /**
     * @hash   1123686748
     * @vftbl  3
     * @symbol  ?load\@Option\@\@UEAAXAEAV?$map\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V12\@U?$less\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@V?$allocator\@U?$pair\@$$CBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V12\@\@std\@\@\@2\@\@std\@\@\@Z
     */
    virtual void load(class std::map<std::string, std::string, struct std::less<std::string>, class std::allocator<struct std::pair<std::string const, std::string>>> &);
    /**
     * @hash   1093371216
     * @vftbl  4
     * @symbol  ?load\@Option\@\@UEAAXAEBVValue\@Json\@\@\@Z
     */
    virtual void load(class Json::Value const &);
    /**
     * @hash   -619080829
     * @symbol  ??0Option\@\@QEAA\@W4OptionID\@\@W4OptionOwnerType\@\@W4OptionResetFlags\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@3W4OptionType\@\@\@Z
     */
    MCAPI Option(enum class OptionID, enum class OptionOwnerType, enum class OptionResetFlags, std::string const &, std::string const &, enum class OptionType);
    /**
     * @hash   1745291450
     * @symbol  ?canModify\@Option\@\@QEBA_NXZ
     */
    MCAPI bool canModify() const;
    /**
     * @hash   1697317686
     * @symbol  ?getBool\@Option\@\@QEBA_NXZ
     */
    MCAPI bool getBool() const;
    /**
     * @hash   -1644573400
     * @symbol  ?hasOverrideSource\@Option\@\@QEBA_NXZ
     */
    MCAPI bool hasOverrideSource() const;
    /**
     * @hash   -434436922
     * @symbol  ?notifyOptionValueChanged\@Option\@\@QEAAX_N\@Z
     */
    MCAPI void notifyOptionValueChanged(bool);
    /**
     * @hash   -2021632555
     * @symbol  ?registerLock\@Option\@\@QEAA?AVSubscription\@PubSub\@Bedrock\@\@V?$function\@$$A6AXAEA_N\@Z\@std\@\@\@Z
     */
    MCAPI class Bedrock::PubSub::Subscription registerLock(class std::function<void (bool &)>);
    /**
     * @hash   1209304948
     * @symbol  ?registerObserver\@Option\@\@QEAA?AVSubscription\@PubSub\@Bedrock\@\@V?$function\@$$A6AXAEBVOption\@\@\@Z\@std\@\@\@Z
     */
    MCAPI class Bedrock::PubSub::Subscription registerObserver(class std::function<void (class Option const &)>);
    /**
     * @hash   -1615434745
     * @symbol  ?setRequestSaveCallback\@Option\@\@QEAAXV?$function\@$$A6AX_N\@Z\@std\@\@\@Z
     */
    MCAPI void setRequestSaveCallback(class std::function<void (bool)>);
    /**
     * @hash   -172642813
     * @symbol  ?read\@Option\@\@SA_NAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEA_N\@Z
     */
    MCAPI static bool read(std::string const &, bool &);

//private:
    /**
     * @hash   -1120659735
     * @symbol  ?_updatePropertyVector\@Option\@\@AEAAXAEAV?$vector\@U?$pair\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V12\@\@std\@\@V?$allocator\@U?$pair\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V12\@\@std\@\@\@2\@\@std\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@3\@\@Z
     */
    MCAPI void _updatePropertyVector(std::vector<struct std::pair<std::string, std::string>> &, std::string const &);

private:

};