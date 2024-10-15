#pragma once

#include "mc/_HeaderOutputPredefine.h"

class Interaction {
public:
    // prevent constructor by default
    Interaction& operator=(Interaction const&);

public:
    // NOLINTBEGIN
    MCAPI Interaction();

    MCAPI Interaction(class Interaction&&);

    MCAPI Interaction(class Interaction const&);

    MCAPI void addActorDefinitionIdentifierByName(std::string const& name);

    MCAPI void addLevelSoundEventByName(std::string const& name);

    MCAPI void setCooldown(float const& seconds);

    MCAPI void setCooldownAfterBeingAttacked(float const& seconds);

    MCAPI void setDropItemSlot(std::string const& slot);

    MCAPI void setEquipItemSlot(std::string const& slot);

    MCAPI void setParticleType(std::string const& name);

    MCAPI void setRepairItemAmount(int const& amount);

    MCAPI void setRepairItemSlot(std::string const& slot);

    MCAPI void setTransformItem(std::string const& name);

    MCAPI void setVibrationByName(std::string const& name);

    MCAPI ~Interaction();

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI static std::optional<struct ItemSlotInfo> _tryConvertStringToItemSlotInfo(std::string const& string);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI void* ctor$(class Interaction&&);

    MCAPI void* ctor$(class Interaction const&);

    MCAPI void* ctor$();

    MCAPI void dtor$();

    // NOLINTEND
};
