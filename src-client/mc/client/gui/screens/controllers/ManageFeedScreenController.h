#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/DirtyFlag.h"
#include "mc/client/gui/screens/controllers/ClubsBaseController.h"

// auto generated forward declare list
// clang-format off
class MainMenuScreenModel;
namespace Clubs { struct FeedItem; }
namespace Clubs { struct ReportedItem; }
namespace Realms { struct World; }
// clang-format on

class ManageFeedScreenController : public ::ClubsBaseController {
public:
    // ManageFeedScreenController inner types define
    enum class Reason : int {};

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, int>                                   mFeedPageIndex;
    ::ll::TypedStorage<4, 4, int>                                   mPreviousPageIndex;
    ::ll::TypedStorage<8, 24, ::std::vector<::Clubs::ReportedItem>> mReportedFeed;
    // NOLINTEND

public:
    // prevent constructor by default
    ManageFeedScreenController();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ManageFeedScreenController() /*override*/ = default;

    virtual ::ui::DirtyFlag tick() /*override*/;

    virtual void addEventProperties(::std::unordered_map<::std::string, ::std::string>& eventProperties) const
        /*override*/;

    virtual ::Clubs::FeedItem& _getFeedItem(int const i) /*override*/;

    virtual int _getFeedSize() const /*override*/;

    virtual void _updateFeed() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ManageFeedScreenController(::std::shared_ptr<::MainMenuScreenModel> model, ::Realms::World const& world);

    MCAPI void _closeModalDialog();

    MCAPI void
    _ignoreReportedItem(::Clubs::ReportedItem const& reportedItem, ::ManageFeedScreenController::Reason const& reason);

    MCAPI void _initializeReportFeed();

    MCAPI void _registerBindings();

    MCAPI void _registerEventHandlers();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::std::shared_ptr<::MainMenuScreenModel> model, ::Realms::World const& world);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::ui::DirtyFlag $tick();

    MCAPI void $addEventProperties(::std::unordered_map<::std::string, ::std::string>& eventProperties) const;

    MCAPI ::Clubs::FeedItem& $_getFeedItem(int const i);

    MCAPI int $_getFeedSize() const;

    MCAPI void $_updateFeed();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftableForScreenController();

    MCNAPI static void** $vftableForEnableNonOwnerReferences();
    // NOLINTEND
};
