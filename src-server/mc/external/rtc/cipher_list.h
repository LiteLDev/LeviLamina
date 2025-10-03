#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace rtc {

struct cipher_list {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<2, 2> mUnk6bec9d;
    ::ll::UntypedStorage<8, 8> mUnk58b081;
    // NOLINTEND

public:
    // prevent constructor by default
    cipher_list& operator=(cipher_list const&);
    cipher_list(cipher_list const&);
    cipher_list();
};

} // namespace rtc
