#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class IRandom;
// clang-format on

class PoolAliasBinding {
public:
    // PoolAliasBinding inner types declare
    // clang-format off
    class PoolAliasLookup;
    // clang-format on

    // PoolAliasBinding inner types define
    class PoolAliasLookup {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 24, ::std::vector<::std::pair<::std::string, ::std::string>>> mLookupTable;
        // NOLINTEND

    public:
        // member functions
        // NOLINTBEGIN
        MCAPI ~PoolAliasLookup();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCFOLD void $dtor();
        // NOLINTEND
    };

    using BoundAliasGroup = ::std::vector<::std::shared_ptr<::PoolAliasBinding>>;

    using Ptr = ::std::shared_ptr<::PoolAliasBinding>;

public:
    // virtual functions
    // NOLINTBEGIN
    virtual void
    appendResolvedAliases(::IRandom& random, ::PoolAliasBinding::PoolAliasLookup& inOutResolvedAliases) const = 0;

    virtual void forAllTargets(::std::function<void(::std::string const&, ::std::string const&)> const& fn) const = 0;

    virtual ~PoolAliasBinding() = default;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
