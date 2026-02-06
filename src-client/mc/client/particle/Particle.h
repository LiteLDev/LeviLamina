#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/particle/ParticleLayer.h"
#include "mc/client/renderer/texture/TextureUVCoordinateSet.h"
#include "mc/common/BrightnessPair.h"
#include "mc/comprehensive/ParticleType.h"
#include "mc/deps/core/math/Color.h"
#include "mc/deps/core/math/Vec3.h"
#include "mc/world/phys/AABB.h"

// auto generated forward declare list
// clang-format off
class Actor;
class BlockSource;
class CompoundTag;
class ParticleEngine;
struct ParticleRenderContext;
namespace mce { class TextureGroup; }
namespace mce { class TexturePtr; }
// clang-format on

class Particle {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, float>                     mCameraOffset;
    ::ll::TypedStorage<4, 4, int>                       mLifetime;
    ::ll::TypedStorage<8, 88, ::TextureUVCoordinateSet> mTex;
    ::ll::TypedStorage<4, 4, float>                     mU0;
    ::ll::TypedStorage<4, 4, float>                     mV0;
    ::ll::TypedStorage<4, 4, int>                       mAge;
    ::ll::TypedStorage<4, 4, int>                       mTicksSinceLastUpdate;
    ::ll::TypedStorage<4, 4, float>                     mSize;
    ::ll::TypedStorage<4, 4, float>                     mGravity;
    ::ll::TypedStorage<4, 16, ::mce::Color>             mColor;
    ::ll::TypedStorage<4, 16, ::mce::Color>             mLightColor;
    ::ll::TypedStorage<1, 2, ::BrightnessPair>          mAmbientLight;
    ::ll::TypedStorage<4, 4, ::ParticleType>            mType;
    ::ll::TypedStorage<4, 4, ::ParticleLayer>           mLayer;
    ::ll::TypedStorage<1, 1, bool>                      mUnlit;
    ::ll::TypedStorage<4, 4, float>                     mRoll;
    ::ll::TypedStorage<4, 4, float>                     mORoll;
    ::ll::TypedStorage<4, 4, float>                     mXa;
    ::ll::TypedStorage<4, 4, float>                     mZa;
    ::ll::TypedStorage<4, 4, float>                     mXa2;
    ::ll::TypedStorage<4, 4, float>                     mZa2;
    ::ll::TypedStorage<4, 4, float>                     mYa;
    ::ll::TypedStorage<8, 8, ::BlockSource*>            mRegion;
    ::ll::TypedStorage<4, 12, ::Vec3>                   mPosDelta;
    ::ll::TypedStorage<4, 12, ::Vec3>                   mPos;
    ::ll::TypedStorage<4, 12, ::Vec3>                   mPosOld;
    ::ll::TypedStorage<1, 1, bool>                      mNoPhysics;
    ::ll::TypedStorage<1, 1, bool>                      mOnGround;
    ::ll::TypedStorage<1, 1, bool>                      mVertexDataInitialized;
    ::ll::TypedStorage<4, 24, ::AABB>                   mBB;
    // NOLINTEND

public:
    // prevent constructor by default
    Particle();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~Particle();

    virtual void init(::Vec3 const&, ::Vec3 const&, int, ::ParticleEngine&) = 0;

    virtual void addTagData(::CompoundTag const& tag);

    virtual void normalTick();

    virtual void tessellate(::ParticleRenderContext const& renderContext);

    virtual ::mce::TexturePtr const& getParticleTexture() const;

    virtual void setEmittingEntity(::Actor& entity);

    virtual bool _shouldUpdateVertexData(float sqDist);

    virtual void _calculateAmbientLight(float a);
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI Particle(::BlockSource& source, ::ParticleType type);

    MCAPI void _generateVertexOffsets(
        ::Vec3 const& cameraPos,
        float&        out_xa,
        float&        out_za,
        float&        out_xa2,
        float&        out_za2,
        float&        out_ya
    );

    MCAPI void
    _init(::Vec3 const& pos, ::Vec3 const& dir, int scale, ::ParticleEngine& engine, ::CompoundTag const* tag);

    MCAPI void move(::Vec3 const& delta);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void initStaticResources(::std::shared_ptr<::mce::TextureGroup> textureGroup);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::mce::TexturePtr& FLAME_ATLAS();

    MCAPI static ::mce::TexturePtr& FORCEFIELD_ATLAS();

    MCAPI static ::mce::TexturePtr& ITEMS_ATLAS();

    MCAPI static ::mce::TexturePtr& PARTICLE_ATLAS();

    MCAPI static ::mce::TexturePtr& TERRAIN_ATLAS();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::BlockSource& source, ::ParticleType type);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCFOLD void $addTagData(::CompoundTag const& tag);

    MCAPI void $normalTick();

    MCAPI void $tessellate(::ParticleRenderContext const& renderContext);

    MCFOLD ::mce::TexturePtr const& $getParticleTexture() const;

    MCFOLD void $setEmittingEntity(::Actor& entity);

    MCAPI bool $_shouldUpdateVertexData(float sqDist);

    MCAPI void $_calculateAmbientLight(float a);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
