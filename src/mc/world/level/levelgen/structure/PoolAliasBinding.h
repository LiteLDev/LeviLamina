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
        // ?insert@PoolAliasLookup@PoolAliasBinding@@QEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@0@Z
        MCAPI void insert(std::string const&, std::string const&);

        // symbol:
        // ?lookup@PoolAliasLookup@PoolAliasBinding@@QEBAPEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBV34@@Z
        MCAPI std::string const* lookup(std::string const&) const;

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
    // symbol:
    // ?direct@PoolAliasBinding@@SA?AV?$unique_ptr@VPoolAliasBinding@@U?$default_delete@VPoolAliasBinding@@@std@@@std@@$$QEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@3@0@Z
    MCAPI static std::unique_ptr<class PoolAliasBinding> direct(std::string&&, std::string&&);

    // symbol:
    // ?random@PoolAliasBinding@@SA?AV?$unique_ptr@VPoolAliasBinding@@U?$default_delete@VPoolAliasBinding@@@std@@@std@@$$QEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@3@$$QEAV?$vector@U?$SimpleWeightedEntry@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Core@@V?$allocator@U?$SimpleWeightedEntry@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Core@@@std@@@3@@Z
    MCAPI static std::unique_ptr<class PoolAliasBinding>
    random(std::string&&, std::vector<struct Core::SimpleWeightedEntry<std::string>>&&);

    // symbol:
    // ?randomGroup@PoolAliasBinding@@SA?AV?$unique_ptr@VPoolAliasBinding@@U?$default_delete@VPoolAliasBinding@@@std@@@std@@$$QEAV?$vector@U?$SimpleWeightedEntry@V?$vector@V?$unique_ptr@VPoolAliasBinding@@U?$default_delete@VPoolAliasBinding@@@std@@@std@@V?$allocator@V?$unique_ptr@VPoolAliasBinding@@U?$default_delete@VPoolAliasBinding@@@std@@@std@@@2@@std@@@Core@@V?$allocator@U?$SimpleWeightedEntry@V?$vector@V?$unique_ptr@VPoolAliasBinding@@U?$default_delete@VPoolAliasBinding@@@std@@@std@@V?$allocator@V?$unique_ptr@VPoolAliasBinding@@U?$default_delete@VPoolAliasBinding@@@std@@@std@@@2@@std@@@Core@@@std@@@3@@Z
    MCAPI static std::unique_ptr<class PoolAliasBinding>
    randomGroup(std::vector<struct Core::SimpleWeightedEntry<std::vector<std::unique_ptr<class PoolAliasBinding>>>>&&);

    // symbol:
    // ?registerTargetsAsPools@PoolAliasBinding@@SAXAEAVJigsawStructureRegistry@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBV?$vector@V?$unique_ptr@VPoolAliasBinding@@U?$default_delete@VPoolAliasBinding@@@std@@@std@@V?$allocator@V?$unique_ptr@VPoolAliasBinding@@U?$default_delete@VPoolAliasBinding@@@std@@@std@@@2@@4@@Z
    MCAPI static void
    registerTargetsAsPools(class JigsawStructureRegistry&, std::string const&, std::vector<std::unique_ptr<class PoolAliasBinding>> const&);

    // symbol:
    // ?resolvePoolAliases@PoolAliasBinding@@SA?AVPoolAliasLookup@1@AEBV?$vector@V?$unique_ptr@VPoolAliasBinding@@U?$default_delete@VPoolAliasBinding@@@std@@@std@@V?$allocator@V?$unique_ptr@VPoolAliasBinding@@U?$default_delete@VPoolAliasBinding@@@std@@@std@@@2@@std@@AEBVBlockPos@@_J@Z
    MCAPI static class PoolAliasBinding::PoolAliasLookup
    resolvePoolAliases(std::vector<std::unique_ptr<class PoolAliasBinding>> const&, class BlockPos const&, int64);

    // NOLINTEND
};
