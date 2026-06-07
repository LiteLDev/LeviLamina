#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Editor::Prefabs::PrefabDBInstanceLoader::v1 { struct InstanceData; }
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace Editor::Prefabs::PrefabDBInstanceLoader::CurrentVersion {
// functions
// NOLINTBEGIN
MCNAPI void initializeLoader(
    ::cereal::ReflectionCtx& ctx,
    ::Puv::SlicedLoader<
        ::Editor::Prefabs::PrefabDBInstanceLoader::v1::InstanceData,
        nullptr_t,
        nullptr_t,
        ::Editor::Prefabs::PrefabDBInstanceLoader::v1::InstanceData>& loader
);
// NOLINTEND

} // namespace Editor::Prefabs::PrefabDBInstanceLoader::CurrentVersion
