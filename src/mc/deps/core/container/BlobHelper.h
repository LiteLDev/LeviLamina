#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace mce { class Blob; }
// clang-format on

namespace mce::BlobHelper {
// functions
// NOLINTBEGIN
#ifdef LL_PLAT_C
MCAPI ::mce::Blob clone(::mce::Blob const& blob);

MCAPI void copySpanIntoBlob(::mce::Blob& blob, ::gsl::span<uchar const> span);
#endif

#ifdef LL_PLAT_S
MCAPI void copyStringIntoBlob(::mce::Blob& blob, ::std::string const& source);
#endif

#ifdef LL_PLAT_C
MCAPI void resize(::mce::Blob& blob, uint64 newSize);
#endif
// NOLINTEND

} // namespace mce::BlobHelper
