#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace SynchedActorDataSerializer {

struct DeserializeArgs {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnk91d7e4;
    ::ll::UntypedStorage<8, 16> mUnkdb9abd;
    ::ll::UntypedStorage<8, 8> mUnkfa11dc;
    // NOLINTEND

public:
    // prevent constructor by default
    DeserializeArgs& operator=(DeserializeArgs const&);
    DeserializeArgs(DeserializeArgs const&);
    DeserializeArgs();

};

}
