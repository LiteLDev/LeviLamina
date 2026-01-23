#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class SemVersionConstant;
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace Editor::Prefabs::PrefabDBInstanceLoader::v1 {

struct InstanceData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnka2042f;
    ::ll::UntypedStorage<8, 16> mUnkb752cd;
    ::ll::UntypedStorage<4, 12> mUnkacdcba;
    ::ll::UntypedStorage<4, 4>  mUnk6edbb0;
    ::ll::UntypedStorage<1, 1>  mUnk282428;
    ::ll::UntypedStorage<1, 1>  mUnkccbb27;
    ::ll::UntypedStorage<8, 24> mUnk7a5cbe;
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

    MCNAPI ~InstanceData();
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
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace Editor::Prefabs::PrefabDBInstanceLoader::v1
