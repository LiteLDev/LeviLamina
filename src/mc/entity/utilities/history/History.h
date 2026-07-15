#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class MobEffectInstance;
class MobEffectPacket;
class UpdateAttributesPacket;
class Vec3;
struct IMovementCorrection;
struct IReplayableActorInput;
struct MovementEffectPacketPayload;
struct MovementEffectsComponent;
// clang-format on

namespace History {
// functions
// NOLINTBEGIN
#ifdef LL_PLAT_C
MCNAPI ::std::unique_ptr<::IMovementCorrection>
createAttributeReplay(::std::shared_ptr<::UpdateAttributesPacket> packet);
#endif

MCNAPI ::std::unique_ptr<::IReplayableActorInput> createInputStorage();

#ifdef LL_PLAT_C
MCNAPI ::std::unique_ptr<::IMovementCorrection> createMobEffectsReplay(
    ::MobEffectPacket const&                  mobEffectPacket,
    ::std::vector<::MobEffectInstance> const& liveMobEffects
);

MCNAPI ::std::unique_ptr<::IMovementCorrection> createMovementEffectsCorrection(
    ::MovementEffectPacketPayload     packetPayload,
    ::MovementEffectsComponent const& liveMovementEffects,
    uint64                            currentTick
);

MCNAPI ::std::unique_ptr<::IMovementCorrection> createPosDeltaReplay(::Vec3 const& posDelta);
#endif
// NOLINTEND

} // namespace History
