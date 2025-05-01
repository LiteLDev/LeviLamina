#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { struct ScriptData; }
// clang-format on

namespace Scripting {

class IDependencyLoader {
public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~IDependencyLoader() = default;

    // vIndex: 1
    virtual ::std::optional<::Scripting::ScriptData> onLoadScript(::std::string const&) = 0;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace Scripting
