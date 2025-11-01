#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace dcsctp::tlv_trait_impl {
// functions
// NOLINTBEGIN
MCNAPI void ReportInvalidFixedLengthField(uint64 value, uint64 expected);

MCNAPI void ReportInvalidLengthMultiple(uint64 length, uint64 alignment);

MCNAPI void ReportInvalidPadding(uint64 padding_bytes);

MCNAPI void ReportInvalidSize(uint64 actual_size, uint64 expected_size);

MCNAPI void ReportInvalidType(int actual_type, int expected_type);

MCNAPI void ReportInvalidVariableLengthField(uint64 value, uint64 available);
// NOLINTEND

}
