#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Core::Profile {

class GroupToken {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8>  mUnk2bbf36;
    ::ll::UntypedStorage<8, 80> mUnk7b2fab;
    ::ll::UntypedStorage<8, 48> mUnk347c15;
    ::ll::UntypedStorage<8, 8>  mUnkd60dd2;
    ::ll::UntypedStorage<4, 4>  mUnk7ab6fe;
    ::ll::UntypedStorage<8, 8>  mUnk18bf66;
    ::ll::UntypedStorage<8, 8>  mUnkd7bec8;
    ::ll::UntypedStorage<4, 4>  mUnk16e048;
    // NOLINTEND

public:
    // prevent constructor by default
    GroupToken& operator=(GroupToken const&);
    GroupToken(GroupToken const&);
    GroupToken();
};

} // namespace Core::Profile
