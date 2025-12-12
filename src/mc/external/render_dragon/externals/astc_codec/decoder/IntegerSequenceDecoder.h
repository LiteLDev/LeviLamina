#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/render_dragon/externals/astc_codec/decoder/BitStream.h"
#include "mc/external/render_dragon/externals/astc_codec/decoder/IntegerSequenceCodec.h"

// auto generated forward declare list
// clang-format off
namespace astc_codec::base { class UInt128; }
// clang-format on

namespace astc_codec {

class IntegerSequenceDecoder : public ::astc_codec::IntegerSequenceCodec {
public:
    // member functions
    // NOLINTBEGIN
    MCNAPI_C ::std::vector<int>
    Decode(int num_vals, ::astc_codec::base::BitStream<::astc_codec::base::UInt128>* bit_src) const;
    // NOLINTEND
};

} // namespace astc_codec
