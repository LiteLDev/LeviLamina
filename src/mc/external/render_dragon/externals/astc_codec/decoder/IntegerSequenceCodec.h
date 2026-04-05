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
#ifdef LL_PLAT_C
    MCNAPI explicit IntegerSequenceCodec(int range);
#endif
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI static int GetBitCount(int num_vals, int trits, int quints, int bits);

    MCNAPI static int GetBitCountForRange(int num_vals, int range);

    MCNAPI static void GetCountsForRange(int range, int* trits, int* quints, int* bits);
#endif
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI void* $ctor(int range);
#endif
    // NOLINTEND
};

} // namespace astc_codec
