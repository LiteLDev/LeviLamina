#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Item;
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptItemType {
public:
    // prevent constructor by default
    ScriptItemType& operator=(ScriptItemType const&);
    ScriptItemType(ScriptItemType const&);
    ScriptItemType();

public:
    // NOLINTBEGIN
    MCAPI class Item const& getItem() const;

    MCAPI std::string getName() const;

    MCAPI bool operator==(class ScriptModuleMinecraft::ScriptItemType const& other) const;

    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft
