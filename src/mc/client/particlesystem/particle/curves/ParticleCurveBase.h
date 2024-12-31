#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/particlesystem/particle/curves/ParticleCurveType.h"

// auto generated forward declare list
// clang-format off
class HashedString;
class RenderParams;
struct ConstDeserializeDataParams;
namespace SharedTypes::v1_21 { struct ParticleCurveBase; }
// clang-format on

namespace ParticleSystem {

class ParticleCurveBase {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 48> mUnk636859;
    // NOLINTEND

public:
    // prevent constructor by default
    ParticleCurveBase& operator=(ParticleCurveBase const&);
    ParticleCurveBase(ParticleCurveBase const&);
    ParticleCurveBase();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ParticleCurveBase() = default;

    // vIndex: 1
    virtual void initializeFromData(::SharedTypes::v1_21::ParticleCurveBase&, ::HashedString const&) = 0;

    // vIndex: 2
    virtual void upgradeToSharedTypes(::SharedTypes::v1_21::ParticleCurveBase&) = 0;

    // vIndex: 3
    virtual void parseJson(::ConstDeserializeDataParams const&, ::HashedString const&) = 0;

    // vIndex: 4
    virtual void evaluateCurve(::RenderParams&) = 0;

    // vIndex: 5
    virtual ::ParticleSystem::ParticleCurveType getCurveType() const;
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

} // namespace ParticleSystem
