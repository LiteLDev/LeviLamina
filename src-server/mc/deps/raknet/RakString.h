#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/raknet/data_structures/List.h"

// auto generated forward declare list
// clang-format off
namespace RakNet { class SimpleMutex; }
// clang-format on

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
        ::ll::TypedStorage<8, 8, ::RakNet::SimpleMutex*> refCountMutex;
        ::ll::TypedStorage<4, 4, uint>                   refCount;
        ::ll::TypedStorage<8, 8, uint64>                 bytesUsed;
        ::ll::TypedStorage<8, 8, char*>                  bigString;
        ::ll::TypedStorage<8, 8, char*>                  c_str;
        ::ll::TypedStorage<1, 100, char[100]>            smallString;
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::RakNet::RakString::SharedString*> sharedString;
    // NOLINTEND

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
