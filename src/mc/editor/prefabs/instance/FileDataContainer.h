#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Editor::Prefabs::PrefabDBInstanceLoader::v1 { struct InstanceData; }
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace Editor::Prefabs::PrefabDBInstanceLoader::CurrentVersion {

struct FileDataContainer {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnke0fdf3;
    ::ll::UntypedStorage<8, 80> mUnkd47861;
    // NOLINTEND

public:
    // prevent constructor by default
    FileDataContainer& operator=(FileDataContainer const&);
    FileDataContainer(FileDataContainer const&);
    FileDataContainer();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~FileDataContainer();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::std::optional<::Editor::Prefabs::PrefabDBInstanceLoader::CurrentVersion::FileDataContainer>
    fromString(
        ::Puv::SlicedLoader<::Editor::Prefabs::PrefabDBInstanceLoader::v1::InstanceData, nullptr_t, nullptr_t>& loader,
        ::std::string&                jsonString,
        ::std::vector<::std::string>& outErrors
    );

    MCNAPI static ::std::optional<::std::string> toString(
        ::cereal::ReflectionCtx&                                           ctx,
        ::Editor::Prefabs::PrefabDBInstanceLoader::v1::InstanceData const& templateData
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace Editor::Prefabs::PrefabDBInstanceLoader::CurrentVersion
