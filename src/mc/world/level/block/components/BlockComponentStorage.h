#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/typeid_t.h"

class BlockComponentStorage {
public:
    // BlockComponentStorage inner types declare
    // clang-format off
    struct ComponentBase;
    // clang-format on

    // BlockComponentStorage inner types define
    struct ComponentBase {
    public:
        // virtual functions
        // NOLINTBEGIN
        // vIndex: 0
        virtual ~ComponentBase() = default;
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN

        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 56> mUnkbd91b3;
    ::ll::UntypedStorage<8, 40> mUnkce79bc;
    ::ll::UntypedStorage<1, 1>  mUnk3ed799;
    ::ll::UntypedStorage<1, 1>  mUnkfe00f1;
    ::ll::UntypedStorage<1, 1>  mUnkee4bb9;
    // NOLINTEND

public:
    // prevent constructor by default
    BlockComponentStorage& operator=(BlockComponentStorage const&);
    BlockComponentStorage(BlockComponentStorage const&);
    BlockComponentStorage();

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
