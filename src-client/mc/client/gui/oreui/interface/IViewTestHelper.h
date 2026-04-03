#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/interface/ViewState.h"

// auto generated forward declare list
// clang-format off
namespace OreUI { class FunctionalTestApi; }
namespace OreUI { class ViewInputHandler; }
// clang-format on

namespace OreUI {

class IViewTestHelper {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ::OreUI::FunctionalTestApi& getFunctionalTestApi() = 0;

    virtual ::OreUI::ViewInputHandler& getInputHandler() = 0;

    virtual ::OreUI::ViewState getCurrentState() const = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace OreUI
