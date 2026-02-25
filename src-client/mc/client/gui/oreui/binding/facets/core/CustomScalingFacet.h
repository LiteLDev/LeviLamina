#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/binding/FacetBase.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
class IClientInstance;
namespace Bedrock::PubSub { class Subscription; }
// clang-format on

namespace OreUI {

class CustomScalingFacet : public ::OreUI::FacetBase<::OreUI::CustomScalingFacet> {
public:
    // CustomScalingFacet inner types define
    enum class ScalingMode : int {
        Compat  = 0,
        Legacy  = 1,
        Default = 2,
        Fixed   = 3,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool>                                                                 mIsDirty;
    ::ll::TypedStorage<8, 24, ::std::vector<::Bedrock::PubSub::Subscription>>                      mOptionSubscriptions;
    ::ll::TypedStorage<8, 64, ::std::function<::Bedrock::NotNullNonOwnerPtr<::IClientInstance>()>> mGetClientInstance;
    ::ll::TypedStorage<4, 4, int>       mFixedGuiScaleModifier;
    ::ll::TypedStorage<4, 4, int const> mMinFixedGuiScaleModifier;
    ::ll::TypedStorage<4, 4, int const> mMaxFixedGuiScaleModifier;
    // NOLINTEND

public:
    // prevent constructor by default
    CustomScalingFacet();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual bool update() /*override*/;

    virtual ~CustomScalingFacet() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit CustomScalingFacet(
        ::std::function<::Bedrock::NotNullNonOwnerPtr<::IClientInstance>()> getClientInstance
    );

    MCFOLD int getFixedGuiScaleModifier() const;

    MCAPI bool getGuiAccessibilityScaling() const;

    MCFOLD int getMaxFixedGuiScaleModifier() const;

    MCFOLD int getMinFixedGuiScaleModifier() const;

    MCAPI char const* getScalingModeOverride() const;

    MCAPI void setFixedGuiScaleModifier(int fixedGuiScaleModifier);
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
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCFOLD bool $update();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace OreUI
