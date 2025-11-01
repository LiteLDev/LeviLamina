#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace CodeBuilder {

struct ChatSubscription {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnkd13679;
    ::ll::UntypedStorage<8, 64> mUnk16e17c;
    // NOLINTEND

public:
    // prevent constructor by default
    ChatSubscription& operator=(ChatSubscription const&);
    ChatSubscription(ChatSubscription const&);
    ChatSubscription();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~ChatSubscription();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

};

}
