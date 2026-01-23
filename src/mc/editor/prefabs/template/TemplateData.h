#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class SemVersionConstant;
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace Editor::Prefabs::PrefabDBTemplateLoader::v1 {

struct TemplateData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnk407c8f;
    ::ll::UntypedStorage<8, 32> mUnk54bf68;
    ::ll::UntypedStorage<8, 32> mUnke25480;
    ::ll::UntypedStorage<8, 32> mUnkf6c926;
    ::ll::UntypedStorage<8, 32> mUnka8bd0d;
    ::ll::UntypedStorage<8, 24> mUnkb766b2;
    ::ll::UntypedStorage<8, 24> mUnk9e6280;
    // NOLINTEND

public:
    // prevent constructor by default
    TemplateData(TemplateData const&);
    TemplateData();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI TemplateData(::Editor::Prefabs::PrefabDBTemplateLoader::v1::TemplateData&&);

    MCNAPI ::Editor::Prefabs::PrefabDBTemplateLoader::v1::TemplateData&
    operator=(::Editor::Prefabs::PrefabDBTemplateLoader::v1::TemplateData&&);

    MCNAPI ::Editor::Prefabs::PrefabDBTemplateLoader::v1::TemplateData&
    operator=(::Editor::Prefabs::PrefabDBTemplateLoader::v1::TemplateData const&);

    MCNAPI ~TemplateData();
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
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::Editor::Prefabs::PrefabDBTemplateLoader::v1::TemplateData&&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace Editor::Prefabs::PrefabDBTemplateLoader::v1
