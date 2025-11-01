#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace Editor::Prefabs::PrefabDBTemplateLoader::CurrentVersion {

struct FileDataContainer {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32>  mUnkd35feb;
    ::ll::UntypedStorage<8, 160> mUnkbbd638;
    // NOLINTEND

public:
    // prevent constructor by default
    FileDataContainer& operator=(FileDataContainer const&);
    FileDataContainer(FileDataContainer const&);
    FileDataContainer();

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void bindType(::cereal::ReflectionCtx& ctx);
    // NOLINTEND
};

} // namespace Editor::Prefabs::PrefabDBTemplateLoader::CurrentVersion
