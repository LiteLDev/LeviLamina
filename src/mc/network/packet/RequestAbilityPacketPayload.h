#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/player/AbilitiesIndex.h"

struct RequestAbilityPacketPayload {
public:
    // RequestAbilityPacketPayload inner types define
    enum class Type : uchar {
        Unset = 0,
        Bool  = 1,
        Float = 2,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, ::AbilitiesIndex>                    mAbility;
    ::ll::TypedStorage<1, 1, ::RequestAbilityPacketPayload::Type> mValueType;
    ::ll::TypedStorage<4, 8, ::std::variant<bool, float>>         mValue;
    // NOLINTEND

#ifdef LL_PLAT_S
#else // LL_PLAT_C
public:
    // prevent constructor by default
    RequestAbilityPacketPayload();

#endif
public:
    // member functions
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCAPI RequestAbilityPacketPayload(::AbilitiesIndex ability, bool value);
#endif

    MCAPI bool tryGetBool(bool& outValue) const;
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCAPI void* $ctor(::AbilitiesIndex ability, bool value);
#endif
    // NOLINTEND
};
