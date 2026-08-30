#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class BindingFactory;
// clang-format on

class BindingFactoryMap {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~BindingFactoryMap();

    virtual ::BindingFactory const& getBindingFactory(int controllerId) const = 0;
    // NOLINTEND
};
