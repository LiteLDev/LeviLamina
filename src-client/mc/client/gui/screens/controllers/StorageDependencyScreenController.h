#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/ViewRequest.h"
#include "mc/client/gui/screens/controllers/MainMenuScreenController.h"
#include "mc/client/gui/screens/controllers/ModalScreenButtonId.h"

// auto generated forward declare list
// clang-format off
class IContentManager;
class MainMenuScreenModel;
struct ContentItem;
struct PackContentItem;
// clang-format on

class StorageDependencyScreenController : public ::MainMenuScreenController {
public:
    // StorageDependencyScreenController inner types define
    using ConstContentItemPtr = ::std::shared_ptr<::ContentItem const>;

    using ConstPackContentItemPtr = ::std::shared_ptr<::PackContentItem const>;

    using PackContentItemPtr = ::std::shared_ptr<::PackContentItem>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::IContentManager&>                                         mContentManager;
    ::ll::TypedStorage<8, 8, ::std::vector<::std::shared_ptr<::ContentItem const>>&>     mSelectedItems;
    ::ll::TypedStorage<8, 24, ::std::vector<::std::shared_ptr<::PackContentItem const>>> mDependentItems;
    // NOLINTEND

public:
    // prevent constructor by default
    StorageDependencyScreenController& operator=(StorageDependencyScreenController const&);
    StorageDependencyScreenController(StorageDependencyScreenController const&);
    StorageDependencyScreenController();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~StorageDependencyScreenController() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI StorageDependencyScreenController(
        ::std::shared_ptr<::MainMenuScreenModel>               model,
        ::IContentManager&                                     contentManager,
        ::std::vector<::std::shared_ptr<::ContentItem const>>& selectedItems
    );

    MCAPI void
    _populateAllDependencies(::std::vector<::std::shared_ptr<::PackContentItem const>> const& dependentContent);

    MCAPI void _populateDependencies();

    MCAPI void _registerBindings();

    MCAPI ::ui::ViewRequest createDepdendencyPopup(::std::function<void(::ModalScreenButtonId)> callback);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        ::std::shared_ptr<::MainMenuScreenModel>               model,
        ::IContentManager&                                     contentManager,
        ::std::vector<::std::shared_ptr<::ContentItem const>>& selectedItems
    );
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftableForScreenController();

    MCNAPI static void** $vftableForEnableNonOwnerReferences();
    // NOLINTEND
};
