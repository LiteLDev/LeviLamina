#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace mce { class Blob; }
// clang-format on

namespace mce::BlobHelper {
// NOLINTBEGIN
MCAPI class mce::Blob clone(class mce::Blob const& blob);

MCAPI void copySpanIntoBlob(class mce::Blob&, gsl::span<uchar const>);

MCAPI void copyStringIntoBlob(class mce::Blob& blob, std::string const& source);
// NOLINTEND

}; // namespace mce::BlobHelper
