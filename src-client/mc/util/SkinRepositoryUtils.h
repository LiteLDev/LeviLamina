#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Pack;
namespace mce { class UUID; }
// clang-format on

namespace SkinRepositoryUtils {
// functions
// NOLINTBEGIN
MCNAPI bool checkSignatureFileInPack(::Pack& pack);

MCNAPI ::mce::UUID translateLegacySkinPackNameToPackId(::std::string const& legacySkinPackName);
// NOLINTEND

} // namespace SkinRepositoryUtils
