#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/binding/experimental/QueryBase.h"
#include "mc/client/gui/oreui/binding/experimental/properties/OptionProperty.h"
#include "mc/client/gui/oreui/binding/experimental/properties/Property.h"
#include "mc/client/gui/oreui/binding/facets/core/InputMethod.h"
#include "mc/client/input/KeyboardType.h"
#include "mc/deps/core/utility/pub_sub/Subscription.h"

// auto generated forward declare list
// clang-format off
class IClientInstance;
namespace OreUI::Experimental { class ClientDependencies; }
// clang-format on

namespace OreUI::Experimental {

class InputQuery : public ::OreUI::Experimental::QueryBase<::OreUI::Experimental::InputQuery> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::std::reference_wrapper<::IClientInstance>>             mClientInstance;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>                        mEnableTooltipsOptionSubscription;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>                        mKeyboardTypeOptionSubscription;
    ::ll::TypedStorage<8, 120, ::OreUI::Experimental::OptionProperty<bool>>           mSwapABButtons;
    ::ll::TypedStorage<8, 120, ::OreUI::Experimental::OptionProperty<bool>>           mSwapXYButtons;
    ::ll::TypedStorage<8, 176, ::OreUI::Experimental::Property<::OreUI::InputMethod>> mCurrentInputType;
    ::ll::TypedStorage<8, 176, ::OreUI::Experimental::Property<bool>>                 mEnableControllerHints;
    ::ll::TypedStorage<8, 176, ::OreUI::Experimental::Property<::KeyboardType>>       mKeyboardType;
    ::ll::TypedStorage<8, 176, ::OreUI::Experimental::Property<bool>>                 mInteractionModelLocked;
    // NOLINTEND

public:
    // prevent constructor by default
    InputQuery();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual void update(double const timestampMs) /*override*/;

    virtual ~InputQuery() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit InputQuery(::OreUI::Experimental::ClientDependencies const& client);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::OreUI::Experimental::ClientDependencies const& client);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $update(double const timestampMs);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftableForIQuery();

    MCNAPI static void** $vftableForPropertyObject();
    // NOLINTEND
};

} // namespace OreUI::Experimental
