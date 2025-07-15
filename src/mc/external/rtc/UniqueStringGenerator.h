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
    MCNAPI bool AddKnownId(::std::string_view value);

    MCNAPI ::std::string GenerateString();

    MCNAPI UniqueStringGenerator();

    MCNAPI ~UniqueStringGenerator();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace rtc
