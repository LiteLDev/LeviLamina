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
    BatchKey& operator=(BatchKey const&);
    BatchKey();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI BatchKey(::BatchKey&& rha);

    MCAPI BatchKey(::BatchKey const& rha);

    MCAPI bool operator==(::BatchKey const& rhs) const;

    MCAPI ~BatchKey();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::BatchKey&& rha);

    MCAPI void* $ctor(::BatchKey const& rha);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
