#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace SharedTypes::v1_21_50 {

struct JigsawJunction {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnkc59553;
    ::ll::UntypedStorage<4, 4> mUnkdb02dd;
    ::ll::UntypedStorage<4, 4> mUnk223bc2;
    ::ll::UntypedStorage<4, 4> mUnk7130d2;
    ::ll::UntypedStorage<1, 1> mUnkf8b5f7;
    // NOLINTEND

public:
    // prevent constructor by default
    JigsawJunction& operator=(JigsawJunction const&);
    JigsawJunction(JigsawJunction const&);
    JigsawJunction();
};

} // namespace SharedTypes::v1_21_50
