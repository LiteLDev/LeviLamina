#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/math/SimpleWeightedEntry.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
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
        ::ll::UntypedStorage<8, 24> mUnkbb4557;
        // NOLINTEND

    public:
        // prevent constructor by default
        PoolAliasLookup& operator=(PoolAliasLookup const&);
        PoolAliasLookup(PoolAliasLookup const&);
        PoolAliasLookup();

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

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual void appendResolvedAliases(::IRandom&, ::PoolAliasBinding::PoolAliasLookup&) const = 0;

    // vIndex: 1
    virtual void forAllTargets(::std::function<void(::std::string const&, ::std::string const&)> const&) const = 0;

    // vIndex: 2
    virtual ~PoolAliasBinding() = default;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::std::shared_ptr<::PoolAliasBinding> direct(::std::string&& id, ::std::string&& target);

    MCNAPI static ::std::shared_ptr<::PoolAliasBinding>
    random(::std::string&& id, ::std::vector<::Core::SimpleWeightedEntry<::std::string>>&& targets);

    MCNAPI static ::PoolAliasBinding::PoolAliasLookup resolvePoolAliases(
        ::std::vector<::std::shared_ptr<::PoolAliasBinding>> const& aliases,
        ::BlockPos const&                                           structureStartPosition,
        int64                                                       levelSeed
    );
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
