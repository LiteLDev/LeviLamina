#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Editor::Prefabs::PrefabDBInstanceLoader::CurrentVersion {

struct FileDataContainer {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnk3baf87;
    ::ll::UntypedStorage<8, 80> mUnkd47861;
    // NOLINTEND

public:
    // prevent constructor by default
    FileDataContainer& operator=(FileDataContainer const&);
    FileDataContainer();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI FileDataContainer(::Editor::Prefabs::PrefabDBInstanceLoader::CurrentVersion::FileDataContainer const&);

    MCNAPI ::Editor::Prefabs::PrefabDBInstanceLoader::CurrentVersion::FileDataContainer&
    operator=(::Editor::Prefabs::PrefabDBInstanceLoader::CurrentVersion::FileDataContainer&&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::Editor::Prefabs::PrefabDBInstanceLoader::CurrentVersion::FileDataContainer const&);
    // NOLINTEND
};

} // namespace Editor::Prefabs::PrefabDBInstanceLoader::CurrentVersion
