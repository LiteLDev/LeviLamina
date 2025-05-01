#pragma once

#include "mc/_HeaderOutputPredefine.h"

class SubscribedObjectives {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnkffeb18;
    ::ll::UntypedStorage<8, 16> mUnk574a18;
    // NOLINTEND

public:
    // prevent constructor by default
    SubscribedObjectives& operator=(SubscribedObjectives const&);
    SubscribedObjectives(SubscribedObjectives const&);
    SubscribedObjectives();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI bool isSubscribed(::std::string const& objective) const;
    // NOLINTEND
};
