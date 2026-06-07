#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/entity/utilities/IMovementCorrection.h"
#include "mc/network/packet/MobEffectPacket.h"

// auto generated forward declare list
// clang-format off
class Actor;
class EntityContext;
class MobEffectInstance;
// clang-format on

namespace History {

struct MobEffectsReplay : public ::IMovementCorrection {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 96, ::MobEffectPacket>     mPacket;
    ::ll::TypedStorage<4, 4, ::std::bitset<2> const> mCorrectionTypeBitset;
    // NOLINTEND

public:
    // prevent constructor by default
    MobEffectsReplay();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual void advanceFrame(::EntityContext& entity) const /*override*/;

    virtual void advanceLiveFrame(::Actor& actor, ::std::optional<uint64>) /*override*/;

    virtual ::std::bitset<2> getCorrectionTypeBitset() const /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI MobEffectsReplay(::MobEffectPacket mobEffectPacket, ::std::vector<::MobEffectInstance> const& liveMobEffects);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::MobEffectPacket mobEffectPacket, ::std::vector<::MobEffectInstance> const& liveMobEffects);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $advanceFrame(::EntityContext& entity) const;

    MCAPI void $advanceLiveFrame(::Actor& actor, ::std::optional<uint64>);

    MCFOLD ::std::bitset<2> $getCorrectionTypeBitset() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace History
