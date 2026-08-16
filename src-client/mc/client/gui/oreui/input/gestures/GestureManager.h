#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace OreUI { class GestureRecognizerBase; }
// clang-format on

namespace OreUI {

class GestureManager {
public:
    // GestureManager inner types define
    using GestureRecognizerPtrVector = ::std::vector<::std::unique_ptr<::OreUI::GestureRecognizerBase>>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::std::vector<::std::unique_ptr<::OreUI::GestureRecognizerBase>>> mRecognizers;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ~GestureManager();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};

} // namespace OreUI
