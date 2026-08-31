#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace persona::color { struct Swatch; }
// clang-format on

namespace persona::color {

class SwatchListInfo {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnkb40574;
    ::ll::UntypedStorage<8, 32> mUnk155243;
    // NOLINTEND

public:
    // prevent constructor by default
    SwatchListInfo& operator=(SwatchListInfo const&);
    SwatchListInfo(SwatchListInfo const&);
    SwatchListInfo();

public:
    // member functions
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI ::persona::color::Swatch const& operator[](uint64 index) const;
#endif
    // NOLINTEND
};

} // namespace persona::color
