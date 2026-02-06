#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/SceneType.h"
#include "mc/client/gui/screens/controllers/DayOneExperienceIntroScreenTabs.h"
#include "mc/client/gui/screens/controllers/MainMenuScreenController.h"

// auto generated forward declare list
// clang-format off
class MainMenuScreenModel;
namespace Json { class Value; }
// clang-format on

class DayOneExperienceIntroScreenController : public ::MainMenuScreenController {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, ::DayOneExperienceIntroScreenTabs> mActiveTabIndex;
    // NOLINTEND

public:
    // prevent constructor by default
    DayOneExperienceIntroScreenController();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~DayOneExperienceIntroScreenController() /*override*/ = default;

    virtual ::std::string getAdditionalScreenInfo() const /*override*/;

    virtual void addStaticScreenVars(::Json::Value& globalVars) /*override*/;

    virtual void onOpen() /*override*/;

    virtual ::ui::SceneType getSceneType() const /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit DayOneExperienceIntroScreenController(::std::shared_ptr<::MainMenuScreenModel> model);

    MCAPI ::std::string _getActiveTab() const;
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::std::shared_ptr<::MainMenuScreenModel> model);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::std::string $getAdditionalScreenInfo() const;

    MCAPI void $addStaticScreenVars(::Json::Value& globalVars);

    MCAPI void $onOpen();

    MCFOLD ::ui::SceneType $getSceneType() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftableForScreenController();

    MCNAPI static void** $vftableForEnableNonOwnerReferences();
    // NOLINTEND
};
