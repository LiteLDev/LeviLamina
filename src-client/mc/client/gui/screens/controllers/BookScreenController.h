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
struct UIPropertyBag;
namespace Json { class Value; }
// clang-format on

class BookScreenController : public ::ClientInstanceScreenController {
public:
    // BookScreenController inner types define
    enum class BookView : uchar {};

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
    virtual ~BookScreenController() /*override*/;

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

    MCAPI void _addPageAt(int index, ::PageContent const& page);

    MCAPI void _addPhotoPageAt(int index, ::std::string const& photoName);

    MCAPI void _deletePage(int index);

    MCAPI void _editPageText(int index);

    MCAPI ::std::string const& _getPageText(int index, bool isBeingEdited);

    MCAPI int _getPickIndex(char const* collectionPrefix, ::UIPropertyBag& bag);

    MCAPI void _loadAuthorFromBook();

    MCAPI void _loadTextFromBook();

    MCAPI void _loadTitleFromBook();

    MCAPI void _parsePageText(int index);

    MCAPI void _registerBindings();

    MCAPI void _registerEventHandlers();

    MCAPI void _swapPages(int page1Index, int page2Index);

    MCAPI void _tickExport();

    MCAPI void _tryFirePageTurnSound(::UIPropertyBag const& bag) const;

    MCAPI void _viewPage(int pageIndex);
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
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $addStaticScreenVars(::Json::Value& globalVars);

    MCAPI void $preFrameTick();

    MCAPI ::ui::DirtyFlag $tick();

    MCAPI bool $_isStillValid() const;

    MCAPI ::std::string $_getButtonBDescription();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftableForEnableNonOwnerReferences();

    MCNAPI static void** $vftableForScreenController();
    // NOLINTEND
};
