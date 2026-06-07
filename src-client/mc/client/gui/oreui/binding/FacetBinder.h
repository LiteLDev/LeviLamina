#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace cohtml { class View; }
// clang-format on

namespace OreUI {

class FacetBinder {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::cohtml::View*> mView;
    // NOLINTEND

public:
    // prevent constructor by default
    FacetBinder();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit FacetBinder(::cohtml::View* view);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCFOLD void* $ctor(::cohtml::View* view);
    // NOLINTEND
};

} // namespace OreUI
