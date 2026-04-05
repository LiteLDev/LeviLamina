#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/binding/QueryBase.h"
#include "mc/client/gui/oreui/binding/properties/OptionProperty.h"
#include "mc/client/gui/oreui/binding/properties/Property.h"
#include "mc/client/gui/oreui/input/InputMethod.h"
#include "mc/client/input/KeyboardType.h"
#include "mc/deps/core/utility/pub_sub/Subscription.h"

// auto generated forward declare list
// clang-format off
class IClientInstance;
namespace OreUI { class ClientDependencies; }
// clang-format on

namespace OreUI {

class InputQuery : public ::OreUI::QueryBase<::OreUI::InputQuery> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::std::reference_wrapper<::IClientInstance>> mClientInstance;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>            mEnableTooltipsOptionSubscription;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>            mKeyboardTypeOptionSubscription;
    ::ll::TypedStorage<8, 120, ::OreUI::OptionProperty<bool>>             mSwapABButtons;
    ::ll::TypedStorage<8, 120, ::OreUI::OptionProperty<bool>>             mSwapXYButtons;
    ::ll::TypedStorage<8, 176, ::OreUI::Property<::OreUI::InputMethod>>   mCurrentInputType;
    ::ll::TypedStorage<8, 176, ::OreUI::Property<bool>>                   mEnableControllerHints;
    ::ll::TypedStorage<8, 176, ::OreUI::Property<::KeyboardType>>         mKeyboardType;
    ::ll::TypedStorage<8, 176, ::OreUI::Property<bool>>                   mInteractionModelLocked;
    // NOLINTEND

public:
    // prevent constructor by default
    InputQuery();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual void update(double const) /*override*/;

    virtual ~InputQuery() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit InputQuery(::OreUI::ClientDependencies const& client);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::OreUI::ClientDependencies const& client);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $update(double const);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftableForPropertyObject();

    MCNAPI static void** $vftableForIQuery();
    // NOLINTEND
};

} // namespace OreUI
