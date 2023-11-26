#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/enums/AbilitiesIndex.h"

namespace PlayerCapabilities {

struct IPlayerData {
public:
    // vIndex: 0
    virtual ~IPlayerData() = default;

    // vIndex: 1
    virtual bool isAbilityEnabled(::AbilitiesIndex) const;

    // vIndex: 2
    virtual bool isTeacher() const;

    // vIndex: 3
    virtual bool isOperator() const;
};

}; // namespace PlayerCapabilities
