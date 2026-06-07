#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Editor::Prefabs::PrefabDBTemplateLoader::v1 { struct TemplateData; }
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace Editor::Prefabs::PrefabDBTemplateLoader::CurrentVersion {
// functions
// NOLINTBEGIN
MCNAPI void initializeLoader(
    ::cereal::ReflectionCtx& ctx,
    ::Puv::SlicedLoader<
        ::Editor::Prefabs::PrefabDBTemplateLoader::v1::TemplateData,
        nullptr_t,
        nullptr_t,
        ::Editor::Prefabs::PrefabDBTemplateLoader::v1::TemplateData>& loader
);
// NOLINTEND

} // namespace Editor::Prefabs::PrefabDBTemplateLoader::CurrentVersion
