#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/AutomaticID.h"
#include "mc/deps/game_refs/EnableGetWeakRef.h"
#include "mc/deps/game_refs/WeakRef.h"
#include "mc/util/Mirror.h"
#include "mc/util/Rotation.h"

// auto generated forward declare list
// clang-format off
class Dimension;
class Vec3;
namespace Editor::Prefabs { class PrefabDBPrefabInstanceStructureRef; }
namespace Editor::Prefabs { class PrefabDBTemplate; }
namespace Editor::Prefabs::PrefabDBInstanceLoader::v1 { struct InstanceData; }
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace Editor::Prefabs {

class PrefabDBPrefabInstance : public ::std::enable_shared_from_this<::Editor::Prefabs::PrefabDBPrefabInstance>,
                               public ::EnableGetWeakRef<::Editor::Prefabs::PrefabDBPrefabInstance> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnk77f4f4;
    ::ll::UntypedStorage<8, 16> mUnkb35a65;
    ::ll::UntypedStorage<8, 16> mUnk6dfa1b;
    ::ll::UntypedStorage<4, 12> mUnk27f2ed;
    ::ll::UntypedStorage<1, 1>  mUnk84103e;
    ::ll::UntypedStorage<1, 1>  mUnk5e54e3;
    ::ll::UntypedStorage<8, 24> mUnk9a2025;
    ::ll::UntypedStorage<4, 4>  mUnk116d29;
    ::ll::UntypedStorage<4, 4>  mUnk496546;
    ::ll::UntypedStorage<1, 1>  mUnk5b6077;
    ::ll::UntypedStorage<1, 1>  mUnkcf8fe6;
    // NOLINTEND

public:
    // prevent constructor by default
    PrefabDBPrefabInstance(PrefabDBPrefabInstance const&);
    PrefabDBPrefabInstance();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI PrefabDBPrefabInstance(
        ::WeakRef<::Editor::Prefabs::PrefabDBTemplate>                     prefabTemplateRef,
        ::Editor::Prefabs::PrefabDBInstanceLoader::v1::InstanceData const& data,
        ::DimensionType                                                    dimensionType
    );

    MCNAPI PrefabDBPrefabInstance(
        ::WeakRef<::Editor::Prefabs::PrefabDBTemplate> prefabTemplateRef,
        ::DimensionType                                dimensionType,
        ::Vec3 const&                                  rootPosition,
        ::Rotation                                     rotation,
        ::Mirror                                       mirror
    );

    MCNAPI void clearDirty() const;

    MCNAPI ::WeakRef<::Editor::Prefabs::PrefabDBPrefabInstance> getWeakRef();

    MCNAPI bool isDirty() const;

    MCNAPI ::Editor::Prefabs::PrefabDBPrefabInstance& operator=(::Editor::Prefabs::PrefabDBPrefabInstance const&);

    MCNAPI ::Editor::Prefabs::PrefabDBInstanceLoader::v1::InstanceData saveToFileData() const;

    MCNAPI void updateFromTemplate(::WeakRef<::Editor::Prefabs::PrefabDBTemplate> templateRef);

    MCNAPI ~PrefabDBPrefabInstance();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void bindType(::cereal::ReflectionCtx& ctx);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
        ::WeakRef<::Editor::Prefabs::PrefabDBTemplate>                     prefabTemplateRef,
        ::Editor::Prefabs::PrefabDBInstanceLoader::v1::InstanceData const& data,
        ::DimensionType                                                    dimensionType
    );

    MCNAPI void* $ctor(
        ::WeakRef<::Editor::Prefabs::PrefabDBTemplate> prefabTemplateRef,
        ::DimensionType                                dimensionType,
        ::Vec3 const&                                  rootPosition,
        ::Rotation                                     rotation,
        ::Mirror                                       mirror
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace Editor::Prefabs
