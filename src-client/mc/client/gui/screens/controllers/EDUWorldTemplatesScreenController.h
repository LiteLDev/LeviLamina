#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/DirtyFlag.h"
#include "mc/client/gui/screens/controllers/MainMenuScreenController.h"
#include "mc/client/gui/screens/controllers/edu_screen_helpers/InstanceType.h"

// auto generated forward declare list
// clang-format off
class LibraryCollection;
class PackManifest;
class PlayScreenModel;
class UIPropertyBag;
// clang-format on

class EduWorldTemplatesScreenController : public ::MainMenuScreenController {
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
    EduWorldTemplatesScreenController();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~EduWorldTemplatesScreenController() /*override*/ = default;

    virtual void onOpen() /*override*/;

    virtual ::ui::DirtyFlag tick() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit EduWorldTemplatesScreenController(::std::shared_ptr<::PlayScreenModel> model);

    MCNAPI void _createOrDeleteTemplate(::UIPropertyBag& bag, ::EduScreenHelpers::InstanceType instanceType);

    MCNAPI void _useTemplate(
        ::PackManifest const&            manifest,
        ::EduScreenHelpers::InstanceType type,
        ::std::string_view               templateName
    );
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static uint64 _getTileIndex(::UIPropertyBag& bag);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::std::shared_ptr<::PlayScreenModel> model);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $onOpen();

    MCNAPI ::ui::DirtyFlag $tick();
    // NOLINTEND
};
