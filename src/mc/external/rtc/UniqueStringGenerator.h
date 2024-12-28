#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace rtc {

class UniqueStringGenerator {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnkc17c85;
    // NOLINTEND

public:
    // prevent constructor by default
    UniqueStringGenerator& operator=(UniqueStringGenerator const&);
    UniqueStringGenerator(UniqueStringGenerator const&);

public:
    // member functions
    // NOLINTBEGIN
    MCAPI bool AddKnownId(::std::string_view);

    MCAPI ::std::string GenerateString();

    MCAPI UniqueStringGenerator();

    MCAPI ~UniqueStringGenerator();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace rtc
