#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/DirtyFlag.h"
#include "mc/client/gui/screens/controllers/ClientInstanceScreenController.h"
#include "mc/deps/core/utility/pub_sub/Subscription.h"

// auto generated forward declare list
// clang-format off
class BlockActor;
class BookScreenManager;
class ClientInstanceScreenModel;
struct PageContent;
namespace Json { class Value; }
// clang-format on

class BookScreenController : public ::ClientInstanceScreenController {
public:
    // BookScreenController inner types define
    enum class BookView : uchar {
        Viewing   = 0,
        Signing   = 1,
        Picking   = 2,
        Exporting = 3,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::BookScreenManager>> mBookScreenManager;
    ::ll::TypedStorage<1, 1, bool const>                             mEditable;
    ::ll::TypedStorage<1, 1, bool>                                   mEditingLeft;
    ::ll::TypedStorage<1, 1, bool>                                   mEditingRight;
    ::ll::TypedStorage<1, 2, ::std::array<bool, 2>>                  mPageHasCursor;
    ::ll::TypedStorage<8, 24, ::std::vector<::PageContent>>          mPages;
    ::ll::TypedStorage<4, 4, int>                                    mCurrentPage;
    ::ll::TypedStorage<4, 4, int>                                    mCurrentPageIndex;
    ::ll::TypedStorage<8, 32, ::std::string>                         mTitle;
    ::ll::TypedStorage<8, 40, ::std::optional<::std::string>>        mFilteredTitle;
    ::ll::TypedStorage<8, 32, ::std::string>                         mAuthor;
    ::ll::TypedStorage<8, 40, ::std::optional<::std::string>>        mFilteredAuthor;
    ::ll::TypedStorage<8, 32, ::std::string>                         mAuthorXUID;
    ::ll::TypedStorage<1, 1, ::BookScreenController::BookView>       mCurrentView;
    ::ll::TypedStorage<1, 1, bool>                                   mForceUIRefresh;
    ::ll::TypedStorage<4, 4, int>                                    mPickPageIndex;
    ::ll::TypedStorage<8, 32, ::std::string>                         mPageBlockedText;
    ::ll::TypedStorage<1, 1, bool>                                   mShouldRefreshText;
    ::ll::TypedStorage<1, 1, bool>                                   mShouldUseFilteredText;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>       mProfanityToggleSubscription;
    // NOLINTEND

public:
    // prevent constructor by default
    BookScreenController();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~BookScreenController() /*override*/ = default;

    virtual void addStaticScreenVars(::Json::Value& globalVars) /*override*/;

    virtual void preFrameTick() /*override*/;

    virtual ::ui::DirtyFlag tick() /*override*/;

    virtual bool _isStillValid() const /*override*/;

    virtual ::std::string _getButtonBDescription() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI BookScreenController(
        ::std::shared_ptr<::ClientInstanceScreenModel> model,
        int                                            bookSlot,
        bool                                           editable,
        int                                            page,
        ::BlockActor*                                  lectern
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        ::std::shared_ptr<::ClientInstanceScreenModel> model,
        int                                            bookSlot,
        bool                                           editable,
        int                                            page,
        ::BlockActor*                                  lectern
    );
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
