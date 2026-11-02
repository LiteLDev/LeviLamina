#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Editor::Prefabs::PrefabDBTemplateLoader::CurrentVersion {

struct FileDataContainer {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32>  mUnke76bac;
    ::ll::UntypedStorage<8, 192> mUnkbbd638;
    // NOLINTEND

public:
    // prevent constructor by default
    FileDataContainer& operator=(FileDataContainer const&);
    FileDataContainer(FileDataContainer const&);
    FileDataContainer();
};

} // namespace Editor::Prefabs::PrefabDBTemplateLoader::CurrentVersion
