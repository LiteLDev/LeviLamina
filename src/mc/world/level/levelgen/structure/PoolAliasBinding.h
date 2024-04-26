#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/SimpleWeightedEntry.h"

class PoolAliasBinding {
public:
    // PoolAliasBinding inner types declare
    // clang-format off
    class PoolAliasLookup;
    // clang-format on

    // PoolAliasBinding inner types define
    class PoolAliasLookup {
    public:
        // prevent constructor by default
        PoolAliasLookup& operator=(PoolAliasLookup const&);
        PoolAliasLookup(PoolAliasLookup const&);
        PoolAliasLookup();

    public:
        // NOLINTBEGIN
        // symbol:
        // ?getOrDefault@PoolAliasLookup@PoolAliasBinding@@QEBA?AV?$basic_string_view@DU?$char_traits@D@std@@@std@@V34@0@Z
        MCAPI std::string_view getOrDefault(std::string_view, std::string_view) const;

        // symbol:
        // ?insert@PoolAliasLookup@PoolAliasBinding@@QEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@0@Z
        MCAPI void insert(std::string const&, std::string const&);

        // symbol: ??1PoolAliasLookup@PoolAliasBinding@@QEAA@XZ
        MCAPI ~PoolAliasLookup();

        // NOLINTEND
    };

public:
    // prevent constructor by default
    PoolAliasBinding& operator=(PoolAliasBinding const&);
    PoolAliasBinding(PoolAliasBinding const&);
    PoolAliasBinding();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol:
    // ?appendResolvedAliases@DirectPoolAliasBinding@PoolAliasBindingInternal@@UEBAXAEAVIRandom@@AEAVPoolAliasLookup@PoolAliasBinding@@@Z
    virtual void appendResolvedAliases(class IRandom&, class PoolAliasBinding::PoolAliasLookup&) const = 0;

    // vIndex: 1, symbol:
    // ?forAllTargets@DirectPoolAliasBinding@PoolAliasBindingInternal@@UEBAXAEBV?$function@$$A6AXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@0@Z@std@@@Z
    virtual void forAllTargets(std::function<void(std::string const&, std::string const&)> const&) const = 0;

    // vIndex: 2, symbol: __gen_??1PoolAliasBinding@@UEAA@XZ
    virtual ~PoolAliasBinding() = default;

    // symbol:
    // ?direct@PoolAliasBinding@@SA?AV?$shared_ptr@VPoolAliasBinding@@@std@@$$QEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@3@0@Z
    MCAPI static std::shared_ptr<class PoolAliasBinding> direct(std::string&&, std::string&&);

    // symbol:
    // ?random@PoolAliasBinding@@SA?AV?$shared_ptr@VPoolAliasBinding@@@std@@$$QEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@3@$$QEAV?$vector@U?$SimpleWeightedEntry@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Core@@V?$allocator@U?$SimpleWeightedEntry@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Core@@@std@@@3@@Z
    MCAPI static std::shared_ptr<class PoolAliasBinding>
    random(std::string&&, std::vector<struct Core::SimpleWeightedEntry<std::string>>&&);

    // symbol:
    // ?randomGroup@PoolAliasBinding@@SA?AV?$shared_ptr@VPoolAliasBinding@@@std@@$$QEAV?$vector@U?$SimpleWeightedEntry@V?$vector@V?$shared_ptr@VPoolAliasBinding@@@std@@V?$allocator@V?$shared_ptr@VPoolAliasBinding@@@std@@@2@@std@@@Core@@V?$allocator@U?$SimpleWeightedEntry@V?$vector@V?$shared_ptr@VPoolAliasBinding@@@std@@V?$allocator@V?$shared_ptr@VPoolAliasBinding@@@std@@@2@@std@@@Core@@@std@@@3@@Z
    MCAPI static std::shared_ptr<class PoolAliasBinding>
    randomGroup(std::vector<struct Core::SimpleWeightedEntry<std::vector<std::shared_ptr<class PoolAliasBinding>>>>&&);

    // symbol:
    // ?registerTargetsAsPools@PoolAliasBinding@@SAXAEAVJigsawStructureRegistry@@AEAUStructureTemplateRegistrationContext@@V?$basic_string_view@DU?$char_traits@D@std@@@std@@AEBV?$vector@V?$shared_ptr@VPoolAliasBinding@@@std@@V?$allocator@V?$shared_ptr@VPoolAliasBinding@@@std@@@2@@5@@Z
    MCAPI static void
    registerTargetsAsPools(class JigsawStructureRegistry&, struct StructureTemplateRegistrationContext&, std::string_view, std::vector<std::shared_ptr<class PoolAliasBinding>> const&);

    // symbol:
    // ?resolvePoolAliases@PoolAliasBinding@@SA?AVPoolAliasLookup@1@AEBV?$vector@V?$shared_ptr@VPoolAliasBinding@@@std@@V?$allocator@V?$shared_ptr@VPoolAliasBinding@@@std@@@2@@std@@AEBVBlockPos@@_J@Z
    MCAPI static class PoolAliasBinding::PoolAliasLookup
    resolvePoolAliases(std::vector<std::shared_ptr<class PoolAliasBinding>> const&, class BlockPos const&, int64);

    // NOLINTEND
};
