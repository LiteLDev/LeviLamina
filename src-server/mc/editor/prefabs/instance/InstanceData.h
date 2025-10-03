#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Editor::Prefabs::PrefabDBInstanceLoader::v1 {

struct InstanceData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnka2042f;
    ::ll::UntypedStorage<8, 16> mUnkb752cd;
    ::ll::UntypedStorage<4, 12> mUnkacdcba;
    ::ll::UntypedStorage<4, 4>  mUnk6edbb0;
    ::ll::UntypedStorage<4, 4>  mUnk1b9bbe;
    ::ll::UntypedStorage<4, 4>  mUnk39b885;
    ::ll::UntypedStorage<8, 24> mUnk806f3f;
    // NOLINTEND

public:
    // prevent constructor by default
    InstanceData& operator=(InstanceData const&);
    InstanceData(InstanceData const&);
    InstanceData();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::Editor::Prefabs::PrefabDBInstanceLoader::v1::InstanceData&
    operator=(::Editor::Prefabs::PrefabDBInstanceLoader::v1::InstanceData&&);
    // NOLINTEND
};

} // namespace Editor::Prefabs::PrefabDBInstanceLoader::v1
