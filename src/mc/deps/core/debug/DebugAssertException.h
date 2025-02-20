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
    MCAPI DebugAssertException(::DebugAssertException const&);

    MCAPI explicit DebugAssertException(::AssertHandlerContext context);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::DebugAssertException const&);

    MCAPI void* $ctor(::AssertHandlerContext context);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI char const* $what() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
