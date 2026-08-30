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
    virtual ~IDependencyLoader() = default;

    virtual ::std::optional<::Scripting::ScriptData> onLoadScript(::std::string const& name) = 0;
    // NOLINTEND
};

} // namespace Scripting
