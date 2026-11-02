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
    MCNAPI explicit DayOneExperienceIntroScreenController(::std::shared_ptr<::MainMenuScreenModel> model);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::std::shared_ptr<::MainMenuScreenModel> model);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::std::string $getAdditionalScreenInfo() const;

    MCNAPI void $addStaticScreenVars(::Json::Value& globalVars);

    MCNAPI void $onOpen();

    MCNAPI ::ui::SceneType $getSceneType() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftableForScreenController();

    MCNAPI static void** $vftableForEnableNonOwnerReferences();
    // NOLINTEND
};
