#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Editor::Prefabs::PrefabDBTemplateLoader::v1 {

struct StructureRef {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnkac74bf;
    ::ll::UntypedStorage<8, 16> mUnk14af50;
    ::ll::UntypedStorage<4, 12> mUnk57e1b8;
    ::ll::UntypedStorage<4, 4> mUnk118a18;
    ::ll::UntypedStorage<4, 4> mUnkb72de5;
    ::ll::UntypedStorage<4, 12> mUnkd9c0a7;
    ::ll::UntypedStorage<4, 12> mUnk8fe1cb;
    ::ll::UntypedStorage<4, 12> mUnkebb366;
    // NOLINTEND

public:
    // prevent constructor by default
    StructureRef& operator=(StructureRef const&);
    StructureRef(StructureRef const&);
    StructureRef();

};

}
