#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/string/HashedString.h"

// auto generated forward declare list
// clang-format off
struct ItemCooldown;
// clang-format on

struct ActorItemCooldownsComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 64, ::std::unordered_map<::HashedString, ::ItemCooldown>> mItemCooldowns;
    ::ll::TypedStorage<8, 64, ::std::unordered_map<::HashedString, ::HashedString>> mVanillaItemCooldowns;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI int getItemCooldownLeft(::HashedString const& category) const;

    MCAPI int getItemCooldownLeft(uint64 categoryHash) const;

#ifdef LL_PLAT_C
    MCAPI float getItemCooldownProgress(::HashedString const& category) const;
#endif

    MCAPI int getMaxItemCooldownLeft() const;

    MCAPI bool isItemOnCooldown(::HashedString const& category) const;

    MCAPI ::std::string startItemCooldown(::HashedString const& category, int tickDuration);

    MCAPI void tickCooldowns();

    MCAPI ~ActorItemCooldownsComponent();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
