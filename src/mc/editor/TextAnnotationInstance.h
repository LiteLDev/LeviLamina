#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/game_refs/WeakRef.h"
#include "mc/editor/AnnotationInstance.h"

// auto generated forward declare list
// clang-format off
class BedrockLoadContext;
namespace Editor::Annotations { class AnnotationInstanceHandler; }
namespace Editor::Annotations { class AnnotationMetadata; }
namespace Editor::Annotations { struct TextAnnotationData; }
namespace cereal { class BasicLoader; }
namespace cereal { struct SchemaReader; }
namespace cereal { struct SchemaWriter; }
// clang-format on

namespace Editor::Annotations {

class TextAnnotationInstance : public ::Editor::Annotations::AnnotationInstance {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 88> mUnkd2853d;
    // NOLINTEND

public:
    // prevent constructor by default
    TextAnnotationInstance& operator=(TextAnnotationInstance const&);
    TextAnnotationInstance(TextAnnotationInstance const&);
    TextAnnotationInstance();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual bool serializeData(::cereal::SchemaWriter& writer) const /*override*/;

    virtual bool deserializeData(
        ::cereal::BasicLoader&      loader,
        ::cereal::SchemaReader&     reader,
        ::BedrockLoadContext const& context
    ) /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI TextAnnotationInstance(
        ::WeakRef<::Editor::Annotations::AnnotationMetadata> metadata,
        ::Editor::Annotations::TextAnnotationData const&     settings,
        ::Editor::Annotations::AnnotationInstanceHandler*    handler
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
        ::WeakRef<::Editor::Annotations::AnnotationMetadata> metadata,
        ::Editor::Annotations::TextAnnotationData const&     settings,
        ::Editor::Annotations::AnnotationInstanceHandler*    handler
    );
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI bool $serializeData(::cereal::SchemaWriter& writer) const;

    MCNAPI bool $deserializeData(
        ::cereal::BasicLoader&      loader,
        ::cereal::SchemaReader&     reader,
        ::BedrockLoadContext const& context
    );


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace Editor::Annotations
