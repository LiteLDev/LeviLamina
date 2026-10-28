#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class SemVersionConstant;
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace Editor::Annotations {

struct TextAnnotationData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnkbc4a00;
    ::ll::UntypedStorage<1, 1>  mUnk5f3d36;
    ::ll::UntypedStorage<4, 16> mUnkc31ab5;
    ::ll::UntypedStorage<4, 4>  mUnk9f0743;
    ::ll::UntypedStorage<1, 1>  mUnk5ba53f;
    ::ll::UntypedStorage<4, 16> mUnkc175db;
    ::ll::UntypedStorage<4, 4>  mUnk1e55f7;
    ::ll::UntypedStorage<4, 4>  mUnk28aef9;
    ::ll::UntypedStorage<4, 4>  mUnkd8d55e;
    // NOLINTEND

public:
    // prevent constructor by default
    TextAnnotationData& operator=(TextAnnotationData const&);
    TextAnnotationData(TextAnnotationData const&);
    TextAnnotationData();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~TextAnnotationData();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void bindType(::cereal::ReflectionCtx& ctx);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::SemVersionConstant const& VERSION();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace Editor::Annotations
