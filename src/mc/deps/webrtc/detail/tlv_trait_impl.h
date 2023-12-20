#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace dcsctp::tlv_trait_impl {
// NOLINTBEGIN
// symbol: ?ReportInvalidFixedLengthField@tlv_trait_impl@dcsctp@@YAX_K0@Z
MCAPI void ReportInvalidFixedLengthField(uint64, uint64);

// symbol: ?ReportInvalidLengthMultiple@tlv_trait_impl@dcsctp@@YAX_K0@Z
MCAPI void ReportInvalidLengthMultiple(uint64, uint64);

// symbol: ?ReportInvalidPadding@tlv_trait_impl@dcsctp@@YAX_K@Z
MCAPI void ReportInvalidPadding(uint64);

// symbol: ?ReportInvalidSize@tlv_trait_impl@dcsctp@@YAX_K0@Z
MCAPI void ReportInvalidSize(uint64, uint64);

// symbol: ?ReportInvalidType@tlv_trait_impl@dcsctp@@YAXHH@Z
MCAPI void ReportInvalidType(int, int);

// symbol: ?ReportInvalidVariableLengthField@tlv_trait_impl@dcsctp@@YAX_K0@Z
MCAPI void ReportInvalidVariableLengthField(uint64, uint64);
// NOLINTEND

}; // namespace dcsctp::tlv_trait_impl
