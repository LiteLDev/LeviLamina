#pragma once

#include "ll/api/event/Cancellable.h"
#include "ll/api/event/player/PlayerEvent.h"

namespace ll::event::inline player {

class PlayerAddExperienceEvent final : public Cancellable<PlayerEvent> {
    int& mExperience;

public:
    constexpr PlayerAddExperienceEvent(Player& player, int& exp) : Cancellable(player), mExperience(exp) {}

    LLAPI void serialize(CompoundTag&) const override;
    LLAPI void deserialize(CompoundTag const&) override;

    LLNDAPI int& experience() const;
};
} // namespace ll::event::inline player
