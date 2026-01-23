#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/editor/PrefabSource.h"
#include "mc/deps/game_refs/EnableGetWeakRef.h"
#include "mc/deps/game_refs/StackRefResult.h"
#include "mc/deps/game_refs/WeakRef.h"
#include "mc/util/Mirror.h"
#include "mc/util/Rotation.h"

// auto generated forward declare list
// clang-format off
class Vec3;
namespace Editor::Prefabs { class PrefabDBTemplateStructureRef; }
namespace Editor::Prefabs::PrefabDBTemplateLoader::v1 { struct TemplateData; }
namespace mce { class UUID; }
// clang-format on

namespace Editor::Prefabs {

class PrefabDBTemplate : public ::std::enable_shared_from_this<::Editor::Prefabs::PrefabDBTemplate>,
                         public ::EnableGetWeakRef<::Editor::Prefabs::PrefabDBTemplate> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnkd9b02a;
    ::ll::UntypedStorage<8, 32> mUnk44a767;
    ::ll::UntypedStorage<8, 32> mUnkac3425;
    ::ll::UntypedStorage<8, 32> mUnk5530ac;
    ::ll::UntypedStorage<8, 32> mUnkd04334;
    ::ll::UntypedStorage<8, 24> mUnk72a0ac;
    ::ll::UntypedStorage<8, 24> mUnk8cc2c3;
    ::ll::UntypedStorage<4, 4>  mUnk17a0c6;
    ::ll::UntypedStorage<4, 4>  mUnk6e8a80;
    ::ll::UntypedStorage<1, 1>  mUnke8f8ec;
    ::ll::UntypedStorage<4, 4>  mUnk823b04;
    // NOLINTEND

public:
    // prevent constructor by default
    PrefabDBTemplate& operator=(PrefabDBTemplate const&);
    PrefabDBTemplate(PrefabDBTemplate const&);
    PrefabDBTemplate();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI PrefabDBTemplate(
        ::Editor::Prefabs::PrefabSource                                    source,
        ::Editor::Prefabs::PrefabDBTemplateLoader::v1::TemplateData const& fileData
    );

    MCNAPI PrefabDBTemplate(
        ::std::string const&                name,
        ::std::string const&                displayName,
        ::std::string const&                description,
        ::std::string const&                notes,
        ::std::vector<::std::string> const& tags,
        ::Editor::Prefabs::PrefabSource     source
    );

    MCNAPI ::WeakRef<::Editor::Prefabs::PrefabDBTemplateStructureRef> addStructureRef(
        ::mce::UUID const& structureTemplateId,
        ::Vec3 const&      instanceOffset,
        ::Rotation         instanceRotation,
        ::Mirror           instanceMirror,
        ::Vec3 const&      structureSize,
        ::Vec3 const&      structureOffset,
        ::Vec3 const&      structureNormalizedOrigin
    );

    MCNAPI bool clone(::Editor::Prefabs::PrefabDBTemplate const& other);

    MCNAPI void forEachStructureRef(
        ::std::function<void(::StackRefResult<::Editor::Prefabs::PrefabDBTemplateStructureRef>)> callback
    );

    MCNAPI ::WeakRef<::Editor::Prefabs::PrefabDBTemplateStructureRef>
    getStructureRef(::mce::UUID const& prefabStructureId);

    MCNAPI bool isDirty() const;

    MCNAPI bool removeStructureRef(::WeakRef<::Editor::Prefabs::PrefabDBTemplateStructureRef> structureRef);

    MCNAPI ::Editor::Prefabs::PrefabDBTemplateLoader::v1::TemplateData saveToFileData() const;

    MCNAPI ~PrefabDBTemplate();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
        ::Editor::Prefabs::PrefabSource                                    source,
        ::Editor::Prefabs::PrefabDBTemplateLoader::v1::TemplateData const& fileData
    );

    MCNAPI void* $ctor(
        ::std::string const&                name,
        ::std::string const&                displayName,
        ::std::string const&                description,
        ::std::string const&                notes,
        ::std::vector<::std::string> const& tags,
        ::Editor::Prefabs::PrefabSource     source
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace Editor::Prefabs
