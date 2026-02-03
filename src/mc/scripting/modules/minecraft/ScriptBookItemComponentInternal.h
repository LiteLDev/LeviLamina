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
MCAPI ::Scripting::Result<::PageContent, ::ScriptModuleMinecraft::ScriptBookPageContentError>
_makePageContent(int pageIndex, ::ScriptModuleMinecraft::ScriptRawMessageInterface const& rawMessage);

MCAPI ::Scripting::Result<::PageContent, ::ScriptModuleMinecraft::ScriptBookPageContentError> _makePageContent(
    int                                                                                                     pageIndex,
    ::std::vector<::std::variant<::std::string, ::ScriptModuleMinecraft::ScriptRawMessageInterface>> const& rawTextArray
);

MCAPI ::Scripting::Result<::PageContent, ::ScriptModuleMinecraft::ScriptBookPageContentError>
_makePageContent(int pageIndex, ::std::string const& text);
// NOLINTEND

} // namespace ScriptModuleMinecraft::ScriptBookItemComponentInternal
