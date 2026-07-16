#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace EAS {

class AttributeLayer {
public:
    // AttributeLayer inner types define
    enum class DirtyFlag : uchar {
        InitLayer           = 0,
        UpdateLayerSettings = 1,
        UpdateAttribute     = 2,
        RemoveAttribute     = 3,
        Count               = 4,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnkd3250a;
    ::ll::UntypedStorage<8, 32> mUnkceb7a5;
    ::ll::UntypedStorage<4, 4>  mUnk2c4138;
    ::ll::UntypedStorage<4, 12> mUnkdd6fbf;
    ::ll::UntypedStorage<8, 64> mUnk69c6ee;
    ::ll::UntypedStorage<8, 24> mUnk6ea0a5;
    ::ll::UntypedStorage<1, 1>  mUnkf57859;
    ::ll::UntypedStorage<8, 24> mUnk114377;
    ::ll::UntypedStorage<8, 24> mUnkefb940;
    ::ll::UntypedStorage<8, 24> mUnkcb9948;
    // NOLINTEND

public:
    // prevent constructor by default
    AttributeLayer& operator=(AttributeLayer const&);
    AttributeLayer(AttributeLayer const&);
    AttributeLayer();
};

} // namespace EAS
