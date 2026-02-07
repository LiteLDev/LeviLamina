#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/string/HashedString.h"

// auto generated forward declare list
// clang-format off
struct ConstDeserializeDataParams;
namespace SharedTypes::v1_20_80 { struct ParticleEffectComponent; }
// clang-format on

namespace ParticleSystem {

class EffectComponentBase {
public:
    // EffectComponentBase inner types define
    enum class EffectComponentType : int {
        EmitterInitial     = 0,
        EmitterLifetime    = 1,
        EmitterRate        = 2,
        EmitterShape       = 3,
        ParticleAppearance = 4,
        ParticleInitial    = 5,
        ParticleLifetime   = 6,
        ParticleMotion     = 7,
        Invalid            = 8,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 48, ::HashedString> mName;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~EffectComponentBase() = default;

    virtual void initializeFromData(::SharedTypes::v1_20_80::ParticleEffectComponent&) = 0;

    virtual void upgradeToSharedTypes(::SharedTypes::v1_20_80::ParticleEffectComponent&) = 0;

    virtual void parseJson(::ConstDeserializeDataParams const&) = 0;

    virtual ::ParticleSystem::EffectComponentBase::EffectComponentType getParticleComponentType() const;

    virtual int getSortOrderNumber() const;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCFOLD int $getSortOrderNumber() const;
    // NOLINTEND
};

} // namespace ParticleSystem
