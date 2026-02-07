#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/math/Color.h"
#include "mc/deps/core/memory/LinearAllocator.h"

// auto generated forward declare list
// clang-format off
struct ActorShadowRenderObject;
struct FrameRenderObject;
namespace mce { class MaterialPtr; }
namespace mce { class Mesh; }
// clang-format on

struct ActorShadowRenderObjectCollection {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 40, ::std::vector<::ActorShadowRenderObject, ::LinearAllocator<::ActorShadowRenderObject>>>
                                                              mEntityShadows;
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::mce::Mesh>> mShadowCylinder;
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::mce::Mesh>> mShadowOverlayCube;
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::mce::Mesh>> mShadowDisc;
    ::ll::TypedStorage<8, 8, ::mce::MaterialPtr const*>       mShadowVolumeFront;
    ::ll::TypedStorage<8, 8, ::mce::MaterialPtr const*>       mShadowVolumeBack;
    ::ll::TypedStorage<8, 8, ::mce::MaterialPtr const*>       mShadowOverlayMat;
    ::ll::TypedStorage<4, 16, ::mce::Color>                   mShadowColor;
    // NOLINTEND

public:
    // prevent constructor by default
    ActorShadowRenderObjectCollection();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit ActorShadowRenderObjectCollection(::LinearAllocator<::FrameRenderObject>& alloc);

    MCAPI ~ActorShadowRenderObjectCollection();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::LinearAllocator<::FrameRenderObject>& alloc);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
