#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Actor;
class CompoundTag;
class ParticleEngine;
class Vec3;
struct ParticleRenderContext;
namespace mce { class TexturePtr; }
// clang-format on

class Particle {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4>  mUnkc83c97;
    ::ll::UntypedStorage<4, 4>  mUnk5fc4bc;
    ::ll::UntypedStorage<8, 88> mUnk37a320;
    ::ll::UntypedStorage<4, 4>  mUnka988a4;
    ::ll::UntypedStorage<4, 4>  mUnk1875de;
    ::ll::UntypedStorage<4, 4>  mUnkbe2017;
    ::ll::UntypedStorage<4, 4>  mUnk3ce51f;
    ::ll::UntypedStorage<4, 4>  mUnk3af6d3;
    ::ll::UntypedStorage<4, 4>  mUnkea63dc;
    ::ll::UntypedStorage<4, 16> mUnk45d740;
    ::ll::UntypedStorage<4, 16> mUnk9e2eb9;
    ::ll::UntypedStorage<1, 2>  mUnkf06cf5;
    ::ll::UntypedStorage<4, 4>  mUnk207c78;
    ::ll::UntypedStorage<4, 4>  mUnk26120b;
    ::ll::UntypedStorage<1, 1>  mUnkdd5194;
    ::ll::UntypedStorage<4, 4>  mUnk633c91;
    ::ll::UntypedStorage<4, 4>  mUnk8d1d41;
    ::ll::UntypedStorage<4, 4>  mUnk103915;
    ::ll::UntypedStorage<4, 4>  mUnkfe20dc;
    ::ll::UntypedStorage<4, 4>  mUnk27db79;
    ::ll::UntypedStorage<4, 4>  mUnkf170d4;
    ::ll::UntypedStorage<4, 4>  mUnk349cdf;
    ::ll::UntypedStorage<8, 8>  mUnk7cd2e0;
    ::ll::UntypedStorage<4, 12> mUnk362c41;
    ::ll::UntypedStorage<4, 12> mUnk805789;
    ::ll::UntypedStorage<4, 12> mUnke5468c;
    ::ll::UntypedStorage<1, 1>  mUnkc4d1ee;
    ::ll::UntypedStorage<1, 1>  mUnk4d48c4;
    ::ll::UntypedStorage<1, 1>  mUnkebe704;
    ::ll::UntypedStorage<4, 24> mUnkbd50bb;
    // NOLINTEND

public:
    // prevent constructor by default
    Particle& operator=(Particle const&);
    Particle(Particle const&);
    Particle();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~Particle() = default;

    // vIndex: 1
    virtual void init(::Vec3 const&, ::Vec3 const&, int, ::ParticleEngine&) = 0;

    // vIndex: 2
    virtual void addTagData(::CompoundTag const&);

    // vIndex: 3
    virtual void normalTick();

    // vIndex: 4
    virtual void tessellate(::ParticleRenderContext const&);

    // vIndex: 5
    virtual ::mce::TexturePtr const& getParticleTexture() const;

    // vIndex: 6
    virtual void setEmittingEntity(::Actor&);

    // vIndex: 7
    virtual bool _shouldUpdateVertexData(float);

    // vIndex: 8
    virtual void _calculateAmbientLight(float);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
