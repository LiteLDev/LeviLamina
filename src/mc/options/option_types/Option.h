#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Bedrock::PubSub { class Subscription; }
namespace Json { class Value; }
// clang-format on

class Option {
public:
    // Option inner types declare
    // clang-format off
    class Impl;
    // clang-format on

    // Option inner types define
    class Impl {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_OPTION_IMPL
    public:
        Impl& operator=(Impl const&) = delete;
        Impl(Impl const&)            = delete;
        Impl()                       = delete;
#endif

    public:
        /**
         * @symbol ??1Impl\@Option\@\@QEAA\@XZ
         */
        MCAPI ~Impl();
    };

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_OPTION
public:
    Option& operator=(Option const&) = delete;
    Option(Option const&)            = delete;
    Option()                         = delete;
#endif

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol
     * ?save\@BoolOption\@\@UEAAXAEAV?$vector\@U?$pair\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V12\@\@std\@\@V?$allocator\@U?$pair\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V12\@\@std\@\@\@2\@\@std\@\@\@Z
     */
    virtual void save(std::vector<struct std::pair<std::string, std::string>>&) = 0;
    /**
     * @vftbl 2
     * @symbol ?load\@BoolOption\@\@UEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    virtual void load(std::string const&) = 0;
    /**
     * @vftbl 3
     * @symbol
     * ?load\@Option\@\@UEAAXAEAV?$map\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V12\@U?$less\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@V?$allocator\@U?$pair\@$$CBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V12\@\@std\@\@\@2\@\@std\@\@\@Z
     */
    virtual void load(class std::map<
                      std::string,
                      std::string,
                      struct std::less<std::string>,
                      class std::allocator<struct std::pair<std::string const, std::string>>>&);
    /**
     * @vftbl 4
     * @symbol ?load\@Option\@\@UEAAXAEBVValue\@Json\@\@\@Z
     */
    virtual void load(class Json::Value const&);
    /**
     * @symbol ?canModify\@Option\@\@QEBA_NXZ
     */
    MCAPI bool canModify() const;
    /**
     * @symbol ?getBool\@Option\@\@QEBA_NXZ
     */
    MCAPI bool getBool() const;
    /**
     * @symbol ?notifyOptionValueChanged\@Option\@\@QEAAX_N\@Z
     */
    MCAPI void notifyOptionValueChanged(bool);
    /**
     * @symbol ?registerLock\@Option\@\@QEAA?AVSubscription\@PubSub\@Bedrock\@\@V?$function\@$$A6AXAEA_N\@Z\@std\@\@\@Z
     */
    MCAPI class Bedrock::PubSub::Subscription registerLock(class std::function<void(bool&)>);
    /**
     * @symbol
     * ?registerObserver\@Option\@\@QEAA?AVSubscription\@PubSub\@Bedrock\@\@V?$function\@$$A6AXAEBVOption\@\@\@Z\@std\@\@\@Z
     */
    MCAPI class Bedrock::PubSub::Subscription registerObserver(class std::function<void(class Option const&)>);
    /**
     * @symbol ?read\@Option\@\@SA_NAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEA_N\@Z
     */
    MCAPI static bool read(std::string const&, bool&);

    // private:
    /**
     * @symbol
     * ?_updatePropertyVector\@Option\@\@AEAAXAEAV?$vector\@U?$pair\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V12\@\@std\@\@V?$allocator\@U?$pair\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V12\@\@std\@\@\@2\@\@std\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@3\@\@Z
     */
    MCAPI void _updatePropertyVector(std::vector<struct std::pair<std::string, std::string>>&, std::string const&);

private:
};
