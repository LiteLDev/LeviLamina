#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class ItemStackBase;
namespace Json { class Value; }
// clang-format on

class ItemStackBaseComponentsHelper {
public:
    // prevent constructor by default
    ItemStackBaseComponentsHelper& operator=(ItemStackBaseComponentsHelper const&);
    ItemStackBaseComponentsHelper(ItemStackBaseComponentsHelper const&);
    ItemStackBaseComponentsHelper();

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static bool isValidComponent(::std::string const& name);

    MCAPI static bool updateComponent(::ItemStackBase& item, ::std::string const& name, ::Json::Value const& data);
    // NOLINTEND
};
