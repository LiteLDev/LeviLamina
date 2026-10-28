#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Editor::Annotations::Loader::CurrentVersion::MetaData {

struct Data {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnkf1df08;
    ::ll::UntypedStorage<4, 4>  mUnka462cb;
    ::ll::UntypedStorage<8, 32> mUnk861999;
    ::ll::UntypedStorage<4, 12> mUnk75fd97;
    ::ll::UntypedStorage<1, 1>  mUnka40f89;
    ::ll::UntypedStorage<8, 48> mUnkf6698d;
    ::ll::UntypedStorage<8, 24> mUnkbc13be;
    ::ll::UntypedStorage<8, 8>  mUnkdda27f;
    // NOLINTEND

public:
    // prevent constructor by default
    Data& operator=(Data const&);
    Data(Data const&);
    Data();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~Data();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace Editor::Annotations::Loader::CurrentVersion::MetaData
