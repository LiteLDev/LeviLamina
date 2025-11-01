#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Realms::Stories {

class RealmEvent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnk238732;
    ::ll::UntypedStorage<8, 32> mUnk9c5344;
    ::ll::UntypedStorage<8, 32> mUnk22398a;
    ::ll::UntypedStorage<8, 8> mUnk70c19b;
    ::ll::UntypedStorage<8, 24> mUnkf2f83d;
    ::ll::UntypedStorage<4, 16> mUnkcfc284;
    ::ll::UntypedStorage<8, 32> mUnk43cf1d;
    ::ll::UntypedStorage<1, 1> mUnk7e3bd2;
    // NOLINTEND

public:
    // prevent constructor by default
    RealmEvent& operator=(RealmEvent const&);
    RealmEvent(RealmEvent const&);
    RealmEvent();

};

}
