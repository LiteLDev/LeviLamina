#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace mce { class Blob; }
// clang-format on

namespace mce::BlobHelper {
// functions
// NOLINTBEGIN
MCNAPI void copyStringIntoBlob(::mce::Blob& blob, ::std::string const& source);

MCNAPI_C void resize(::mce::Blob& blob, uint64 newSize);
// NOLINTEND

} // namespace mce::BlobHelper
