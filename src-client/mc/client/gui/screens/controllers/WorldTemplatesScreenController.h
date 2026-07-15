#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/DirtyFlag.h"
#include "mc/client/gui/screens/controllers/CreateWorldOrRealm.h"
#include "mc/client/gui/screens/controllers/MainMenuScreenController.h"
#include "mc/resources/InvalidPacksFilterGroup.h"

// auto generated forward declare list
// clang-format off
class DlcUIWrapper;
class PlatformMultiplayerRestrictions;
class PlayScreenModel;
class ResourceLocation;
struct WorldTemplateInfo;
namespace Json { class Value; }
namespace ui { class ScreenTechStackSelector; }
// clang-format on

class WorldTemplatesScreenController : public ::MainMenuScreenController {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::PlayScreenModel>>                mPlayScreenModel;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::DlcUIWrapper>>                    mDlcUIWrapper;
    ::ll::TypedStorage<8, 32, ::std::string>                                       mFilter;
    ::ll::TypedStorage<8, 24, ::InvalidPacksFilterGroup>                           mInvalidPacksFilter;
    ::ll::TypedStorage<8, 24, ::std::vector<::ResourceLocation>>                   mInvalidPacks;
    ::ll::TypedStorage<8, 24, ::std::vector<::ResourceLocation>>                   mLoadingPacks;
    ::ll::TypedStorage<8, 24, ::std::vector<::WorldTemplateInfo>>                  mPremiumTemplates;
    ::ll::TypedStorage<8, 24, ::std::vector<::WorldTemplateInfo>>                  mCustomTemplates;
    ::ll::TypedStorage<8, 8, ::std::chrono::steady_clock::time_point>              mLocalTemplateUpdateTime;
    ::ll::TypedStorage<8, 8, ::std::chrono::steady_clock::time_point>              mUpdateTime;
    ::ll::TypedStorage<4, 4, ::CreateWorldOrRealm>                                 mType;
    ::ll::TypedStorage<1, 1, bool>                                                 mHideTopBar;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::PlatformMultiplayerRestrictions>> mPlatformMultiplayerRestrictions;
    ::ll::TypedStorage<8, 8, ::ui::ScreenTechStackSelector const&>                 mScreenTechStackSelector;
    // NOLINTEND

public:
    // prevent constructor by default
    WorldTemplatesScreenController& operator=(WorldTemplatesScreenController const&);
    WorldTemplatesScreenController(WorldTemplatesScreenController const&);
    WorldTemplatesScreenController();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~WorldTemplatesScreenController() /*override*/ = default;

    virtual void onOpen() /*override*/;

    virtual ::ui::DirtyFlag tick() /*override*/;

    virtual void addStaticScreenVars(::Json::Value& globalVars) /*override*/;

    virtual int getScreenVersion() const /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI WorldTemplatesScreenController(
        ::std::shared_ptr<::PlayScreenModel> model,
        ::ui::ScreenTechStackSelector const& screenTechStackSelector,
        bool                                 hideTopBar
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        ::std::shared_ptr<::PlayScreenModel> model,
        ::ui::ScreenTechStackSelector const& screenTechStackSelector,
        bool                                 hideTopBar
    );
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
