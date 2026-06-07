#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/resource/PackType.h"
#include "mc/deps/core/sem_ver/SemVersion.h"

struct PackInfo {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::std::string> name;
    ::ll::TypedStorage<8, 32, ::std::string> uuid;
    ::ll::TypedStorage<1, 1, ::PackType>     type;
    ::ll::TypedStorage<8, 24, ::SemVersion>  version;
    // NOLINTEND

public:
    // prevent constructor by default
    PackInfo& operator=(PackInfo const&);
    PackInfo();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI PackInfo(::PackInfo const&);

    MCAPI ~PackInfo();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::PackInfo const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
