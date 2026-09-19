#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Editor::InteractiveTools {

struct ExtrudeResultStream {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 64> mUnkdc8d0c;
    ::ll::UntypedStorage<8, 8>  mUnk662f27;
    ::ll::UntypedStorage<8, 64> mUnkd6fa52;
    ::ll::UntypedStorage<8, 8>  mUnk253ed2;
    // NOLINTEND

public:
    // prevent constructor by default
    ExtrudeResultStream& operator=(ExtrudeResultStream const&);
    ExtrudeResultStream(ExtrudeResultStream const&);
    ExtrudeResultStream();
};

} // namespace Editor::InteractiveTools
