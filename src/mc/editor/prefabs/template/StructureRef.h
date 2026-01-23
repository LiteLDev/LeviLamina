#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace Editor::Prefabs::PrefabDBTemplateLoader::v1 {

struct StructureRef {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnkfc8fef;
    ::ll::UntypedStorage<8, 16> mUnkba3c74;
    ::ll::UntypedStorage<4, 12> mUnk57e1b8;
    ::ll::UntypedStorage<1, 1>  mUnk1d93b6;
    ::ll::UntypedStorage<1, 1>  mUnkf62d45;
    ::ll::UntypedStorage<4, 12> mUnkd9c0a7;
    ::ll::UntypedStorage<4, 12> mUnk8fe1cb;
    ::ll::UntypedStorage<4, 12> mUnkebb366;
    // NOLINTEND

public:
    // prevent constructor by default
    StructureRef& operator=(StructureRef const&);
    StructureRef(StructureRef const&);
    StructureRef();

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void bindType(::cereal::ReflectionCtx& ctx);
    // NOLINTEND
};

} // namespace Editor::Prefabs::PrefabDBTemplateLoader::v1
