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
    public:
        // prevent constructor by default
        Impl& operator=(Impl const&);
        Impl(Impl const&);
        Impl();

    public:
        // NOLINTBEGIN
        // symbol: ??1Impl@Option@@QEAA@XZ
        MCAPI ~Impl();

        // NOLINTEND
    };

public:
    // prevent constructor by default
    Option& operator=(Option const&);
    Option(Option const&);
    Option();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1@@UEAA@XZ
    virtual ~Option() = default;

    // vIndex: 1, symbol:
    // ?save@BoolOption@@UEAAXAEAV?$vector@U?$pair@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V12@@std@@V?$allocator@U?$pair@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V12@@std@@@2@@std@@@Z
    virtual void save(std::vector<std::pair<std::string, std::string>>&) = 0;

    // vIndex: 2, symbol: ?load@BoolOption@@UEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    virtual void load(std::string const&) = 0;

    // vIndex: 3, symbol:
    // ?load@Option@@UEAAXAEAV?$map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V12@U?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V12@@std@@@2@@std@@@Z
    virtual void load(std::map<std::string, std::string>&);

    // vIndex: 4, symbol: ?load@Option@@UEAAXAEBVValue@Json@@@Z
    virtual void load(class Json::Value const&);

    // symbol: ?canModify@Option@@QEBA_NXZ
    MCAPI bool canModify() const;

    // symbol: ?getBool@Option@@QEBA_NXZ
    MCAPI bool getBool() const;

    // symbol: ?hasOverrideSource@Option@@QEBA_NXZ
    MCAPI bool hasOverrideSource() const;

    // symbol: ?notifyOptionValueChanged@Option@@QEAAX_N@Z
    MCAPI void notifyOptionValueChanged(bool);

    // symbol: ?registerLock@Option@@QEAA?AVSubscription@PubSub@Bedrock@@V?$function@$$A6AXAEA_N@Z@std@@@Z
    MCAPI class Bedrock::PubSub::Subscription registerLock(std::function<void(bool&)>);

    // symbol: ?registerObserver@Option@@QEAA?AVSubscription@PubSub@Bedrock@@V?$function@$$A6AXAEBVOption@@@Z@std@@@Z
    MCAPI class Bedrock::PubSub::Subscription registerObserver(std::function<void(class Option const&)>);

    // symbol: ?setRequestSaveCallback@Option@@QEAAXV?$function@$$A6AX_N@Z@std@@@Z
    MCAPI void setRequestSaveCallback(std::function<void(bool)>);

    // symbol: ?read@Option@@SA_NAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEA_N@Z
    MCAPI static bool read(std::string const&, bool&);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol:
    // ?_updatePropertyVector@Option@@AEAAXAEAV?$vector@U?$pair@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V12@@std@@V?$allocator@U?$pair@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V12@@std@@@2@@std@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@3@@Z
    MCAPI void _updatePropertyVector(std::vector<std::pair<std::string, std::string>>&, std::string const&);

    // NOLINTEND
};
