#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Actor;
class LookControl;
class Mob;
// clang-format on

class LookControlComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 1>  mUnkdc6eb3;
    ::ll::UntypedStorage<1, 1>  mUnk880742;
    ::ll::UntypedStorage<4, 4>  mUnk278be0;
    ::ll::UntypedStorage<4, 4>  mUnkf851b9;
    ::ll::UntypedStorage<4, 12> mUnkd68554;
    ::ll::UntypedStorage<4, 12> mUnk707269;
    ::ll::UntypedStorage<8, 8>  mUnkf75eb4;
    // NOLINTEND

public:
    // prevent constructor by default
    LookControlComponent& operator=(LookControlComponent const&);
    LookControlComponent(LookControlComponent const&);
    LookControlComponent();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void initialize(::Mob& owner);

    MCAPI void setInternalType(::std::unique_ptr<::LookControl> type);

    MCAPI void setLookAtPosition(::Actor const* target, float yMax, float xMax);
    // NOLINTEND
};
