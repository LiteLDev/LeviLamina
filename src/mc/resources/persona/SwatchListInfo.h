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

#ifdef LL_PLAT_S
public:
    // prevent constructor by default
    SwatchListInfo& operator=(SwatchListInfo const&);
    SwatchListInfo(SwatchListInfo const&);
    SwatchListInfo();

#else // LL_PLAT_C
public:
    // prevent constructor by default
    SwatchListInfo& operator=(SwatchListInfo const&);
    SwatchListInfo(SwatchListInfo const&);

#endif
public:
    // member functions
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI SwatchListInfo();

    MCNAPI ::std::string const& getName() const;

    MCNAPI bool isValidIndex(uint64 index) const;

    MCNAPI ::persona::color::SwatchListInfo& operator=(::persona::color::SwatchListInfo&&);

    MCNAPI ::persona::color::Swatch const& operator[](uint64 index) const;

    MCNAPI uint64 size() const;

    MCNAPI ~SwatchListInfo();
#endif
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI void* $ctor();
#endif
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI void $dtor();
#endif
    // NOLINTEND
};

} // namespace persona::color
