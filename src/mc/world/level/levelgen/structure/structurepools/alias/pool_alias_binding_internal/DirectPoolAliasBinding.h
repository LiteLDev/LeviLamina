#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/structure/structurepools/alias/PoolAliasBinding.h"

// auto generated forward declare list
// clang-format off
class IRandom;
// clang-format on

namespace PoolAliasBindingInternal {

class DirectPoolAliasBinding : public ::PoolAliasBinding {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnkf9effd;
    ::ll::UntypedStorage<8, 32> mUnk24d6f4;
    // NOLINTEND

public:
    // prevent constructor by default
    DirectPoolAliasBinding& operator=(DirectPoolAliasBinding const&);
    DirectPoolAliasBinding(DirectPoolAliasBinding const&);
    DirectPoolAliasBinding();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual void appendResolvedAliases(::IRandom&, ::PoolAliasBinding::PoolAliasLookup& inOutResolvedAliases) const
        /*override*/;

    virtual void forAllTargets(::std::function<void(::std::string const&, ::std::string const&)> const& fn) const
        /*override*/;

    virtual ~DirectPoolAliasBinding() /*override*/ = default;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $appendResolvedAliases(::IRandom&, ::PoolAliasBinding::PoolAliasLookup& inOutResolvedAliases) const;

    MCNAPI void $forAllTargets(::std::function<void(::std::string const&, ::std::string const&)> const& fn) const;


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace PoolAliasBindingInternal
