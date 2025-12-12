#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Scripting::RenderHelper {

struct NameTag {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 12> mUnk758ba1;
    ::ll::UntypedStorage<8, 32> mUnk2cd32a;
    ::ll::UntypedStorage<4, 16> mUnkf09bec;
    // NOLINTEND

public:
    // prevent constructor by default
    NameTag& operator=(NameTag const&);
    NameTag(NameTag const&);
    NameTag();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI_C ~NameTag();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI_C void $dtor();
    // NOLINTEND
};

} // namespace Scripting::RenderHelper
