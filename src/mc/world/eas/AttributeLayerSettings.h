#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace EAS {

struct AttributeLayerSettings {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnk281b37;
    ::ll::UntypedStorage<4, 4> mUnk99a968;
    ::ll::UntypedStorage<1, 1> mUnk23fceb;
    ::ll::UntypedStorage<1, 1> mUnk2c8253;
    // NOLINTEND

public:
    // prevent constructor by default
    AttributeLayerSettings& operator=(AttributeLayerSettings const&);
    AttributeLayerSettings(AttributeLayerSettings const&);
    AttributeLayerSettings();
};

} // namespace EAS
