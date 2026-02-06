#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/screens/controllers/MinecraftScreenController.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/core/utility/pub_sub/Subscription.h"

// auto generated forward declare list
// clang-format off
class MinecraftScreenModel;
namespace Parties { struct Party; }
namespace Parties { struct PartySystem; }
// clang-format on

class SocialButtonScreenController : public ::MinecraftScreenController {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>     mCurrentPartyUpdateSubscription;
    ::ll::TypedStorage<8, 24, ::std::vector<::std::string>>        mPartyProfileOptions;
    ::ll::TypedStorage<8, 24, ::std::vector<::std::string> const>  mButtonFactoryControlVector;
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::Parties::Party>> mParty;
    ::ll::TypedStorage<1, 1, bool>                                 mIsPartySystemAvailable;
    ::ll::TypedStorage<1, 1, bool>                                 mIsPlayersInWorldEnabled;
    ::ll::TypedStorage<8, 24, ::std::vector<::std::string>>        mCurrentSocialIcon;
    // NOLINTEND

public:
    // prevent constructor by default
    SocialButtonScreenController();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~SocialButtonScreenController() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI SocialButtonScreenController(
        ::std::shared_ptr<::MinecraftScreenModel>                              model,
        ::std::optional<::Bedrock::NotNullNonOwnerPtr<::Parties::PartySystem>> partySystem
    );

    MCAPI void _onPartyChanged();

    MCAPI void _registerBindings();

    MCAPI void _updateSocialIconControl();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        ::std::shared_ptr<::MinecraftScreenModel>                              model,
        ::std::optional<::Bedrock::NotNullNonOwnerPtr<::Parties::PartySystem>> partySystem
    );
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftableForEnableNonOwnerReferences();

    MCNAPI static void** $vftableForScreenController();
    // NOLINTEND
};
