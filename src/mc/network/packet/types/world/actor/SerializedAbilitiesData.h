#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct SerializedAbilitiesData {
public:
    // SerializedAbilitiesData inner types declare
    // clang-format off
    struct SerializedLayer;
    // clang-format on

    // SerializedAbilitiesData inner types define
    enum class SerializedAbilitiesLayer {};

    struct SerializedLayer {
    public:
        // prevent constructor by default
        SerializedLayer& operator=(SerializedLayer const&);
        SerializedLayer(SerializedLayer const&);
        SerializedLayer();
    };

public:
    // prevent constructor by default
    SerializedAbilitiesData& operator=(SerializedAbilitiesData const&);
    SerializedAbilitiesData(SerializedAbilitiesData const&);

public:
    // NOLINTBEGIN
    MCAPI SerializedAbilitiesData();

    MCAPI SerializedAbilitiesData(struct ActorUniqueID targetPlayer, class LayeredAbilities const& layeredAbilities);

    MCAPI void fillIn(class LayeredAbilities& layeredAbilities) const;

    MCAPI struct ActorUniqueID getTargetPlayer() const;

    MCAPI ~SerializedAbilitiesData();

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI static std::array<::SerializedAbilitiesData::SerializedAbilitiesLayer, 5> const ABILITIES_LAYER_MAP;

    // NOLINTEND
};
