#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/binding_type/ClassBindingBuilder.h"

// auto generated forward declare list
// clang-format off
class Item;
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptItemType {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnk986387;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptItemType& operator=(ScriptItemType const&);
    ScriptItemType(ScriptItemType const&);
    ScriptItemType();

public:
    // member functions
    // NOLINTBEGIN
    MCFOLD ::Item const& getItem() const;

    MCAPI ::std::string getName() const;

    MCAPI bool operator==(::ScriptModuleMinecraft::ScriptItemType const& other) const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::Scripting::ClassBindingBuilder<::ScriptModuleMinecraft::ScriptItemType> bind();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
