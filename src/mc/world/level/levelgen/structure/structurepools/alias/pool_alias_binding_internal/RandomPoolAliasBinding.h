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

class RandomPoolAliasBinding : public ::PoolAliasBinding {
public:
    // prevent constructor by default
    RandomPoolAliasBinding& operator=(RandomPoolAliasBinding const&);
    RandomPoolAliasBinding(RandomPoolAliasBinding const&);
    RandomPoolAliasBinding();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual void
    appendResolvedAliases(class IRandom& random, class PoolAliasBinding::PoolAliasLookup& inOutResolvedAliases) const;

    // vIndex: 1
    virtual void forAllTargets(std::function<void(std::string const&, std::string const&)> const& fn) const;

    // vIndex: 2
    virtual ~RandomPoolAliasBinding() = default;

    // NOLINTEND
};

}; // namespace PoolAliasBindingInternal
