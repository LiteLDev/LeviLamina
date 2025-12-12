#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/scripting/runtime/Result.h"

// auto generated forward declare list
// clang-format off
struct PageContent;
namespace ScriptModuleMinecraft { struct ScriptBookPageContentError; }
namespace ScriptModuleMinecraft { struct ScriptRawMessageInterface; }
// clang-format on

namespace ScriptModuleMinecraft::ScriptBookItemComponentInternal {
// functions
// NOLINTBEGIN
MCNAPI ::Scripting::Result<::PageContent, ::ScriptModuleMinecraft::ScriptBookPageContentError>
_makePageContent(int pageIndex, ::ScriptModuleMinecraft::ScriptRawMessageInterface const& rawMessage);

MCNAPI ::Scripting::Result<::PageContent, ::ScriptModuleMinecraft::ScriptBookPageContentError> _makePageContent(
    int                                                                                                     pageIndex,
    ::std::vector<::std::variant<::std::string, ::ScriptModuleMinecraft::ScriptRawMessageInterface>> const& rawTextArray
);

MCNAPI ::Scripting::Result<::PageContent, ::ScriptModuleMinecraft::ScriptBookPageContentError> _makePageContent(
    int pageIndex,
    ::std::variant<
        ::std::string,
        ::ScriptModuleMinecraft::ScriptRawMessageInterface,
        ::std::vector<::std::variant<::std::string, ::ScriptModuleMinecraft::ScriptRawMessageInterface>>> text
);
// NOLINTEND

} // namespace ScriptModuleMinecraft::ScriptBookItemComponentInternal
