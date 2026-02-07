#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class ParticleEngine;
class ScreenContext;
class Tessellator;
class Vec3;
// clang-format on

struct ParticleRenderContext {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::ScreenContext&>        mScreenContext;
    ::ll::TypedStorage<8, 8, ::Tessellator&>          mTessellator;
    ::ll::TypedStorage<8, 8, ::Vec3 const&>           mCameraTargetPosition;
    ::ll::TypedStorage<8, 8, ::Vec3 const&>           mCameraPosition;
    ::ll::TypedStorage<4, 4, float const>             mMinDistSquare;
    ::ll::TypedStorage<8, 8, ::ParticleEngine const&> mParticleEngine;
    ::ll::TypedStorage<4, 4, float const>             a;
    // NOLINTEND

public:
    // prevent constructor by default
    ParticleRenderContext& operator=(ParticleRenderContext const&);
    ParticleRenderContext(ParticleRenderContext const&);
    ParticleRenderContext();
};
