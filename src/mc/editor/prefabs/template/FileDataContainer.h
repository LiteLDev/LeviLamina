#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Editor::Prefabs::PrefabDBTemplateLoader::v1 { struct TemplateData; }
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace Editor::Prefabs::PrefabDBTemplateLoader::CurrentVersion {

struct FileDataContainer {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32>  mUnkd35feb;
    ::ll::UntypedStorage<8, 192> mUnkbbd638;
    // NOLINTEND

public:
    // prevent constructor by default
    FileDataContainer& operator=(FileDataContainer const&);
    FileDataContainer(FileDataContainer const&);

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI FileDataContainer();

    MCNAPI ~FileDataContainer();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::std::optional<::Editor::Prefabs::PrefabDBTemplateLoader::CurrentVersion::FileDataContainer>
    fromString(
        ::Puv::SlicedLoader<::Editor::Prefabs::PrefabDBTemplateLoader::v1::TemplateData, nullptr_t, nullptr_t>& loader,
        ::std::string&                jsonString,
        ::std::vector<::std::string>& outErrors
    );

    MCNAPI static ::std::optional<::std::string> toString(
        ::cereal::ReflectionCtx&                                           ctx,
        ::Editor::Prefabs::PrefabDBTemplateLoader::v1::TemplateData const& templateData
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace Editor::Prefabs::PrefabDBTemplateLoader::CurrentVersion
