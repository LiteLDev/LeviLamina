#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Core { class Path; }
// clang-format on

class JpegData {
public:
    // static functions
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI static bool WriteJpgComments(::Core::Path const& fileName, ::std::string const& inComment);
#endif
    // NOLINTEND
};
