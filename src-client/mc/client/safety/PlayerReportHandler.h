#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/binding/facets/vanilla/PlayerReportFacet.h"
#include "mc/client/safety/ReportArea.h"
#include "mc/client/safety/ReportReason.h"
#include "mc/deps/core/file/PathBuffer.h"
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"

// auto generated forward declare list
// clang-format off
class IClientInstance;
class MultiPlayerLevel;
namespace Json { class Value; }
// clang-format on

class PlayerReportHandler : public ::Bedrock::EnableNonOwnerReferences,
                            public ::std::enable_shared_from_this<::PlayerReportHandler> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8>  mUnkb8efcb;
    ::ll::UntypedStorage<8, 24> mUnkc3867c;
    ::ll::UntypedStorage<8, 24> mUnkb837c7;
    ::ll::UntypedStorage<8, 24> mUnkc500d4;
    ::ll::UntypedStorage<8, 16> mUnk8056d0;
    ::ll::UntypedStorage<8, 32> mUnk77add7;
    ::ll::UntypedStorage<8, 8>  mUnk109d39;
    // NOLINTEND

public:
    // prevent constructor by default
    PlayerReportHandler& operator=(PlayerReportHandler const&);
    PlayerReportHandler(PlayerReportHandler const&);
    PlayerReportHandler();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~PlayerReportHandler() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit PlayerReportHandler(::IClientInstance& clientInstance);

    MCNAPI ::OreUI::PlayerReportFacet::DropdownOption
    _createReportReasonDropdownOption(::Safety::ReportReason reason) const;

    MCNAPI ::Core::PathBuffer<::std::string> _getScreenshotPath() const;

    MCNAPI ::std::string _reportAreaToString(::Safety::ReportArea area) const;

    MCNAPI void _sendCurrentPlayerReportPayload(::std::string gamertag);

    MCNAPI void captureAndSaveChatForPlayerReport(::std::string const& xuid);

    MCNAPI void captureAndSaveScreenshotForPlayerReport();

    MCNAPI void captureAndSaveSkinForPlayerReport(
        ::MultiPlayerLevel*  level,
        ::std::string const& xuid,
        ::std::string const& platformId
    );

    MCNAPI ::Json::Value createChatLogsJsonFromSelectedMessages(
        ::std::vector<::OreUI::PlayerReportFacet::ChatMessageData>& chatMessages,
        ::std::vector<int>&                                         selectedChatMessages
    );

    MCNAPI ::std::vector<::OreUI::PlayerReportFacet::DropdownOption> const
    getReportReasonOptionsForReportArea(::Safety::ReportArea const& area) const;

    MCNAPI void initiatePlayerReport(
        ::std::string const& xuid,
        ::std::string const& platformId,
        ::std::string const& galleryScreenshotId
    );

    MCNAPI void reportPlayer(
        int                reportArea,
        int                reportReason,
        ::std::string      reportMessage,
        ::std::string      xuid,
        ::std::string      platformId,
        ::std::vector<int> selectedChatMessages
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::IClientInstance& clientInstance);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
