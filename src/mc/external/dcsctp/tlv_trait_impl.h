#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace dcsctp::tlv_trait_impl {
// functions
// NOLINTBEGIN
MCNAPI void ReportInvalidFixedLengthField(uint64, uint64);

MCNAPI void ReportInvalidLengthMultiple(uint64, uint64);

MCNAPI void ReportInvalidPadding(uint64);

MCNAPI void ReportInvalidSize(uint64, uint64);

MCNAPI void ReportInvalidType(int, int);

MCNAPI void ReportInvalidVariableLengthField(uint64, uint64);
// NOLINTEND

} // namespace dcsctp::tlv_trait_impl
