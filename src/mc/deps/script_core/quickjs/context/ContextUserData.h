#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Scripting::QuickJS {

class ContextUserData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 1>   mUnk91edc7;
    ::ll::UntypedStorage<8, 16>  mUnk557dca;
    ::ll::UntypedStorage<8, 8>   mUnke0c273;
    ::ll::UntypedStorage<8, 8>   mUnk84bd74;
    ::ll::UntypedStorage<8, 24>  mUnk70d806;
    ::ll::UntypedStorage<8, 24>  mUnk90985f;
    ::ll::UntypedStorage<8, 8>   mUnka60b23;
    ::ll::UntypedStorage<8, 8>   mUnk92f52a;
    ::ll::UntypedStorage<8, 8>   mUnkfbe467;
    ::ll::UntypedStorage<8, 8>   mUnkd5fe0f;
    ::ll::UntypedStorage<8, 24>  mUnk2b6a04;
    ::ll::UntypedStorage<8, 288> mUnka21b69;
    ::ll::UntypedStorage<1, 1>   mUnk863b7e;
    ::ll::UntypedStorage<8, 24>  mUnk771848;
    ::ll::UntypedStorage<8, 64>  mUnk3f377c;
    // NOLINTEND

public:
    // prevent constructor by default
    ContextUserData& operator=(ContextUserData const&);
    ContextUserData(ContextUserData const&);
    ContextUserData();
};

} // namespace Scripting::QuickJS
