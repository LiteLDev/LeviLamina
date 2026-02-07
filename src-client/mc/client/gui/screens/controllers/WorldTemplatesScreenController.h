#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/DirtyFlag.h"
#include "mc/client/gui/ViewRequest.h"
#include "mc/client/gui/screens/controllers/CreateWorldOrRealm.h"
#include "mc/client/gui/screens/controllers/MainMenuScreenController.h"
#include "mc/deps/core/file/PathBuffer.h"
#include "mc/resources/InvalidPacksFilterGroup.h"

// auto generated forward declare list
// clang-format off
class DlcUIWrapper;
class PlatformMultiplayerRestrictions;
class PlayScreenModel;
class ResourceLocation;
struct PackIdVersion;
struct UIPropertyBag;
struct WorldTemplateInfo;
namespace Json { class Value; }
namespace ui { struct ScreenTechStackSelector; }
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
    virtual ~WorldTemplatesScreenController() /*override*/;

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

    MCAPI void _createWorldTemplate(::PackIdVersion const& packId, ::std::function<void(bool)> successCallback);

    MCAPI void _fetchDownloadedWorldTemplates();

    MCAPI ::ui::ViewRequest _handleGenerateRandomRealmClicked();

    MCAPI ::ui::ViewRequest _handleInvalidPackClicked(::UIPropertyBag* bag);

    MCAPI void _handleWorldTemplateClicked(::WorldTemplateInfo const& level);

    MCAPI void _registerBindings();

    MCAPI void _registerEventHandlers();
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::Core::PathBuffer<::std::string> const& DEFAULT_WORLD_SCREENSHOT();

    MCAPI static ::std::string const& INVALID_WORLD_SCREENSHOT();
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
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $onOpen();

    MCAPI ::ui::DirtyFlag $tick();

    MCAPI void $addStaticScreenVars(::Json::Value& globalVars);

    MCFOLD int $getScreenVersion() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftableForScreenController();

    MCNAPI static void** $vftableForEnableNonOwnerReferences();
    // NOLINTEND
};
