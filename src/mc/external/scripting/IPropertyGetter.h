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
    // vIndex: 0, symbol: __gen_??1IPropertyGetter@Reflection@Scripting@@UEAA@XZ
    virtual ~IPropertyGetter() = default;

    // NOLINTEND
};

}; // namespace Scripting::Reflection
