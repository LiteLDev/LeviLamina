#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/DirtyFlag.h"
#include "mc/client/gui/ViewRequest.h"
#include "mc/client/gui/screens/ScreenController.h"
#include "mc/client/player/PickCustomSkinResult.h"
#include "mc/client/social/UserPlatformConnectionResult.h"
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"

// auto generated forward declare list
// clang-format off
class UIPropertyBag;
// clang-format on

class MinecraftScreenController : public ::ScreenController,
                                  public ::Bedrock::EnableNonOwnerReferences,
                                  public ::std::enable_shared_from_this<::MinecraftScreenController> {
public:
    // MinecraftScreenController inner types declare
    // clang-format off
    struct LeaveScreenInfo;
    // clang-format on

    // MinecraftScreenController inner types define
    struct LeaveScreenInfo {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<1, 1>  mUnkdf9d74;
        ::ll::UntypedStorage<8, 32> mUnke11e12;
        // NOLINTEND

    public:
        // prevent constructor by default
        LeaveScreenInfo& operator=(LeaveScreenInfo const&);
        LeaveScreenInfo(LeaveScreenInfo const&);
        LeaveScreenInfo();
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnk597512;
    ::ll::UntypedStorage<4, 4>  mUnk6b49e5;
    ::ll::UntypedStorage<4, 4>  mUnk3fbbc6;
    ::ll::UntypedStorage<4, 4>  mUnkf658f0;
    ::ll::UntypedStorage<4, 4>  mUnk9d8073;
    ::ll::UntypedStorage<4, 4>  mUnk89309d;
    ::ll::UntypedStorage<1, 1>  mUnk398789;
    ::ll::UntypedStorage<8, 64> mUnk74da16;
    ::ll::UntypedStorage<8, 32> mUnk88ae43;
    ::ll::UntypedStorage<8, 32> mUnke0c100;
    ::ll::UntypedStorage<8, 40> mUnk48d201;
    ::ll::UntypedStorage<1, 1>  mUnk500617;
    ::ll::UntypedStorage<8, 64> mUnked78bd;
    ::ll::UntypedStorage<8, 64> mUnkba0362;
    ::ll::UntypedStorage<1, 1>  mUnk611fb7;
    // NOLINTEND

public:
    // prevent constructor by default
    MinecraftScreenController& operator=(MinecraftScreenController const&);
    MinecraftScreenController(MinecraftScreenController const&);
    MinecraftScreenController();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~MinecraftScreenController() /*override*/ = default;

    // vIndex: 12
    virtual ::ui::ViewRequest tryExit() /*override*/;

    // vIndex: 2
    virtual ::ui::DirtyFlag tick() /*override*/;

    // vIndex: 33
    virtual uint getSceneId() const /*override*/;

    // vIndex: 24
    virtual void setSuspendInput(bool) /*override*/;

    // vIndex: 25
    virtual void setSuspendDirectionalInput(bool) /*override*/;

    // vIndex: 16
    virtual void leaveScreen(::std::string const&) /*override*/;

    // vIndex: 9
    virtual void onInit() /*override*/;

    // vIndex: 10
    virtual void onDelete() /*override*/;

    // vIndex: 6
    virtual void onOpen() /*override*/;

    // vIndex: 21
    virtual void onDictationEvent(::std::string const&) /*override*/;

    // vIndex: 19
    virtual bool bind(
        ::std::string const&,
        uint,
        int,
        ::std::string const&,
        uint,
        ::std::string const&,
        ::UIPropertyBag&
    ) /*override*/;

    // vIndex: 18
    virtual bool bind(::std::string const&, uint, ::std::string const&, ::UIPropertyBag&) /*override*/;

    // vIndex: 39
    virtual bool _doesScreenHaveExitBehavior() const /*override*/;

    // vIndex: 41
    virtual bool _isStillValid() const;

    // vIndex: 42
    virtual bool _getGamepadHelperVisible() const;

    // vIndex: 43
    virtual bool _getMixedHelperVisible() const;

    // vIndex: 44
    virtual bool _getKeyboardHelperVisible() const;

    // vIndex: 45
    virtual bool _getGestureControlEnabled() const;

    // vIndex: 46
    virtual ::std::string _getButtonStartDescription();

    // vIndex: 47
    virtual ::std::string _getButtonADescription();

    // vIndex: 48
    virtual ::std::string _getButtonBDescription();

    // vIndex: 49
    virtual ::std::string _getButtonXDescription();

    // vIndex: 50
    virtual ::std::string _getButtonYDescription();

    // vIndex: 51
    virtual ::std::string _getButtonKeyboardDescription();

    // vIndex: 52
    virtual void showPickCustomSkinDialog(::std::function<void(::PickCustomSkinResult)>);

    // vIndex: 53
    virtual ::std::string _getScreenName() const;

    // vIndex: 54
    virtual ::ui::ViewRequest promptConnect(bool, ::std::function<void(::Social::UserPlatformConnectionResult)>);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
