#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/input/BindingFactory.h"
#include "mc/deps/input/RectangleArea.h"
#include "mc/options/option_types/OptionID.h"

// auto generated forward declare list
// clang-format off
class ClientInputHandler;
class IClientInstance;
struct Config;
// clang-format on

class ClientBindingFactory : public ::BindingFactory {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::std::map<uint, ::std::function<float()>>>               mFloatBindings;
    ::ll::TypedStorage<8, 16, ::std::map<uint, ::std::function<void(float)>>>           mFloatSetters;
    ::ll::TypedStorage<8, 16, ::std::map<uint, ::std::function<bool()>>>                mBoolBindings;
    ::ll::TypedStorage<8, 16, ::std::map<uint, ::std::function<::RectangleArea()>>>     mAreaBindings;
    ::ll::TypedStorage<8, 16, ::std::map<uint, ::std::function<::std::string()>>>       mStringBindings;
    ::ll::TypedStorage<8, 16, ::std::map<uint, ::std::function<::glm::vec2()>>>         mPointBindings;
    ::ll::TypedStorage<8, 16, ::std::map<uint, ::std::function<void(::RectangleArea)>>> mDynamicAreaBindings;
    ::ll::TypedStorage<8, 8, ::ClientInputHandler const&>                               mClientInputHandler;
    ::ll::TypedStorage<8, 8, ::IClientInstance&>                                        mClient;
    ::ll::TypedStorage<4, 16, ::RectangleArea>                                          mEmpty;
    ::ll::TypedStorage<4, 16, ::RectangleArea>                                          mTurnInteract;
    ::ll::TypedStorage<4, 16, ::RectangleArea>                                          mDPadNoTurnInteractArea;
    ::ll::TypedStorage<4, 16, ::RectangleArea>                                          mGuiPassthrough;
    ::ll::TypedStorage<4, 16, ::RectangleArea>                                          mHotbarGuiPassthrough;
    ::ll::TypedStorage<4, 16, ::RectangleArea>                                          mChangingFlightHeight;
    ::ll::TypedStorage<4, 16, ::RectangleArea>                                          mLeft;
    ::ll::TypedStorage<4, 16, ::RectangleArea>                                          mRight;
    ::ll::TypedStorage<4, 16, ::RectangleArea>                                          mUpInvisible;
    ::ll::TypedStorage<4, 16, ::RectangleArea>                                          mDownInvisible;
    ::ll::TypedStorage<4, 16, ::RectangleArea>                                          mUp;
    ::ll::TypedStorage<4, 16, ::RectangleArea>                                          mDown;
    ::ll::TypedStorage<4, 16, ::RectangleArea>                                          mAscend;
    ::ll::TypedStorage<4, 16, ::RectangleArea>                                          mMiddleRight;
    ::ll::TypedStorage<4, 16, ::RectangleArea>                                          mDescend;
    ::ll::TypedStorage<4, 16, ::RectangleArea>                                          mPause;
    ::ll::TypedStorage<4, 16, ::RectangleArea>                                          mEmote;
    ::ll::TypedStorage<4, 16, ::RectangleArea>                                          mChat;
    ::ll::TypedStorage<4, 16, ::RectangleArea>                                          mTogglePerspective;
    ::ll::TypedStorage<4, 16, ::RectangleArea>                                          mJump;
    ::ll::TypedStorage<4, 16, ::RectangleArea>                                          mUpLeft;
    ::ll::TypedStorage<4, 16, ::RectangleArea>                                          mUpRight;
    ::ll::TypedStorage<4, 16, ::RectangleArea>                                          mDownLeft;
    ::ll::TypedStorage<4, 16, ::RectangleArea>                                          mDownRight;
    ::ll::TypedStorage<4, 16, ::RectangleArea>                                          mPlayerEffects;
    ::ll::TypedStorage<4, 16, ::RectangleArea>                                          mPaddleRight;
    ::ll::TypedStorage<4, 16, ::RectangleArea>                                          mPaddleLeft;
    ::ll::TypedStorage<4, 16, ::RectangleArea>                                          mSneak;
    ::ll::TypedStorage<4, 16, ::RectangleArea>                                          mMobEffects;
    ::ll::TypedStorage<4, 16, ::RectangleArea>                                          mToastArea;
    ::ll::TypedStorage<4, 16, ::RectangleArea>                                          mCodeBuilder;
    ::ll::TypedStorage<4, 16, ::RectangleArea>                                          mImmersiveReader;
    ::ll::TypedStorage<4, 16, ::RectangleArea>                                          mDestroyOrAttack;
    ::ll::TypedStorage<4, 16, ::RectangleArea>                                          mBuildOrInteract;
    ::ll::TypedStorage<4, 16, ::RectangleArea>                                          mBlockSelect;
    ::ll::TypedStorage<4, 16, ::RectangleArea>                                          mBlockSelectNewControls;
    ::ll::TypedStorage<4, 16, ::RectangleArea>                                          mDefaultMoveStickArea;
    ::ll::TypedStorage<8, 64, ::std::function<void(::RectangleArea)>>                   mInteractSetter;
    ::ll::TypedStorage<4, 16, ::RectangleArea>                                          mInteractSize;
    ::ll::TypedStorage<4, 16, ::RectangleArea>                                          mSneakNewControls;
    ::ll::TypedStorage<4, 16, ::RectangleArea>                                          mJumpNewControls;
    ::ll::TypedStorage<4, 16, ::RectangleArea>                                          mSprintNewControls;
    ::ll::TypedStorage<8, 16, ::std::map<uint, ::std::shared_ptr<::RectangleArea>>>     mCustomRectangleAreas;
    ::ll::TypedStorage<8, 16, ::std::map<uint, ::RectangleArea>>                        mCustomAreaFractions;
    ::ll::TypedStorage<4, 8, ::glm::vec2>                                               mInteractCreative;
    ::ll::TypedStorage<4, 8, ::glm::vec2>                                               mInteractSurvival;
    ::ll::TypedStorage<4, 16, ::RectangleArea>                                          mFinalSafeScreenArea;
    // NOLINTEND

public:
    // prevent constructor by default
    ClientBindingFactory& operator=(ClientBindingFactory const&);
    ClientBindingFactory(ClientBindingFactory const&);
    ClientBindingFactory();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ClientBindingFactory() /*override*/;

