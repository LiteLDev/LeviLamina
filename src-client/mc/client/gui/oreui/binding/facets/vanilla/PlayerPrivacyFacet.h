#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/binding/FacetBase.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/core/utility/pub_sub/Subscription.h"
#include "mc/identity/XUID.h"
#include "mc/platform/Result.h"

// auto generated forward declare list
// clang-format off
namespace Social { class IUserManager; }
namespace Social { class XboxLiveUserPrivacy; }
// clang-format on

namespace OreUI {

class PlayerPrivacyFacet : public ::OreUI::FacetBase<::OreUI::PlayerPrivacyFacet> {
public:
    // PlayerPrivacyFacet inner types declare
    // clang-format off
    struct PrivacyData;
    // clang-format on

    // PlayerPrivacyFacet inner types define
    struct PrivacyData {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<1, 1, bool> viewTargetProfile;
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool>                                                   mDirty;
    ::ll::TypedStorage<1, 1, bool>                                                   mLoaded;
    ::ll::TypedStorage<1, 1, ::OreUI::PlayerPrivacyFacet::PrivacyData>               mData;
    ::ll::TypedStorage<8, 16, ::std::optional<::Social::XUID>>                       mXuid;
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::Social::XboxLiveUserPrivacy>>      mPrivacy;
    ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::Social::IUserManager>> mUserManager;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>                       mPrivacySubscriber;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~PlayerPrivacyFacet() /*override*/;

    virtual bool update() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::Bedrock::Result<void> _load(::std::string const& id);

    MCAPI ::OreUI::PlayerPrivacyFacet::PrivacyData const& getData();

    MCFOLD bool getLoaded();

    MCAPI void load(::std::string const& id);
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
    MCAPI bool $update();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace OreUI
