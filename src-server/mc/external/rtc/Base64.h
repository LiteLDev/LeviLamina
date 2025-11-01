#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace rtc {

class Base64 {
public:
    // Base64 inner types define
    enum class DecodeOption : int {
        // bitfield representation
        ParseStrict = 1 << 0,
        ParseWhite = 1 << 1,
        PadYes = 1 << 2,
        PadAny = 1 << 3,
        TermBuffer = 1 << 4,
        TermChar = 1 << 5,
        ParseMask = ParseStrict | ParseWhite,
        ParseAny = ParseStrict | ParseWhite,
        PadMask = PadYes | PadAny,
        PadNo = PadYes | PadAny,
        Strict = ParseStrict | PadYes | TermBuffer,
        Lax = ParseStrict | ParseWhite | PadAny | TermChar,
        TermMask = TermBuffer | TermChar,
        TermAny = TermBuffer | TermChar,
    };
    
public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void EncodeFromArray(void const* data, uint64 len, ::std::string* result);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::std::add_lvalue_reference_t<char const[]> Base64Table();

    MCNAPI static ::std::add_lvalue_reference_t<uchar const[]> DecodeTable();
    // NOLINTEND

};

}