    virtual ::std::function<bool()> getBooleanBinding(uint name) const /*override*/;

    virtual ::std::function<float()> getFloatBinding(uint name) const /*override*/;

    virtual ::std::function<::std::string()> getStringBinding(uint name) const /*override*/;

    virtual ::std::function<::glm::vec2()> getPointBinding(uint name) const /*override*/;

    virtual ::std::function<::RectangleArea()> getAreaBinding(uint name) const /*override*/;

    virtual ::std::function<void(::RectangleArea)> getDynamicAreaBinding(uint name) const /*override*/;

    virtual ::std::function<void(float)> getFloatSetter(uint name) const /*override*/;

    virtual void setCustomAreaBinding(::std::string const& name, ::RectangleArea area) /*override*/;

    virtual void removeCustomAreaBinding(::std::string const& name) /*override*/;

    virtual ::std::vector<uint> getCustomAreaBindingNames() const /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ClientBindingFactory(::ClientInputHandler const& clientInputHandler, ::IClientInstance& client);

    MCAPI bool _blockSelectEnabled() const;

    MCAPI ::RectangleArea
    _calculateClassicButtonRectangleWithOptionIDs(::OptionID posX, ::OptionID posY, ::OptionID scale) const;

    MCAPI ::RectangleArea _calculateClassicDpadRectangle() const;

    MCAPI void _clearCustomAreaBindings();

    MCAPI ::RectangleArea _fitToScreen(::RectangleArea const& rectangle) const;

    MCAPI ::std::vector<::RectangleArea*> _getActiveTopTouchButtons();

    MCAPI bool _touchButtonsVisible() const;

    MCAPI void onConfigChanged(::Config const& c);

    MCAPI void setupAreaBindings();

    MCAPI void setupBoolBindings();

    MCAPI void setupFloatBindings();

    MCAPI void setupFloatSetters();

    MCAPI void setupStringBindings();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::ClientInputHandler const& clientInputHandler, ::IClientInstance& client);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::std::function<bool()> $getBooleanBinding(uint name) const;

    MCAPI ::std::function<float()> $getFloatBinding(uint name) const;

    MCAPI ::std::function<::std::string()> $getStringBinding(uint name) const;

    MCAPI ::std::function<::glm::vec2()> $getPointBinding(uint name) const;

    MCAPI ::std::function<::RectangleArea()> $getAreaBinding(uint name) const;

    MCAPI ::std::function<void(::RectangleArea)> $getDynamicAreaBinding(uint name) const;

    MCAPI ::std::function<void(float)> $getFloatSetter(uint name) const;

    MCAPI void $setCustomAreaBinding(::std::string const& name, ::RectangleArea area);

    MCAPI void $removeCustomAreaBinding(::std::string const& name);

    MCAPI ::std::vector<uint> $getCustomAreaBindingNames() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
