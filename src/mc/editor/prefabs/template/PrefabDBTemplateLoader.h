#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/file/PathBuffer.h"

// auto generated forward declare list
// clang-format off
namespace Editor::Prefabs::PrefabDBTemplateLoader::v1 { struct TemplateData; }
namespace mce { class UUID; }
// clang-format on

namespace Editor::Prefabs::PrefabDBTemplateLoader {
// functions
// NOLINTBEGIN
MCNAPI bool deletePrefabDBTemplateFile(
    ::Core::PathBuffer<::std::string> const& dbPath,
    ::mce::UUID const&                       templateId,
    ::std::vector<::std::string>&            outErrors
);

MCNAPI bool loadPrefabDBTemplates(
    ::Core::PathBuffer<::std::string> const&                                                  dbPath,
    ::std::vector<::std::string>&                                                             outErrors,
    ::std::function<void(::Editor::Prefabs::PrefabDBTemplateLoader::v1::TemplateData const&)> createCallback
);

MCNAPI bool savePrefabDBTemplate(
    ::Core::PathBuffer<::std::string> const&                           dbPath,
    ::Editor::Prefabs::PrefabDBTemplateLoader::v1::TemplateData const& templateData,
    ::std::vector<::std::string>&                                      outErrors
);
// NOLINTEND

} // namespace Editor::Prefabs::PrefabDBTemplateLoader
