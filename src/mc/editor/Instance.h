#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/editor/AnnotationType.h"

// auto generated forward declare list
// clang-format off
namespace Editor::Annotations { class AnnotationInstance; }
namespace Editor::Annotations { struct TextAnnotationData; }
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace Editor::Annotations::Loader::CurrentVersion::Instance {
// functions
// NOLINTBEGIN
MCNAPI bool apply(
    ::std::variant<::Editor::Annotations::TextAnnotationData> const& data,
    ::Editor::Annotations::AnnotationInstance&                       instance
);

MCNAPI ::std::optional<::std::variant<::Editor::Annotations::TextAnnotationData>>
load(::Editor::Annotations::AnnotationType type, ::std::string const& rawData);

MCNAPI ::std::optional<::std::variant<::Editor::Annotations::TextAnnotationData>>
loadText(::std::string const& rawData, ::cereal::ReflectionCtx& ctx);

MCNAPI bool save(::Editor::Annotations::AnnotationInstance const& instance, ::std::string& outData);
// NOLINTEND

} // namespace Editor::Annotations::Loader::CurrentVersion::Instance
