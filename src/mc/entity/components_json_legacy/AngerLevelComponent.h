#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/puv/LevelSoundEvent.h"

class AngerLevelComponent {
public:
    // AngerLevelComponent inner types declare
    // clang-format off
    struct ConditionalSound;
    // clang-format on

    // AngerLevelComponent inner types define
    struct ConditionalSound {
    public:
        // prevent constructor by default
        ConditionalSound& operator=(ConditionalSound const&);
        ConditionalSound(ConditionalSound const&);
        ConditionalSound();

    public:
        // NOLINTBEGIN
        MCAPI ~ConditionalSound();

        // NOLINTEND

        // thunks
    public:
        // NOLINTBEGIN
        MCAPI void dtor$();

        // NOLINTEND
    };

public:
    // prevent constructor by default
    AngerLevelComponent& operator=(AngerLevelComponent const&);
    AngerLevelComponent();

public:
    // NOLINTBEGIN
    MCAPI AngerLevelComponent(class AngerLevelComponent&&);

    MCAPI AngerLevelComponent(class AngerLevelComponent const&);

    MCAPI void addAdditionalSaveData(class CompoundTag& tag) const;

    MCAPI bool belowAngryThreshold(struct ActorUniqueID id) const;

    MCAPI bool canBeNuisance(class Actor* owner, class Actor* target) const;

    MCAPI int getAngerForAnimations(class Actor& owner) const;

    MCAPI std::optional<std::pair<class Actor*, int>>
          getTopActiveNuisance(class Actor* owner, class ILevel const& level) const;

    MCAPI bool isAngry() const;

    MCAPI class AngerLevelComponent& operator=(class AngerLevelComponent&&);

    MCAPI void readAdditionalSaveData(class Actor&, class CompoundTag const& tag, class DataLoadHelper&);

    MCAPI void tick(class Actor* owner, class ILevel const& level);

    MCAPI void tryIncreaseAngerAt(class Actor& owner, class Actor& nuisance, int anger, bool playSounds);

    MCAPI ~AngerLevelComponent();

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI void _createOrModifyAngerLevel(class Actor const& nuisanceSource, std::function<int(int)> const& modifyingFn);

    MCAPI std::optional<::Puv::Legacy::LevelSoundEvent> _getListeningSoundEvent(class Actor& actor) const;

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    template <class... Args>
    auto* ctor$(Args... args) {
        return std::construct_at(this, std::forward<Args>(args)...);
    }

    MCAPI void dtor$();

    MCAPI static float const& DEFAULT_ANGER_DECREMENT_INTERVAL_SECONDS();

    MCAPI static int const& DEFAULT_ANGRY_BOOST();

    MCAPI static int const& DEFAULT_ANGRY_THRESHOLD();

    MCAPI static int const& DEFAULT_MAX_ANGER_LEVEL();

    MCAPI static bool const& DEFAULT_SHOULD_REMOVE_TARGET();

    // NOLINTEND
};
