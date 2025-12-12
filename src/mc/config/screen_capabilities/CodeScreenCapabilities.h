#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/config/TypedScreenCapabilities.h"

struct CodeScreenCapabilities : public ::TypedScreenCapabilities<::CodeScreenCapabilities> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnk767636;
    ::ll::UntypedStorage<8, 32> mUnkf672b1;
    ::ll::UntypedStorage<8, 32> mUnkb566c6;
    // NOLINTEND

public:
    // prevent constructor by default
    CodeScreenCapabilities& operator=(CodeScreenCapabilities const&);
    CodeScreenCapabilities(CodeScreenCapabilities const&);
    CodeScreenCapabilities();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~CodeScreenCapabilities() /*override*/;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
