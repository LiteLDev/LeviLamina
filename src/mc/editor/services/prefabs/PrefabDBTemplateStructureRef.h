#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/game_refs/EnableGetWeakRef.h"
#include "mc/deps/game_refs/WeakRef.h"

namespace Editor::Prefabs {

class PrefabDBTemplateStructureRef
: public ::std::enable_shared_from_this<::Editor::Prefabs::PrefabDBTemplateStructureRef>,
  public ::EnableGetWeakRef<::Editor::Prefabs::PrefabDBTemplateStructureRef> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnk97a3d7;
    ::ll::UntypedStorage<8, 16> mUnk25964d;
    ::ll::UntypedStorage<4, 12> mUnk7faeed;
    ::ll::UntypedStorage<1, 1>  mUnk412827;
    ::ll::UntypedStorage<1, 1>  mUnkc31bb7;
    ::ll::UntypedStorage<4, 12> mUnkdc71ef;
    ::ll::UntypedStorage<4, 12> mUnkc26c7b;
    ::ll::UntypedStorage<4, 12> mUnk35652f;
    ::ll::UntypedStorage<1, 1>  mUnkd7449c;
    // NOLINTEND

public:
    // prevent constructor by default
    PrefabDBTemplateStructureRef& operator=(PrefabDBTemplateStructureRef const&);
    PrefabDBTemplateStructureRef(PrefabDBTemplateStructureRef const&);
    PrefabDBTemplateStructureRef();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::WeakRef<::Editor::Prefabs::PrefabDBTemplateStructureRef> getWeakRef();
    // NOLINTEND
};

} // namespace Editor::Prefabs
