#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/interface/IFeature.h"

// auto generated forward declare list
// clang-format off
class Option;
namespace Bedrock::PubSub { class Subscription; }
// clang-format on

namespace OreUI {

class Feature : public ::OreUI::IFeature {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::Option*> mMainToggle;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual bool isEnabled() const /*override*/;

    virtual void
    registerIsEnabledChangedCallback(::Bedrock::PubSub::Subscription&, ::std::function<void(bool)>) /*override*/;

    virtual ~Feature() /*override*/ = default;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace OreUI
