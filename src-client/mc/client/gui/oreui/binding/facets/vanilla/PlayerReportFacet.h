#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/binding/FacetBase_DEPRECATED.h"
#include "mc/client/gui/oreui/resources/AllowListPath.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
class IClientInstance;
namespace OreUI { class IResourceAllowList; }
// clang-format on

namespace OreUI {

class PlayerReportFacet : public ::OreUI::FacetBase_DEPRECATED<::OreUI::PlayerReportFacet> {
public:
    // PlayerReportFacet inner types declare
    // clang-format off
    struct ChatMessageData;
    struct DropdownOption;
    struct ChatSelection;
    // clang-format on

    // PlayerReportFacet inner types define
    struct ChatMessageData {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 32, ::std::string> mMessage;
        ::ll::TypedStorage<8, 32, ::std::string> mFilteredMessage;
        ::ll::TypedStorage<8, 32, ::std::string> mAuthor;
        ::ll::TypedStorage<1, 1, bool>           mIsAuthorBeingReported;
        ::ll::TypedStorage<1, 1, bool>           mIsProfanityFilterOn;
        // NOLINTEND

    public:
        // prevent constructor by default
        ChatMessageData& operator=(ChatMessageData const&);
        ChatMessageData();

    public:
        // member functions
        // NOLINTBEGIN
        MCAPI ChatMessageData(::OreUI::PlayerReportFacet::ChatMessageData const&);

        MCAPI ~ChatMessageData();
        // NOLINTEND

    public:
        // constructor thunks
        // NOLINTBEGIN
        MCAPI void* $ctor(::OreUI::PlayerReportFacet::ChatMessageData const&);
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCFOLD void $dtor();
        // NOLINTEND
    };

    struct DropdownOption {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 32, ::std::string> mLabel;
        ::ll::TypedStorage<4, 4, int>            mValue;
        // NOLINTEND
    };

    struct ChatSelection {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 24, ::std::vector<int>> mSelectedMessages;
        ::ll::TypedStorage<1, 1, bool>                mIsPartyChatReport;
        // NOLINTEND

    public:
        // member functions
        // NOLINTBEGIN
        MCAPI ~ChatSelection();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCFOLD void $dtor();
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, int>                                                         mReportArea;
    ::ll::TypedStorage<4, 4, int>                                                         mReportReason;
    ::ll::TypedStorage<8, 32, ::std::string>                                              mReportMessage;
    ::ll::TypedStorage<8, 32, ::std::string>                                              mXuid;
    ::ll::TypedStorage<8, 32, ::std::string>                                              mPlatformId;
    ::ll::TypedStorage<8, 32, ::std::string>                                              mGalleryScreenshotId;
    ::ll::TypedStorage<8, 24, ::std::vector<int>>                                         mSelectedChatMessages;
    ::ll::TypedStorage<1, 1, bool>                                                        mIsPartyChatReport;
    ::ll::TypedStorage<8, 32, ::std::string>                                              mPartyId;
    ::ll::TypedStorage<8, 24, ::std::vector<::OreUI::PlayerReportFacet::ChatMessageData>> mReportableChatMessages;
    ::ll::TypedStorage<8, 24, ::std::vector<::OreUI::PlayerReportFacet::ChatMessageData>> mReportablePartyChatMessages;
    ::ll::TypedStorage<8, 24, ::std::vector<::OreUI::PlayerReportFacet::DropdownOption>>  mReportAreaOptions;
    ::ll::TypedStorage<8, 24, ::std::vector<::OreUI::PlayerReportFacet::DropdownOption>>  mReportReasonOptions;
    ::ll::TypedStorage<8, 96, ::OreUI::AllowListPath>                                     mScreenshotPath;
    ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::OreUI::IResourceAllowList>> mResourceAllowList;
    ::ll::TypedStorage<1, 1, bool>                                                        mDirty;
    ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::IClientInstance>>           mClientInstance;
    // NOLINTEND

public:
    // prevent constructor by default
    PlayerReportFacet();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~PlayerReportFacet() /*override*/ = default;

    virtual bool update() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI PlayerReportFacet(
        ::Bedrock::NotNullNonOwnerPtr<::IClientInstance> const&    clientInstance,
        ::Bedrock::NotNullNonOwnerPtr<::OreUI::IResourceAllowList> resourceAllowList
    );
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
        ::Bedrock::NotNullNonOwnerPtr<::IClientInstance> const&    clientInstance,
        ::Bedrock::NotNullNonOwnerPtr<::OreUI::IResourceAllowList> resourceAllowList
    );
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace OreUI
