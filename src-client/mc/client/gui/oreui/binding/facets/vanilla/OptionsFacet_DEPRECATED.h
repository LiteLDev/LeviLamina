#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/binding/FacetBase_DEPRECATED.h"
#include "mc/options/option_types/OptionID.h"

// auto generated forward declare list
// clang-format off
class OptionRegistry;
namespace Bedrock::PubSub { class Subscription; }
// clang-format on

namespace OreUI {

class OptionsFacet_DEPRECATED : public ::OreUI::FacetBase_DEPRECATED<::OreUI::OptionsFacet_DEPRECATED> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::OptionRegistry>>            mOptions;
    ::ll::TypedStorage<1, 1, bool>                                            mIsDirty;
    ::ll::TypedStorage<8, 24, ::std::vector<::Bedrock::PubSub::Subscription>> mOptionSubscriptions;
    // NOLINTEND

public:
    // prevent constructor by default
    OptionsFacet_DEPRECATED();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~OptionsFacet_DEPRECATED() /*override*/ = default;

    virtual bool update() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit OptionsFacet_DEPRECATED(::std::shared_ptr<::OptionRegistry> options);

    MCNAPI void _registerOptionObserver(::OptionID optionId);

    MCNAPI int getDefaultRenderDistance() const;

    MCNAPI int getInteractionModel() const;

    MCNAPI int getMaxRenderDistance() const;

    MCNAPI bool getPlayOnceWithMobileData() const;

    MCNAPI bool getPlayVideoInTouchControlSelectionScreen() const;

    MCNAPI int getRenderDistance() const;

    MCNAPI bool getShowRenderDistanceWarningModal() const;

    MCNAPI bool getShowTouchControlSelectionScreen() const;

    MCNAPI void setInteractionModel(int newValue);

    MCNAPI void setPlayOnceWithMobileData(bool newValue);

    MCNAPI void setRenderDistance(int newValue);

    MCNAPI void setShowRenderDistanceWarningModal(bool newValue);

    MCNAPI void setShowTouchControlSelectionScreen(bool newValue);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::std::add_lvalue_reference_t<char const[]> NAME();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::std::shared_ptr<::OptionRegistry> options);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI bool $update();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace OreUI
