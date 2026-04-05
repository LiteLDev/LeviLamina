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
    // prevent constructor by default
    ActorItemCooldownsComponent& operator=(ActorItemCooldownsComponent const&);
    ActorItemCooldownsComponent(ActorItemCooldownsComponent const&);
    ActorItemCooldownsComponent();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ActorItemCooldownsComponent(::ActorItemCooldownsComponent&&);

    MCAPI int getItemCooldownLeft(::HashedString const& category) const;

#ifdef LL_PLAT_C
    MCAPI float getItemCooldownProgress(::HashedString const& category) const;
#endif

    MCAPI ::std::string startItemCooldown(::HashedString const& category, int tickDuration);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::ActorItemCooldownsComponent&&);
    // NOLINTEND
};
