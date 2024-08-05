#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Scripting::Reflection {

class IPropertyGetter {
public:
    // prevent constructor by default
    IPropertyGetter& operator=(IPropertyGetter const&);
    IPropertyGetter(IPropertyGetter const&);
    IPropertyGetter();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~IPropertyGetter() = default;

    // NOLINTEND
};

}; // namespace Scripting::Reflection
