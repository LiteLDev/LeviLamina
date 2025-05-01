#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/editor/datastore/DeprecatedEventFactory.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

namespace Editor::DataStore {
// functions
// NOLINTBEGIN
MCNAPI ::Json::Value _createClientActionEvent(
    ::Editor::DataStore::DeprecatedEventFactory::ClientActionEventType payload,
    ::Json::Value const&                                               type
);

MCNAPI ::Json::Value
_createServerUXEvent(::Editor::DataStore::DeprecatedEventFactory::ServerUXEventType type, ::Json::Value const& payload);
// NOLINTEND

} // namespace Editor::DataStore
