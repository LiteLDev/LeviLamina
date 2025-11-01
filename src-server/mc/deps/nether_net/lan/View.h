#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace NetherNet {

struct View {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnk5e087c;
    ::ll::UntypedStorage<8, 8> mUnk18708e;
    // NOLINTEND

public:
    // prevent constructor by default
    View& operator=(View const&);
    View(View const&);
    View();

};

}
