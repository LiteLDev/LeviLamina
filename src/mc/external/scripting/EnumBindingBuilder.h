#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Scripting {

template <typename T0, typename T1>
class EnumBindingBuilder {
public:
    // prevent constructor by default
    EnumBindingBuilder& operator=(EnumBindingBuilder const&);
    EnumBindingBuilder(EnumBindingBuilder const&);
    EnumBindingBuilder();
};

}; // namespace Scripting
