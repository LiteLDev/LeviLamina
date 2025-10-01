#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/structure/structurepools/alias/PoolAliasBinding.h"

// auto generated forward declare list
// clang-format off
class IRandom;
// clang-format on

namespace PoolAliasBindingInternal {

class RandomPoolAliasBinding : public ::PoolAliasBinding {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnk2d5346;
    ::ll::UntypedStorage<8, 24> mUnk9a1ea3;
    // NOLINTEND

public:
    // prevent constructor by default
    RandomPoolAliasBinding& operator=(RandomPoolAliasBinding const&);
    RandomPoolAliasBinding(RandomPoolAliasBinding const&);
    RandomPoolAliasBinding();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual void
    appendResolvedAliases(::IRandom& random, ::PoolAliasBinding::PoolAliasLookup& inOutResolvedAliases) const
        /*override*/;

    // vIndex: 1
    virtual void forAllTargets(::std::function<void(::std::string const&, ::std::string const&)> const& fn) const
        /*override*/;

    // vIndex: 2
    virtual ~RandomPoolAliasBinding() /*override*/ = default;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void
    $appendResolvedAliases(::IRandom& random, ::PoolAliasBinding::PoolAliasLookup& inOutResolvedAliases) const;

    MCAPI void $forAllTargets(::std::function<void(::std::string const&, ::std::string const&)> const& fn) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace PoolAliasBindingInternal
