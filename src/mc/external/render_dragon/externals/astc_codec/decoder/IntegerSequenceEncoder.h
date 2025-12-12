#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/render_dragon/externals/astc_codec/decoder/IntegerSequenceCodec.h"

namespace astc_codec {

class IntegerSequenceEncoder : public ::astc_codec::IntegerSequenceCodec {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnk2d5940;
    // NOLINTEND

public:
    // prevent constructor by default
    IntegerSequenceEncoder& operator=(IntegerSequenceEncoder const&);
    IntegerSequenceEncoder(IntegerSequenceEncoder const&);
    IntegerSequenceEncoder();
};

} // namespace astc_codec
