#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/binding/FacetBase.h"
#include "mc/client/options/SplitScreenDirection.h"
#include "mc/deps/core/utility/pub_sub/Subscription.h"

// auto generated forward declare list
// clang-format off
class IClientInstance;
class ISplitScreenChangedPublisher;
// clang-format on

namespace OreUI {

class SplitScreenFacet : public ::OreUI::FacetBase<::OreUI::SplitScreenFacet> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool>                             mIsDirty;
    ::ll::TypedStorage<1, 1, bool>                             mIsPrimaryUser;
    ::ll::TypedStorage<4, 4, int>                              mSplitScreenPosition;
    ::ll::TypedStorage<4, 4, int>                              mActivePlayers;
    ::ll::TypedStorage<4, 4, ::SplitScreenDirection>           mSplitScreenDirection;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription> mSplitScreenChangedSubscription;
    // NOLINTEND

public:
    // prevent constructor by default
    SplitScreenFacet();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual bool update() /*override*/;

    virtual ~SplitScreenFacet() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI SplitScreenFacet(
        ::ISplitScreenChangedPublisher& splitScreenChangedPublisher,
        ::IClientInstance const&        clientInstance
    );

    MCFOLD int getActivePlayers() const;

    MCFOLD ::SplitScreenDirection getSplitScreenDirection() const;

    MCFOLD int getSplitScreenPosition() const;

    MCFOLD bool isPrimaryUser() const;
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::std::add_lvalue_reference_t<char const[]> NAME();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void*
    $ctor(::ISplitScreenChangedPublisher& splitScreenChangedPublisher, ::IClientInstance const& clientInstance);
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
