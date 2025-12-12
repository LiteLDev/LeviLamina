#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace astc_codec {

class IntegerSequenceCodec {
public:
    // IntegerSequenceCodec inner types define
    enum class EncodingMode : int {
        KTritEncoding  = 0,
        KQuintEncoding = 1,
        KBitEncoding   = 2,
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

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI_C explicit IntegerSequenceCodec(int range);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI_C static int GetBitCount(int num_vals, int trits, int quints, int bits);

    MCNAPI_C static int GetBitCountForRange(int num_vals, int range);

    MCNAPI_C static void GetCountsForRange(int range, int* trits, int* quints, int* bits);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI_C void* $ctor(int range);
    // NOLINTEND
};

} // namespace astc_codec
