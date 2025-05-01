#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/structure/structurepools/alias/PoolAliasBinding.h"

// auto generated forward declare list
// clang-format off
class IRandom;
// clang-format on

namespace PoolAliasBindingInternal {

class RandomGroupPoolAliasBinding : public ::PoolAliasBinding {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnkb4c9c3;
    // NOLINTEND

public:
    // prevent constructor by default
    RandomGroupPoolAliasBinding& operator=(RandomGroupPoolAliasBinding const&);
    RandomGroupPoolAliasBinding(RandomGroupPoolAliasBinding const&);
    RandomGroupPoolAliasBinding();

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
    virtual ~RandomGroupPoolAliasBinding() /*override*/ = default;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void
    $appendResolvedAliases(::IRandom& random, ::PoolAliasBinding::PoolAliasLookup& inOutResolvedAliases) const;

    MCNAPI void $forAllTargets(::std::function<void(::std::string const&, ::std::string const&)> const& fn) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace PoolAliasBindingInternal
