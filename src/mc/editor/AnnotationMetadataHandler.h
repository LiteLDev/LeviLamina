#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class HashedString;
namespace Editor::Annotations { class AnnotationMetadata; }
// clang-format on

namespace Editor::Annotations {

class AnnotationMetadataHandler {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~AnnotationMetadataHandler() = default;

    virtual void onUpdate(::Editor::Annotations::AnnotationMetadata const& metadata);

    virtual ::std::optional<::HashedString>
    validateName(::Editor::Annotations::AnnotationMetadata const& metadata, ::HashedString const& name);
    // NOLINTEND
};

} // namespace Editor::Annotations
