#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace SFAT {

class FileManipulator {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 176> mUnk2b398a;
    ::ll::UntypedStorage<4, 12>  mUnk93171d;
    ::ll::UntypedStorage<8, 40>  mUnk74396d;
    ::ll::UntypedStorage<4, 4>   mUnkc8543b;
    ::ll::UntypedStorage<8, 8>   mUnk9ffa70;
    ::ll::UntypedStorage<4, 4>   mUnkab77da;
    ::ll::UntypedStorage<8, 8>   mUnk813233;
    ::ll::UntypedStorage<1, 1>   mUnk14d736;
    ::ll::UntypedStorage<8, 24>  mUnkf7ba55;
    // NOLINTEND

public:
    // prevent constructor by default
    FileManipulator& operator=(FileManipulator const&);
    FileManipulator(FileManipulator const&);
    FileManipulator();
};

} // namespace SFAT
