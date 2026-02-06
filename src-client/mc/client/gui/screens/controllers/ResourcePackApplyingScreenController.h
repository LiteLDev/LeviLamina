#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/DirtyFlag.h"
#include "mc/client/gui/SceneType.h"
#include "mc/client/gui/screens/controllers/MainMenuScreenController.h"

// auto generated forward declare list
// clang-format off
class MainMenuScreenModel;
class MinecraftScreenModel;
namespace Json { class Value; }
// clang-format on

class ResourcePackApplyingScreenController : public ::MainMenuScreenController {
public:
    // ResourcePackApplyingScreenController inner types define
    using ApplyPacksCallback = ::std::function<void(::MinecraftScreenModel&)>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::std::string>                                  mScreenName;
    ::ll::TypedStorage<8, 64, ::std::function<void(::MinecraftScreenModel&)>> mApplyPacks;
    ::ll::TypedStorage<1, 1, bool>                                            mHasTicked;
    // NOLINTEND

public:
    // prevent constructor by default
    ResourcePackApplyingScreenController();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ::ui::DirtyFlag tick() /*override*/;

    virtual void addStaticScreenVars(::Json::Value& globalVars) /*override*/;

    virtual ::ui::SceneType getSceneType() const /*override*/;

    virtual ~ResourcePackApplyingScreenController() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ResourcePackApplyingScreenController(
        ::std::shared_ptr<::MainMenuScreenModel>       model,
        ::std::string const&                           screenName,
        ::std::function<void(::MinecraftScreenModel&)> applyPacks
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        ::std::shared_ptr<::MainMenuScreenModel>       model,
        ::std::string const&                           screenName,
        ::std::function<void(::MinecraftScreenModel&)> applyPacks
    );
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::ui::DirtyFlag $tick();

    MCAPI void $addStaticScreenVars(::Json::Value& globalVars);

    MCFOLD ::ui::SceneType $getSceneType() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftableForEnableNonOwnerReferences();

    MCNAPI static void** $vftableForScreenController();
    // NOLINTEND
};
