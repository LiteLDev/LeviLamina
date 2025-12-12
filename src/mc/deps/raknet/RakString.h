#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/raknet/data_structures/List.h"

namespace RakNet {

class RakString {
public:
    // RakString inner types declare
    // clang-format off
    struct SharedString;
    // clang-format on

    // RakString inner types define
    struct SharedString {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 8>   mUnka2f925;
        ::ll::UntypedStorage<4, 4>   mUnk59de61;
        ::ll::UntypedStorage<8, 8>   mUnk35e35d;
        ::ll::UntypedStorage<8, 8>   mUnka4bdce;
        ::ll::UntypedStorage<8, 8>   mUnke2527f;
        ::ll::UntypedStorage<1, 100> mUnk58a7f9;
        // NOLINTEND

    public:
        // prevent constructor by default
        SharedString& operator=(SharedString const&);
        SharedString(SharedString const&);
        SharedString();
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnk886291;
    // NOLINTEND

public:
    // prevent constructor by default
    RakString& operator=(RakString const&);
    RakString(RakString const&);

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void Allocate(uint64 len);

    MCAPI void Assign(char const* str);

    MCAPI void Assign(char const* str, char* ap);

    MCAPI void Free();

    MCAPI RakString();

    MCAPI RakString(char const*, ...);

    MCAPI ~RakString();
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::RakNet::RakString::SharedString& emptyString();

    MCAPI static ::DataStructures::List<::RakNet::RakString::SharedString*>& freeList();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();

    MCAPI void* $ctor(char const*, ...);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace RakNet
