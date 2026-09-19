#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/scripting/modules/minecraft_net/ScriptNetContentEncoding.h"

namespace ScriptModuleMinecraftNet {

class IScriptNetContentEncoder {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~IScriptNetContentEncoder() = default;

    virtual bool encode(
        ::ScriptModuleMinecraftNet::ScriptNetContentEncoding encoding,
        ::std::string const&                                 input,
        ::std::string&                                       output
    ) = 0;
    // NOLINTEND
};

} // namespace ScriptModuleMinecraftNet
