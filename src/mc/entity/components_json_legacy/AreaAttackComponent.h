#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Actor;
class CompoundTag;
class DataLoadHelper;
struct ActorUniqueID;
struct Tick;
// clang-format on

class AreaAttackComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 12> mUnk478a6e;
    ::ll::UntypedStorage<4, 4>  mUnkd28980;
    ::ll::UntypedStorage<4, 4>  mUnk9a3301;
    ::ll::UntypedStorage<8, 64> mUnk13e75f;
    ::ll::UntypedStorage<4, 4>  mUnk77028f;
    ::ll::UntypedStorage<1, 1>  mUnk8bc53e;
    ::ll::UntypedStorage<8, 24> mUnkf15f1e;
    // NOLINTEND

public:
    // prevent constructor by default
    AreaAttackComponent& operator=(AreaAttackComponent const&);
    AreaAttackComponent(AreaAttackComponent const&);
    AreaAttackComponent();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void addAdditionalSaveData(::CompoundTag& tag) const;

    MCAPI ::std::pair<::ActorUniqueID, ::Tick>* findCooldownEntry(::ActorUniqueID const& actorID);

    MCAPI bool
    isEntryOnAttackCooldown(::std::pair<::ActorUniqueID, ::Tick> const* cooldownEntry, ::Tick const& currentTick) const;

    MCAPI ::AreaAttackComponent& operator=(::AreaAttackComponent&&);

    MCAPI void readAdditionalSaveData(::Actor&, ::CompoundTag const& tag, ::DataLoadHelper&);

    MCAPI ~AreaAttackComponent();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
