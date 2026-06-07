#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/game_refs/WeakRef.h"
#include "mc/util/Mirror.h"
#include "mc/util/Rotation.h"

// auto generated forward declare list
// clang-format off
namespace Editor::Prefabs { class PrefabDBTemplate; }
namespace cereal { struct ReflectionCtx; }
namespace mce { class UUID; }
// clang-format on

namespace Editor::Prefabs {

class PrefabDBPrefabInstanceStructureRef {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnk9e08a0;
    ::ll::UntypedStorage<8, 8>  mUnk65baaf;
    ::ll::UntypedStorage<8, 16> mUnkb0d6c6;
    ::ll::UntypedStorage<8, 16> mUnked050e;
    ::ll::UntypedStorage<1, 1>  mUnk81f6da;
    ::ll::UntypedStorage<1, 1>  mUnkef25a5;
    ::ll::UntypedStorage<1, 1>  mUnkea2832;
    // NOLINTEND

public:
    // prevent constructor by default
    PrefabDBPrefabInstanceStructureRef& operator=(PrefabDBPrefabInstanceStructureRef const&);
    PrefabDBPrefabInstanceStructureRef(PrefabDBPrefabInstanceStructureRef const&);
    PrefabDBPrefabInstanceStructureRef();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::Mirror getMirror() const;

    MCNAPI ::mce::UUID getPrefabStructureId() const;

    MCNAPI ::Rotation getRotation() const;

    MCNAPI ::mce::UUID getStructureTemplateDataId() const;

    MCNAPI ::WeakRef<::Editor::Prefabs::PrefabDBTemplate> getTemplateRef();

    MCNAPI void setMirror(::Mirror mirror);

    MCNAPI void setRotation(::Rotation rotation);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void bindType(::cereal::ReflectionCtx& ctx);
    // NOLINTEND
};

} // namespace Editor::Prefabs
