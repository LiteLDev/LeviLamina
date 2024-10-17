#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/structure/structurepools/alias/PoolAliasBinding.h"

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
    // vIndex: 0
    virtual void
    appendResolvedAliases(class IRandom&, class PoolAliasBinding::PoolAliasLookup& inOutResolvedAliases) const;

    // vIndex: 1
    virtual void forAllTargets(std::function<void(std::string const&, std::string const&)> const& fn) const;

    // vIndex: 2
    virtual ~DirectPoolAliasBinding() = default;

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** vftable();

    MCAPI void
    appendResolvedAliases$(class IRandom&, class PoolAliasBinding::PoolAliasLookup& inOutResolvedAliases) const;

    MCAPI void forAllTargets$(std::function<void(std::string const&, std::string const&)> const& fn) const;

    // NOLINTEND
};

}; // namespace PoolAliasBindingInternal
