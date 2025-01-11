#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
struct BlockComponentDescription;
// clang-format on

struct BlockComponentGroupDescription {
public:
    // BlockComponentGroupDescription inner types declare
    // clang-format off
    struct Components;
    // clang-format on

    // BlockComponentGroupDescription inner types define
    struct Components {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 64> mUnka139a3;
        // NOLINTEND

    public:
        // prevent constructor by default
        Components(Components const&);
        Components();

    public:
        // member functions
        // NOLINTBEGIN
        MCFOLD ::BlockComponentGroupDescription::Components&
        operator=(::BlockComponentGroupDescription::Components const&);

        MCAPI ~Components();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCFOLD void $dtor();
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 64> mUnke08dc0;
    ::ll::UntypedStorage<8, 24> mUnkd8d4e6;
    ::ll::UntypedStorage<8, 24> mUnkd642d2;
    // NOLINTEND

public:
    // prevent constructor by default
    BlockComponentGroupDescription();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI BlockComponentGroupDescription(::BlockComponentGroupDescription&&);

    MCAPI BlockComponentGroupDescription(::BlockComponentGroupDescription const&);

    MCAPI void addComponentDescription(::std::shared_ptr<::BlockComponentDescription> desc);

    MCAPI ::BlockComponentGroupDescription& operator=(::BlockComponentGroupDescription&&);

    MCAPI ::BlockComponentGroupDescription& operator=(::BlockComponentGroupDescription const&);

    MCAPI ~BlockComponentGroupDescription();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::BlockComponentGroupDescription&&);

    MCAPI void* $ctor(::BlockComponentGroupDescription const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
