#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace rtc {

class StringBuilder {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnka2ad69;
    // NOLINTEND

public:
    // prevent constructor by default
    StringBuilder& operator=(StringBuilder const&);
    StringBuilder(StringBuilder const&);
    StringBuilder();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::rtc::StringBuilder& AppendFormat(char const*, ...);

    MCAPI ::rtc::StringBuilder& operator<<(ulong);

    MCAPI ::rtc::StringBuilder& operator<<(uint);

    MCAPI ::rtc::StringBuilder& operator<<(int);

    MCAPI ::rtc::StringBuilder& operator<<(uint64);

    MCAPI ~StringBuilder();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace rtc
