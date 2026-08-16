#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
struct InputMapping;
// clang-format on

class InputMappingFactory {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~InputMappingFactory();

    virtual ::InputMapping const* getMapping(::std::string const& mappingName) = 0;
    // NOLINTEND
};
