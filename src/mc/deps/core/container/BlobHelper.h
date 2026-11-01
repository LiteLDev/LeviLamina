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
MCNAPI ::mce::Blob clone(::mce::Blob const& blob);

MCNAPI void copySpanIntoBlob(::mce::Blob& blob, ::gsl::span<uchar const> span);
#endif

#ifdef LL_PLAT_S
MCNAPI void copyStringIntoBlob(::mce::Blob& blob, ::std::string const& source);
#endif

#ifdef LL_PLAT_C
MCNAPI void resize(::mce::Blob& blob, uint64 newSize);
#endif
// NOLINTEND

} // namespace mce::BlobHelper
