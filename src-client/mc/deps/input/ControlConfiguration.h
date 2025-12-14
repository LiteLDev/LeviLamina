#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class ControlOption;
class FloatControlOption;
class PointControlOption;
// clang-format on

class ControlConfiguration {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, uint>                                               mConfigId;
    ::ll::TypedStorage<4, 4, uint>                                               mConfigCategory;
    ::ll::TypedStorage<4, 4, uint>                                               mConfigGroup;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::PointControlOption>>            mPosition;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::FloatControlOption>>            mScale;
    ::ll::TypedStorage<8, 24, ::std::vector<::std::unique_ptr<::ControlOption>>> mSubOptions;
    ::ll::TypedStorage<8, 64, ::std::function<bool()>>                           mEnabled;
    ::ll::TypedStorage<1, 1, bool>                                               mOverlapping;
    ::ll::TypedStorage<1, 1, bool>                                               mActive;
    ::ll::TypedStorage<4, 4, float>                                              mBaseWidth;
    ::ll::TypedStorage<4, 4, float>                                              mBaseHeight;
    ::ll::TypedStorage<4, 4, float>                                              mAspectRatio;
    ::ll::TypedStorage<1, 1, bool>                                               mKeepAspectRatio;
    ::ll::TypedStorage<4, 4, float>                                              mInitialDx;
    ::ll::TypedStorage<4, 4, float>                                              mInitialDy;
    // NOLINTEND

public:
    // prevent constructor by default
    ControlConfiguration();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ControlConfiguration(
        uint                                    id,
        uint                                    configCategory,
        uint                                    configGroup,
        ::std::function<bool()>                 enabled,
        ::std::unique_ptr<::PointControlOption> position,
        ::std::unique_ptr<::FloatControlOption> scale,
        float                                   baseWidth,
        float                                   baseHeight,
        float                                   aspectRatio,
        bool                                    keepAspectRatio
    );

    MCAPI void addSubOption(::std::unique_ptr<::ControlOption> subOption);

    MCAPI void updatePosition(float x, float y);

    MCAPI ~ControlConfiguration();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        uint                                    id,
        uint                                    configCategory,
        uint                                    configGroup,
        ::std::function<bool()>                 enabled,
        ::std::unique_ptr<::PointControlOption> position,
        ::std::unique_ptr<::FloatControlOption> scale,
        float                                   baseWidth,
        float                                   baseHeight,
        float                                   aspectRatio,
        bool                                    keepAspectRatio
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
