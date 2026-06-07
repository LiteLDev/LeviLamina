#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/scripting/runtime/BaseError.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { struct Error; }
// clang-format on

namespace ScriptUtils {

struct GetPropertyError : public ::Scripting::BaseError {
public:
    // prevent constructor by default
    GetPropertyError();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit GetPropertyError(::std::string_view propertyName);

    MCNAPI explicit operator ::Scripting::Error() const;
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::std::string_view propertyName);
    // NOLINTEND
};

} // namespace ScriptUtils
