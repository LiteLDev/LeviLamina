#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/controls/UIMaterialType.h"
#include "mc/client/gui/screens/BatchClippingState.h"
#include "mc/client/gui/screens/UIBatchType.h"
#include "mc/client/gui/screens/UIItemRenderInfo.h"
#include "mc/deps/core/math/Color.h"
#include "mc/deps/core/resource/ResourceLocation.h"

struct BatchKey {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, ::UIBatchType>                         mBatchType;
    ::ll::TypedStorage<4, 4, int>                                   mCustomId;
    ::ll::TypedStorage<4, 4, int>                                   mDepth;
    ::ll::TypedStorage<4, 4, float>                                 mAlpha;
    ::ll::TypedStorage<4, 16, ::mce::Color>                         mColor;
    ::ll::TypedStorage<4, 4, ::UIMaterialType>                      mUIMaterialType;
    ::ll::TypedStorage<4, 20, ::BatchClippingState>                 mClippingState;
    ::ll::TypedStorage<8, 112, ::std::array<::ResourceLocation, 2>> mResourceLocations;
    ::ll::TypedStorage<1, 1, ::UIItemRenderInfo>                    mUIItemRenderInfo;
    // NOLINTEND

public:
    // prevent constructor by default
    BatchKey();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI BatchKey(int depth, float alpha, ::BatchClippingState const& clippingState);

    MCAPI BatchKey(
        int                         depth,
        float                       alpha,
        ::mce::Color const&         color,
        ::ResourceLocation const&   resourceLocation,
        ::BatchClippingState const& clippingState,
        ::UIMaterialType            materialType
    );

    MCAPI ~BatchKey();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(int depth, float alpha, ::BatchClippingState const& clippingState);

    MCAPI void* $ctor(
        int                         depth,
        float                       alpha,
        ::mce::Color const&         color,
        ::ResourceLocation const&   resourceLocation,
        ::BatchClippingState const& clippingState,
        ::UIMaterialType            materialType
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
