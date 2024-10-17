#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Scripting {

template <typename T0>
class ClassBindingBuilderReadOnly {
public:
    // prevent constructor by default
    ClassBindingBuilderReadOnly& operator=(ClassBindingBuilderReadOnly const&);
    ClassBindingBuilderReadOnly(ClassBindingBuilderReadOnly const&);
    ClassBindingBuilderReadOnly();
};

}; // namespace Scripting
