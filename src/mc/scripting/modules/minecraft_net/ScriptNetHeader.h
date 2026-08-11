#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Bedrock::Http { class HeaderCollection; }
namespace ScriptModuleServerAdmin { class ScriptSecretString; }
namespace Scripting { struct ClassBinding; }
// clang-format on

namespace ScriptModuleMinecraftNet {

struct ScriptNetHeader {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnkcef7b0;
    ::ll::UntypedStorage<8, 72> mUnkec2e98;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptNetHeader& operator=(ScriptNetHeader const&);
    ScriptNetHeader(ScriptNetHeader const&);
    ScriptNetHeader();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ScriptNetHeader(
        ::std::string const&                                                         key,
        ::std::variant<::std::string, ::ScriptModuleServerAdmin::ScriptSecretString> value
    );
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::ClassBinding bind();

    MCNAPI static ::Bedrock::Http::HeaderCollection createHeaders(
        ::std::vector<::ScriptModuleMinecraftNet::ScriptNetHeader> const&          userHeaders,
        ::std::optional<::std::unordered_map<::std::string, ::std::string>> const& configSessionHeaders
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace ScriptModuleMinecraftNet
