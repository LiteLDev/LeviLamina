#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class ResourcePackManager;
// clang-format on

namespace ModuleLibraryUtils {
// functions
// NOLINTBEGIN
MCNAPI ::std::optional<::std::string>
LoadScript(::ResourcePackManager& resourcePackManager, ::std::string const& versionPath, ::std::string_view packName);
// NOLINTEND

} // namespace ModuleLibraryUtils
