#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
struct AssertHandlerContext;
// clang-format on

class DebugAssertException : public ::std::exception {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 168> mUnkc1f125;
    ::ll::UntypedStorage<8, 32>  mUnkd8bc9e;
    // NOLINTEND

public:
    // prevent constructor by default
    DebugAssertException& operator=(DebugAssertException const&);
    DebugAssertException();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 1
    virtual char const* what() const /*override*/;

    // vIndex: 0
    virtual ~DebugAssertException() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI DebugAssertException(::DebugAssertException const&);

    MCNAPI explicit DebugAssertException(::AssertHandlerContext context);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::DebugAssertException const&);

    MCNAPI void* $ctor(::AssertHandlerContext context);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI char const* $what() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
