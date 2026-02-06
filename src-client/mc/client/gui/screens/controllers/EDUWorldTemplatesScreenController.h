#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/DirtyFlag.h"
#include "mc/client/gui/screens/controllers/MainMenuScreenController.h"
#include "mc/client/gui/screens/controllers/edu_screen_helpers/InstanceType.h"

// auto generated forward declare list
// clang-format off
class PackManifest;
class PlayScreenModel;
struct LibraryCollection;
struct UIPropertyBag;
namespace EDUScreenHelpers { class TemplateWrapper; }
// clang-format on

class EDUWorldTemplatesScreenController : public ::MainMenuScreenController {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::PlayScreenModel>>   mPlayScreenModel;
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::LibraryCollection>> mLibraryCollection;
    ::ll::TypedStorage<1, 1, bool>                                    mScreenNeedsRefresh;
    ::ll::TypedStorage<8, 32, ::std::string>                          mSearchString;
    ::ll::TypedStorage<8, 24, ::std::vector<uint64>>                  mMatchedTemplates;
    ::ll::TypedStorage<8, 8, uint64>                                  mLocalTemplateCount;
    // NOLINTEND

public:
    // prevent constructor by default
    EDUWorldTemplatesScreenController();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~EDUWorldTemplatesScreenController() /*override*/;

    virtual void onOpen() /*override*/;

    virtual ::ui::DirtyFlag tick() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit EDUWorldTemplatesScreenController(::std::shared_ptr<::PlayScreenModel> model);

    MCAPI void _createOrDeleteTemplate(::UIPropertyBag& bag, ::EDUScreenHelpers::InstanceType instanceType);

    MCAPI ::EDUScreenHelpers::TemplateWrapper _getTemplateInfo(::UIPropertyBag& bag) const;

    MCAPI uint64 _getTileIndex(::UIPropertyBag& bag) const;

    MCAPI void _registerBindings();

    MCAPI void _registerEventHandlers();

    MCAPI void _registerNestedControls();

    MCAPI void _registerSubcontrollers();

    MCAPI void _useTemplate(
        ::PackManifest const&            manifest,
        ::EDUScreenHelpers::InstanceType type,
        ::std::string_view               templateName
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::std::shared_ptr<::PlayScreenModel> model);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $onOpen();

    MCAPI ::ui::DirtyFlag $tick();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftableForEnableNonOwnerReferences();

    MCNAPI static void** $vftableForScreenController();
    // NOLINTEND
};
