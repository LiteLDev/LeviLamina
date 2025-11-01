#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace CodeBuilder {

struct ChatMessage {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnk6a4db7;
    ::ll::UntypedStorage<8, 32> mUnk736701;
    ::ll::UntypedStorage<8, 32> mUnk931b6a;
    ::ll::UntypedStorage<8, 32> mUnkf59595;
    // NOLINTEND

public:
    // prevent constructor by default
    ChatMessage& operator=(ChatMessage const&);
    ChatMessage(ChatMessage const&);
    ChatMessage();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~ChatMessage();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

};

}
