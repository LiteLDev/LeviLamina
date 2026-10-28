#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/game_refs/EnableGetWeakRef.h"
#include "mc/editor/AnnotationType.h"

// auto generated forward declare list
// clang-format off
class HashedString;
class Vec3;
struct DimensionType;
namespace Editor::Annotations { class AnnotationMetadataHandler; }
namespace mce { class UUID; }
// clang-format on

namespace Editor::Annotations {

class AnnotationMetadata : public ::EnableGetWeakRef<::Editor::Annotations::AnnotationMetadata> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnkbc3ca0;
    ::ll::UntypedStorage<4, 4>  mUnk3a2b98;
    ::ll::UntypedStorage<4, 4>  mUnkedfac0;
    ::ll::UntypedStorage<4, 12> mUnk3f5727;
    ::ll::UntypedStorage<1, 1>  mUnk6f6cc8;
    ::ll::UntypedStorage<8, 48> mUnk8f5161;
    ::ll::UntypedStorage<8, 24> mUnkb2c757;
    ::ll::UntypedStorage<8, 8>  mUnkf909be;
    ::ll::UntypedStorage<1, 1>  mUnk4f3701;
    ::ll::UntypedStorage<8, 8>  mUnkfc5f53;
    // NOLINTEND

public:
    // prevent constructor by default
    AnnotationMetadata& operator=(AnnotationMetadata const&);
    AnnotationMetadata(AnnotationMetadata const&);
    AnnotationMetadata();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI AnnotationMetadata(
        ::mce::UUID const&                                id,
        ::Editor::Annotations::AnnotationType             type,
        ::DimensionType const&                            dimension,
        ::Vec3 const&                                     position,
        bool                                              visible,
        ::HashedString const&                             name,
        ::std::vector<::HashedString> const&              tags,
        int64                                             creationDate,
        ::Editor::Annotations::AnnotationMetadataHandler* handler
    );

    MCNAPI void setName(::HashedString const& name);

    MCNAPI void setTags(::std::vector<::HashedString> const& tags);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
        ::mce::UUID const&                                id,
        ::Editor::Annotations::AnnotationType             type,
        ::DimensionType const&                            dimension,
        ::Vec3 const&                                     position,
        bool                                              visible,
        ::HashedString const&                             name,
        ::std::vector<::HashedString> const&              tags,
        int64                                             creationDate,
        ::Editor::Annotations::AnnotationMetadataHandler* handler
    );
    // NOLINTEND
};

} // namespace Editor::Annotations
