#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace LeanDynamicProperty {

struct String {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnk20f6a8;
    // NOLINTEND

public:
    // prevent constructor by default
    String& operator=(String const&);
    String(String const&);
    String();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI bool operator==(::LeanDynamicProperty::String const& other) const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void fromString(::LeanDynamicProperty::String& handle, ::std::string const& value);

    MCNAPI static ::std::string toString(::LeanDynamicProperty::String const& handle);
    // NOLINTEND
};

} // namespace LeanDynamicProperty
