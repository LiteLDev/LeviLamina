#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace astc_codec {

class IntegerSequenceCodec {
public:
    // IntegerSequenceCodec inner types define
    enum class EncodingMode : int {
        KTritEncoding = 0,
        KQuintEncoding = 1,
        KBitEncoding = 2,
    };
    
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnk8a234d;
    ::ll::UntypedStorage<4, 4> mUnk1d06f7;
    // NOLINTEND

public:
    // prevent constructor by default
    IntegerSequenceCodec& operator=(IntegerSequenceCodec const&);
    IntegerSequenceCodec(IntegerSequenceCodec const&);
    IntegerSequenceCodec();

};

}
