#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/binding/FacetBase.h"
#include "mc/client/gui/oreui/binding/OptionWrapper.h"
#include "mc/deps/core/utility/pub_sub/Subscription.h"

// auto generated forward declare list
// clang-format off
class ISplitScreenChangedPublisher;
class Option;
namespace OreUI { class Router; }
// clang-format on

namespace OreUI {

class AnimationFacet : public ::OreUI::FacetBase<::OreUI::AnimationFacet> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool>                             mIsDirty;
    ::ll::TypedStorage<1, 1, bool>                             mScreenAnimations;
    ::ll::TypedStorage<8, 24, ::OreUI::OptionWrapper<bool>>    mScreenAnimationsOption;
    ::ll::TypedStorage<1, 1, uchar>                            mSplitScreenCount;
    ::ll::TypedStorage<1, 1, bool>                             mAllowAnimationsInSplitScreen;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription> mOnRouteChangedSubscription;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription> mSplitScreenChangedSubscription;
    // NOLINTEND

public:
    // prevent constructor by default
    AnimationFacet();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual bool update() /*override*/;

    virtual ~AnimationFacet() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI AnimationFacet(
        ::Option*                       screenAnimationsOption,
        ::ISplitScreenChangedPublisher& splitScreenChangedPublisher,
        ::OreUI::Router&                router
    );

    MCAPI bool _isOreUIGameplayRoute(::std::string const& route) const;

    MCAPI bool isScreenAnimationEnabled() const;
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::std::add_lvalue_reference_t<char const[]> NAME();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        ::Option*                       screenAnimationsOption,
        ::ISplitScreenChangedPublisher& splitScreenChangedPublisher,
        ::OreUI::Router&                router
    );
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
