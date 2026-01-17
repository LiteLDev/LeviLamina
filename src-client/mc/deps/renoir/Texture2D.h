#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace renoir {

struct Texture2D {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnk3739d8;
    ::ll::UntypedStorage<4, 4> mUnk92f386;
    ::ll::UntypedStorage<4, 4> mUnkbae038;
    ::ll::UntypedStorage<4, 4> mUnka5a380;
    ::ll::UntypedStorage<4, 4> mUnk84845b;
    ::ll::UntypedStorage<1, 1> mUnk4718bc;
    ::ll::UntypedStorage<4, 4> mUnkd2a9bc;
    ::ll::UntypedStorage<2, 2> mUnk3d952c;
    ::ll::UntypedStorage<2, 2> mUnk921bc6;
    ::ll::UntypedStorage<4, 4> mUnkf462eb;
    ::ll::UntypedStorage<4, 4> mUnk318644;
    ::ll::UntypedStorage<4, 4> mUnk3a3baa;
    ::ll::UntypedStorage<4, 4> mUnkd8cae3;
    ::ll::UntypedStorage<4, 4> mUnkc4ee89;
    // NOLINTEND

public:
    // prevent constructor by default
    Texture2D& operator=(Texture2D const&);
    Texture2D(Texture2D const&);
    Texture2D();
};

} // namespace renoir
