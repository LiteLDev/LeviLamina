#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/DirtyFlag.h"
#include "mc/client/gui/screens/controllers/MainMenuScreenController.h"

// auto generated forward declare list
// clang-format off
class LibraryCollection;
class PlayScreenModel;
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
    virtual ~EDUWorldTemplatesScreenController() /*override*/ = default;

    virtual void onOpen() /*override*/;

    virtual ::ui::DirtyFlag tick() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit EDUWorldTemplatesScreenController(::std::shared_ptr<::PlayScreenModel> model);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::std::shared_ptr<::PlayScreenModel> model);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
