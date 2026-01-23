#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace Editor::Prefabs::PrefabDBInstanceLoader::v1 {

struct InstanceStructureRef {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnkdde45d;
    ::ll::UntypedStorage<8, 16> mUnk5fe3a7;
    ::ll::UntypedStorage<1, 1>  mUnk35ae40;
    ::ll::UntypedStorage<1, 1>  mUnk157284;
    // NOLINTEND

public:
    // prevent constructor by default
    InstanceStructureRef& operator=(InstanceStructureRef const&);
    InstanceStructureRef(InstanceStructureRef const&);
    InstanceStructureRef();

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void bindType(::cereal::ReflectionCtx& ctx);
    // NOLINTEND
};

} // namespace Editor::Prefabs::PrefabDBInstanceLoader::v1
