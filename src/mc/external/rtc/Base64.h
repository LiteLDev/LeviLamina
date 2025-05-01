#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace rtc {

struct Base64 {
public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void EncodeFromArray(void const*, uint64, ::std::string*);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::std::add_lvalue_reference_t<char const[]> Base64Table();

    MCAPI static ::std::add_lvalue_reference_t<uchar const[]> DecodeTable();
    // NOLINTEND
};

} // namespace rtc
