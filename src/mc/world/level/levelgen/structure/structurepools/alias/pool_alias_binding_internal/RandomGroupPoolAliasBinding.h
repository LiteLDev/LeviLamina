#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/math/SimpleWeightedEntry.h"
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
    ::ll::TypedStorage<
        8,
        24,
        ::std::vector<::Core::SimpleWeightedEntry<::std::vector<::std::shared_ptr<::PoolAliasBinding>>>>>
        mGroups;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual void
    appendResolvedAliases(::IRandom& random, ::PoolAliasBinding::PoolAliasLookup& inOutResolvedAliases) const
        /*override*/;

    virtual void forAllTargets(::std::function<void(::std::string const&, ::std::string const&)> const& fn) const
        /*override*/;

    virtual ~RandomGroupPoolAliasBinding() /*override*/ = default;
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
