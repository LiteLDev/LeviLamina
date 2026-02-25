#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/binding/FacetBase.h"
#include "mc/client/gui/oreui/binding/facets/core/InputMethod.h"
#include "mc/client/input/KeyboardType.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/core/utility/pub_sub/Subscription.h"

// auto generated forward declare list
// clang-format off
class IClientInstance;
class IOptions;
// clang-format on

namespace OreUI {

class InputFacet : public ::OreUI::FacetBase<::OreUI::InputFacet> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 64, ::std::function<::Bedrock::NotNullNonOwnerPtr<::IClientInstance>()>> mGetClientInstance;
    ::ll::TypedStorage<1, 1, bool>                                                                 mIsDirty;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription> mSwapABOptionSubscription;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription> mSwapXYOptionSubscription;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription> mEnableTooltipsOptionSubscription;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription> mKeyboardTypeOptionSubscription;
    ::ll::TypedStorage<1, 1, bool>                             mSwapABButtons;
    ::ll::TypedStorage<1, 1, bool>                             mSwapXYButtons;
    ::ll::TypedStorage<1, 1, ::OreUI::InputMethod>             mCurrentInputType;
    ::ll::TypedStorage<1, 1, bool>                             mEnableControllerHints;
    ::ll::TypedStorage<4, 4, ::KeyboardType>                   mKeyboardType;
    // NOLINTEND

public:
    // prevent constructor by default
    InputFacet();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~InputFacet() /*override*/ = default;

    virtual bool update() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit InputFacet(::std::function<::Bedrock::NotNullNonOwnerPtr<::IClientInstance>()> getClientInstance);

    MCAPI void _poll();

    MCAPI void _registerObservers(::IOptions& options);

    MCAPI ::OreUI::InputMethod getCurrentInputType() const;

    MCAPI bool getEnableControllerHints() const;

    MCAPI ::KeyboardType getKeyboardType() const;

    MCFOLD bool getSwapABButtons() const;

    MCAPI bool getSwapXYButtons() const;
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::std::add_lvalue_reference_t<char const[]> NAME();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::std::function<::Bedrock::NotNullNonOwnerPtr<::IClientInstance>()> getClientInstance);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI bool $update();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace OreUI
