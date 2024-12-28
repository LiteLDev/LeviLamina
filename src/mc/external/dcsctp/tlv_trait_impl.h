#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace dcsctp::tlv_trait_impl {
// functions
// NOLINTBEGIN
MCAPI void ReportInvalidFixedLengthField(uint64, uint64);

MCAPI void ReportInvalidLengthMultiple(uint64, uint64);

MCAPI void ReportInvalidPadding(uint64);

MCAPI void ReportInvalidSize(uint64, uint64);

MCAPI void ReportInvalidType(int, int);

MCAPI void ReportInvalidVariableLengthField(uint64, uint64);
// NOLINTEND

} // namespace dcsctp::tlv_trait_impl
