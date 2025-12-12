#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"

// auto generated forward declare list
// clang-format off
namespace persona::color { struct Swatch; }
// clang-format on

namespace persona::color {

class SwatchList : public ::Bedrock::EnableNonOwnerReferences {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnkc236b2;
    // NOLINTEND

public:
    // prevent constructor by default
    SwatchList& operator=(SwatchList const&);
    SwatchList(SwatchList const&);
    SwatchList();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~SwatchList() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit SwatchList(::std::vector<::persona::color::Swatch>&& swatches);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::std::vector<::persona::color::Swatch>&& swatches);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace persona::color
