#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class ItemStackBase;
namespace Json { class Value; }
// clang-format on

class ItemStackBaseComponentsHelper {
public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static bool isValidComponent(::std::string const& name);

    MCNAPI static bool updateComponent(::ItemStackBase& item, ::std::string const& name, ::Json::Value const& data);
    // NOLINTEND
};
