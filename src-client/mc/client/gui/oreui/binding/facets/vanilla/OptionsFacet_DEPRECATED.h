#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/binding/FacetBase.h"
#include "mc/options/option_types/OptionID.h"

// auto generated forward declare list
// clang-format off
class Options;
namespace Bedrock::PubSub { class Subscription; }
// clang-format on

namespace OreUI {

class OptionsFacet_DEPRECATED : public ::OreUI::FacetBase<::OreUI::OptionsFacet_DEPRECATED> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::Options>>                   mOptions;
    ::ll::TypedStorage<1, 1, bool>                                            mIsDirty;
    ::ll::TypedStorage<8, 24, ::std::vector<::Bedrock::PubSub::Subscription>> mOptionSubscriptions;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~OptionsFacet_DEPRECATED() /*override*/;

    virtual bool update() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void _registerOptionObserver(::OptionID optionId);

    MCAPI int getDefaultRenderDistance() const;

    MCAPI int getInteractionModel() const;

    MCAPI int getMaxRenderDistance() const;

    MCAPI bool getPlayOnceWithMobileData() const;

    MCFOLD bool getPlayVideoInTouchControlSelectionScreen() const;

    MCAPI int getRenderDistance() const;

    MCAPI bool getShowRenderDistanceWarningModal() const;

    MCFOLD bool getShowTouchControlSelectionScreen() const;

    MCAPI void setInteractionModel(int newValue);

    MCAPI void setPlayOnceWithMobileData(bool newValue);

    MCAPI void setRenderDistance(int newValue);

    MCAPI void setShowRenderDistanceWarningModal(bool newValue);

    MCAPI void setShowTouchControlSelectionScreen(bool newValue);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::std::add_lvalue_reference_t<char const[]> NAME();
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
