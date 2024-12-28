#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct ActorEquippedArmorEvent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24>  mUnk71c8cb;
    ::ll::UntypedStorage<8, 128> mUnk5d925b;
    ::ll::UntypedStorage<4, 4>   mUnkc5b841;
    // NOLINTEND

public:
    // prevent constructor by default
    ActorEquippedArmorEvent& operator=(ActorEquippedArmorEvent const&);
    ActorEquippedArmorEvent(ActorEquippedArmorEvent const&);
    ActorEquippedArmorEvent();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ~ActorEquippedArmorEvent();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
