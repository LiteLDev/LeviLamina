#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/typeid_t.h"
#include "mc/platform/brstd/flat_map.h"
#include "mc/platform/brstd/flat_set.h"

class BlockComponentStorage {
public:
    // BlockComponentStorage inner types declare
    // clang-format off
    struct ComponentBase;
    template<typename T0> struct ComponentInstance;
    // clang-format on

    // BlockComponentStorage inner types define
    struct ComponentBase {
    public:
        // virtual functions
        // NOLINTBEGIN
        virtual ~ComponentBase() = default;
        // NOLINTEND
    };

    template <typename T0>
    struct ComponentInstance {};

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<
        8,
        56,
        ::brstd::flat_map<
            ::Bedrock::typeid_t<void>,
            ::std::unique_ptr<::BlockComponentStorage::ComponentBase>,
            ::std::less<::Bedrock::typeid_t<void>>,
            ::std::vector<::Bedrock::typeid_t<void>>,
            ::std::vector<::std::unique_ptr<::BlockComponentStorage::ComponentBase>>>>
        mComponents;
    ::ll::TypedStorage<
        8,
        40,
        ::brstd::flat_set<
            ::Bedrock::typeid_t<void>,
            ::std::less<::Bedrock::typeid_t<void>>,
            ::std::vector<::Bedrock::typeid_t<void>>>>
                                   mStatelessComponents;
    ::ll::TypedStorage<1, 1, bool> mAllowModifyingComponents;
    ::ll::TypedStorage<1, 1, bool> mAllowComponentReplacement;
    ::ll::TypedStorage<1, 1, bool> mAllowTryGetComponentBeforeFinalization;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void _addStatelessComponent(::Bedrock::typeid_t<void> typeId);

    MCAPI ~BlockComponentStorage();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};
