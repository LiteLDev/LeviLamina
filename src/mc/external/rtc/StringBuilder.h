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
    MCNAPI ::rtc::StringBuilder& AppendFormat(char const*, ...);

    MCNAPI ::rtc::StringBuilder& operator<<(int i);

    MCNAPI ::rtc::StringBuilder& operator<<(uint i);

    MCNAPI ::rtc::StringBuilder& operator<<(ulong i);

    MCNAPI ::rtc::StringBuilder& operator<<(uint64 i);

    MCNAPI ~StringBuilder();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace rtc
