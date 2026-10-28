#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/game_refs/EnableGetWeakRef.h"
#include "mc/editor/AnnotationType.h"

// auto generated forward declare list
// clang-format off
class BedrockLoadContext;
namespace cereal { class BasicLoader; }
namespace cereal { struct SchemaReader; }
namespace cereal { struct SchemaWriter; }
// clang-format on

namespace Editor::Annotations {

class AnnotationInstance : public ::EnableGetWeakRef<::Editor::Annotations::AnnotationInstance> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnkff743d;
    ::ll::UntypedStorage<1, 1>  mUnk2059d3;
    ::ll::UntypedStorage<8, 8>  mUnk6bec77;
    // NOLINTEND

public:
    // prevent constructor by default
    AnnotationInstance& operator=(AnnotationInstance const&);
    AnnotationInstance(AnnotationInstance const&);
    AnnotationInstance();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~AnnotationInstance() = default;

    virtual bool serializeData(::cereal::SchemaWriter& writer) const;

    virtual bool
    deserializeData(::cereal::BasicLoader& loader, ::cereal::SchemaReader& reader, ::BedrockLoadContext const& context);
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI ::Editor::Annotations::AnnotationType getType() const;
#endif
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
