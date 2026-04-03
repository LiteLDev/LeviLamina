#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class SemVersionConstant;
// clang-format on

namespace Editor::Prefabs::PrefabDBTemplateLoader::v1 {

struct TemplateData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnk407c8f;
    ::ll::UntypedStorage<8, 32> mUnkf2eff5;
    ::ll::UntypedStorage<8, 32> mUnk41fa9c;
    ::ll::UntypedStorage<8, 32> mUnk2dc610;
    ::ll::UntypedStorage<8, 32> mUnkaf2386;
    ::ll::UntypedStorage<8, 24> mUnkf288d5;
    ::ll::UntypedStorage<8, 24> mUnka83605;
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
