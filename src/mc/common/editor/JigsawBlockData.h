#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Editor::Services {

struct JigsawBlockData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnkcf2034;
    ::ll::UntypedStorage<8, 32> mUnk4ce998;
    ::ll::UntypedStorage<8, 32> mUnk45a055;
    ::ll::UntypedStorage<8, 32> mUnk7573ad;
    ::ll::UntypedStorage<1, 1>  mUnk58f6f4;
    ::ll::UntypedStorage<4, 4>  mUnk5eef34;
    ::ll::UntypedStorage<4, 4>  mUnk58c9b5;
    ::ll::UntypedStorage<1, 1>  mUnke6ef36;
    // NOLINTEND

public:
    // prevent constructor by default
    JigsawBlockData(JigsawBlockData const&);
    JigsawBlockData();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::Editor::Services::JigsawBlockData& operator=(::Editor::Services::JigsawBlockData&&);

    MCNAPI ::Editor::Services::JigsawBlockData& operator=(::Editor::Services::JigsawBlockData const&);

    MCNAPI ~JigsawBlockData();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace Editor::Services
