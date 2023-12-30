#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Scripting {

template <typename T0, typename T1, typename T2>
struct TypedIteratorBinding {
public:
    // prevent constructor by default
    TypedIteratorBinding& operator=(TypedIteratorBinding const&);
    TypedIteratorBinding(TypedIteratorBinding const&);
    TypedIteratorBinding();
};

}; // namespace Scripting
