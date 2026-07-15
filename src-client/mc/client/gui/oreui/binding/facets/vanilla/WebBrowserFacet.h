#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/binding/FacetBase_DEPRECATED.h"

namespace OreUI {

class WebBrowserFacet : public ::OreUI::FacetBase_DEPRECATED<::OreUI::WebBrowserFacet> {
public:
    // WebBrowserFacet inner types define
    enum class WebBrowserLink : int {
        NewWorldCreationFeedbackPage       = 0,
        PlayScreenFeedbackPage             = 1,
        EditWorldScreenFeedbackPage        = 2,
        RealmsSafetyPage                   = 4,
        ManageParentalConsentPage          = 5,
        BannedHelpPage                     = 6,
        NintendoSwitchTechnicalSupportPage = 7,
        BuyMinecraftStorePage              = 8,
        XboxPrivacyAndOnlineSafety         = 9,
        XboxAccountProfile                 = 10,
        JoinRealmHelpPage                  = 11,
        FriendsDrawerFeedbackPage          = 12,
        ServersTabFeedbackPage             = 13,
        PlayerFeedbackMain                 = 14,
        PlayerFeedbackIdeas                = 15,
        StartFromTemplateFeedbackPage      = 17,
        RealmsTabFeedbackPage              = 18,
        TermsAndServicePage                = 19,
        PrivacyPolicyPage                  = 20,
        PreproductionRealmsGuide           = 21,
        TroubleshootMultiplayer            = 22,
        EduAboutAddOns                     = 23,
        EduAboutBehaviorPacks              = 24,
        EduAboutResourcePacks              = 25,
        EduAboutCloud                      = 26,
        FlatWorldFeedbackPage              = 27,
        ContactSupport                     = 28,
        RealmsCommitWikiLink               = 29,
        SettingsFeedbackPage               = 30,
        NewPlayerPathTutorialSurvey        = 31,
        RealmsFeedbackPage                 = 32,
        InboxFeedbackBugs                  = 33,
        InboxFeedbackIdeas                 = 34,
        RealmsManageSavesHelpPage          = 35,
    };

    using LaunchUri = ::std::function<void(::std::string const&)>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 64, ::std::function<void(::std::string const&)>> mLaunchUri;
    ::ll::TypedStorage<8, 64, ::std::unordered_map<::OreUI::WebBrowserFacet::WebBrowserLink, ::std::string>>
        mAllowedURLs;
    // NOLINTEND

public:
    // prevent constructor by default
    WebBrowserFacet();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual bool update() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit WebBrowserFacet(::std::function<void(::std::string const&)> launchUri);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::std::function<void(::std::string const&)> launchUri);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace OreUI
