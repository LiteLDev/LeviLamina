#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace mce { class Blob; }
// clang-format on

namespace mce::BlobHelper {
// functions
// NOLINTBEGIN
MCNAPI void copySpanIntoBlob(::mce::Blob& blob, ::gsl::span<uchar const> span);

MCNAPI void copyStringIntoBlob(::mce::Blob& blob, ::std::string const& source);
// NOLINTEND

} // namespace mce::BlobHelper
