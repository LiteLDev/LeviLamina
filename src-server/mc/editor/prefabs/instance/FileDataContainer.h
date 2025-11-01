#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
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
    MCNAPI static void bindType(::cereal::ReflectionCtx& ctx);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

};

}
