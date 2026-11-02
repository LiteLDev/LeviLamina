#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/input/RectangleArea.h"

// auto generated forward declare list
// clang-format off
class Config;
class IClientInstance;
struct EffectDisplayInfo;
// clang-format on

class MobEffectsLayout {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::IClientInstance&>                  mClient;
    ::ll::TypedStorage<4, 16, ::RectangleArea>                    mTouchArea;
    ::ll::TypedStorage<8, 24, ::std::vector<::EffectDisplayInfo>> mEffectDisplays;
    ::ll::TypedStorage<4, 4, int>                                 mLastEffectCount;
    ::ll::TypedStorage<4, 4, int>                                 mIconStartY;
    ::ll::TypedStorage<4, 4, int>                                 mIconStartX;
    ::ll::TypedStorage<4, 4, int>                                 mIconSize;
    ::ll::TypedStorage<4, 4, int>                                 mOffsetToStartingPositionY;
    ::ll::TypedStorage<4, 4, int>                                 mOffsetToStartingPositionX;
    ::ll::TypedStorage<4, 4, int>                                 mWidth;
    ::ll::TypedStorage<4, 4, int>                                 mHeight;
    ::ll::TypedStorage<4, 4, float>                               mSafeZoneStartY;
    ::ll::TypedStorage<4, 4, float>                               mSafeZoneStartX;
    ::ll::TypedStorage<4, 4, float>                               mScreenHeight;
    // NOLINTEND

public:
    // prevent constructor by default
    MobEffectsLayout& operator=(MobEffectsLayout const&);
    MobEffectsLayout(MobEffectsLayout const&);
    MobEffectsLayout();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit MobEffectsLayout(::IClientInstance& client);

    MCNAPI void _updateAnimations();

    MCNAPI void _updatePositions();

    MCNAPI void onConfigChanged(::Config const& c);

    MCNAPI void setHeight(int val);

    MCNAPI void setWidth(int val);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::IClientInstance& client);
    // NOLINTEND
};
