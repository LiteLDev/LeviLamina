#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Crypto::Util {
// functions
// NOLINTBEGIN
MCNAPI ::std::string asn1StringToStd(::asn1_string_st* asn1);

MCNAPI ::std::string bioToString(::std::unique_ptr<::bio_st> bio);
// NOLINTEND

} // namespace Crypto::Util
