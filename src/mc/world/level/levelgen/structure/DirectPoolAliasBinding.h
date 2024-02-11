#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/structure/PoolAliasBinding.h"

// auto generated forward declare list
// clang-format off
class IRandom;
class PoolAliasBinding;
// clang-format on

namespace PoolAliasBindingInternal {

class DirectPoolAliasBinding : public ::PoolAliasBinding {
public:
    // prevent constructor by default
    DirectPoolAliasBinding& operator=(DirectPoolAliasBinding const&);
    DirectPoolAliasBinding(DirectPoolAliasBinding const&);
    DirectPoolAliasBinding();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol:
    // ?appendResolvedAliases@DirectPoolAliasBinding@PoolAliasBindingInternal@@UEBAXAEAVIRandom@@AEAVPoolAliasLookup@PoolAliasBinding@@@Z
    virtual void appendResolvedAliases(class IRandom&, class PoolAliasBinding::PoolAliasLookup&) const;

    // vIndex: 1, symbol:
    // ?forAllTargets@DirectPoolAliasBinding@PoolAliasBindingInternal@@UEBAXAEBV?$function@$$A6AXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@0@Z@std@@@Z
    virtual void forAllTargets(std::function<void(std::string const&, std::string const&)> const&) const;

    // vIndex: 2, symbol: __gen_??1DirectPoolAliasBinding@PoolAliasBindingInternal@@UEAA@XZ
    virtual ~DirectPoolAliasBinding() = default;

    // NOLINTEND
};

}; // namespace PoolAliasBindingInternal
