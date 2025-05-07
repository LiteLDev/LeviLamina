#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc::fec_private_tables {
// static variables
// NOLINTBEGIN
MCNAPI ::std::add_lvalue_reference_t<uchar const[]> kPacketMaskBurstyTbl();

MCNAPI ::std::add_lvalue_reference_t<uchar const[]> kPacketMaskRandomTbl();
// NOLINTEND

} // namespace webrtc::fec_private_tables
