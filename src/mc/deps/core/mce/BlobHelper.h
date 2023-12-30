#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace mce { class Blob; }
// clang-format on

namespace mce::BlobHelper {
// NOLINTBEGIN
// symbol: ?clone@BlobHelper@mce@@YA?AVBlob@2@AEBV32@@Z
MCAPI class mce::Blob clone(class mce::Blob const& blob);

// symbol: ?copySpanIntoBlob@BlobHelper@mce@@YAXAEAVBlob@2@V?$span@$$CBE$0?0@gsl@@@Z
MCAPI void copySpanIntoBlob(class mce::Blob& blob, gsl::span<uchar const> span);

// symbol:
// ?copyStringIntoBlob@BlobHelper@mce@@YAXAEAVBlob@2@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
MCAPI void copyStringIntoBlob(class mce::Blob& blob, std::string const& source);
// NOLINTEND

}; // namespace mce::BlobHelper
