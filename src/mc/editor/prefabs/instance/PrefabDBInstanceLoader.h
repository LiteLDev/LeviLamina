#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/file/PathBuffer.h"

// auto generated forward declare list
// clang-format off
namespace Editor::Prefabs::PrefabDBInstanceLoader::v1 { struct InstanceData; }
namespace mce { class UUID; }
// clang-format on

namespace Editor::Prefabs::PrefabDBInstanceLoader {
// functions
// NOLINTBEGIN
MCNAPI bool deletePrefabDBInstanceFile(
    ::Core::PathBuffer<::std::string> const& dbPath,
    ::mce::UUID const&                       instanceId,
    ::std::vector<::std::string>&            outErrors
);

MCNAPI bool loadPrefabDBInstances(
    ::Core::PathBuffer<::std::string> const&                                                  dbPath,
    ::std::vector<::std::string>&                                                             outErrors,
    ::std::function<void(::Editor::Prefabs::PrefabDBInstanceLoader::v1::InstanceData const&)> createCallback
);

MCNAPI bool savePrefabDBInstance(
    ::Core::PathBuffer<::std::string> const&                           dbPath,
    ::Editor::Prefabs::PrefabDBInstanceLoader::v1::InstanceData const& instanceData,
    ::std::vector<::std::string>&                                      outErrors
);
// NOLINTEND

} // namespace Editor::Prefabs::PrefabDBInstanceLoader
