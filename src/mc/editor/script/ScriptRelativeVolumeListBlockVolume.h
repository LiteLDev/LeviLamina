#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/editor/RelativeVolumeListBlockVolumeAction.h"
#include "mc/deps/core/utility/pub_sub/Publisher.h"
#include "mc/deps/scripting/lifetime_registry/StrongTypedObjectHandle.h"
#include "mc/scripting/modules/minecraft/ScriptBlockVolumeBase.h"

// auto generated forward declare list
// clang-format off
class BaseBlockLocationIterator;
class SimpleBlockVolume;
class Vec3;
namespace Bedrock::PubSub { class Subscription; }
namespace Bedrock::PubSub::ThreadModel { struct SingleThreaded; }
namespace Editor { class RelativeVolumeListBlockVolume; }
namespace ScriptModuleMinecraft { class ScriptBlockLocationIterator; }
namespace ScriptModuleMinecraft { class ScriptSimpleBlockVolume; }
namespace Scripting { class WeakLifetimeScope; }
namespace Scripting { struct ClassBinding; }
// clang-format on

namespace Editor::ScriptModule {

class ScriptRelativeVolumeListBlockVolume : public ::ScriptModuleMinecraft::ScriptBlockVolumeBase {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 48> mUnka14d8f;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptRelativeVolumeListBlockVolume& operator=(ScriptRelativeVolumeListBlockVolume const&);
    ScriptRelativeVolumeListBlockVolume(ScriptRelativeVolumeListBlockVolume const&);
    ScriptRelativeVolumeListBlockVolume();

public:
    // virtual functions
    // NOLINTBEGIN
#ifdef LL_PLAT_S
    virtual ~ScriptRelativeVolumeListBlockVolume() /*override*/;
#else // LL_PLAT_C
    virtual ~ScriptRelativeVolumeListBlockVolume() /*override*/ = default;
#endif

    virtual ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptBlockLocationIterator>
    getBlockLocationIterator(::Scripting::WeakLifetimeScope scope) /*override*/;

    virtual ::std::unique_ptr<::BaseBlockLocationIterator> createBlockLocationIterator() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit ScriptRelativeVolumeListBlockVolume(::std::optional<::Vec3> const& origin);

    MCNAPI explicit ScriptRelativeVolumeListBlockVolume(::Editor::RelativeVolumeListBlockVolume const& rhs);

    MCNAPI ScriptRelativeVolumeListBlockVolume(::Vec3 const& location, ::std::optional<::Vec3> const& origin);

    MCNAPI
    ScriptRelativeVolumeListBlockVolume(::std::vector<::Vec3> const& locations, ::std::optional<::Vec3> const& origin);

    MCNAPI void
    add(::std::variant<
        ::Vec3 const,
        ::std::vector<::Vec3> const,
        ::Scripting::StrongTypedObjectHandle<::Editor::ScriptModule::ScriptRelativeVolumeListBlockVolume> const,
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptSimpleBlockVolume> const,
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptBlockVolumeBase> const> const& toAdd);

    MCNAPI ::Editor::RelativeVolumeListBlockVolume const& getVolume() const;

    MCNAPI ::std::vector<::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptSimpleBlockVolume>>
    getVolumes(::Scripting::WeakLifetimeScope scope) const;

    MCNAPI bool hasAdjacent(::Vec3 const& pos, ::Vec3 const& offset) const;

    MCNAPI void moveTo(::Vec3 const& location);

    MCNAPI ::Bedrock::PubSub::Subscription registerVolumeChangeListener(
        ::std::function<void(
            ::Editor::RelativeVolumeListBlockVolume const&,
            ::Editor::RelativeVolumeListBlockVolumeAction,
            ::std::variant<
                ::Vec3 const,
                ::std::vector<::Vec3> const,
                ::Editor::RelativeVolumeListBlockVolume const,
                ::SimpleBlockVolume const> const&
        )> fnListener
    );

    MCNAPI void remove(
        ::std::variant<
            ::Vec3 const,
            ::std::vector<::Vec3> const,
            ::Scripting::StrongTypedObjectHandle<::Editor::ScriptModule::ScriptRelativeVolumeListBlockVolume> const,
            ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptSimpleBlockVolume> const,
            ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptBlockVolumeBase> const> const& toRemove
    );

    MCNAPI void
    set(::std::variant<
        ::Vec3 const,
        ::std::vector<::Vec3> const,
        ::Scripting::StrongTypedObjectHandle<::Editor::ScriptModule::ScriptRelativeVolumeListBlockVolume> const,
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptSimpleBlockVolume> const,
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptBlockVolumeBase> const> const& toSet);

    MCNAPI void translate(::Vec3 const& offset);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::ClassBinding bindScript();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::std::optional<::Vec3> const& origin);

    MCNAPI void* $ctor(::Editor::RelativeVolumeListBlockVolume const& rhs);

    MCNAPI void* $ctor(::Vec3 const& location, ::std::optional<::Vec3> const& origin);

    MCNAPI void* $ctor(::std::vector<::Vec3> const& locations, ::std::optional<::Vec3> const& origin);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptBlockLocationIterator>
    $getBlockLocationIterator(::Scripting::WeakLifetimeScope scope);

    MCNAPI ::std::unique_ptr<::BaseBlockLocationIterator> $createBlockLocationIterator();


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace Editor::ScriptModule
