#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/storagemanager/ContentType.h"

namespace OreUI::EntryPoints::StorageSettings {
// functions
// NOLINTBEGIN
MCNAPI ::std::string composeRoute(::StorageManager::ContentType type);

MCNAPI ::std::optional<::StorageManager::ContentType> getContentTypeFromRoute(::std::string const& route);
// NOLINTEND

// static variables
// NOLINTBEGIN
MCNAPI ::std::add_lvalue_reference_t<char const[]> ROUTE();
// NOLINTEND

} // namespace OreUI::EntryPoints::StorageSettings
