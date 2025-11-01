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
    ::ll::UntypedStorage<8, 48> mUnkcdf7ff;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptRelativeVolumeListBlockVolume& operator=(ScriptRelativeVolumeListBlockVolume const&);
    ScriptRelativeVolumeListBlockVolume(ScriptRelativeVolumeListBlockVolume const&);
    ScriptRelativeVolumeListBlockVolume();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ScriptRelativeVolumeListBlockVolume() /*override*/ = default;

    // vIndex: 1
    virtual ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptBlockLocationIterator> getBlockLocationIterator(::Scripting::WeakLifetimeScope scope) /*override*/;

    // vIndex: 2
    virtual ::std::unique_ptr<::BaseBlockLocationIterator> createBlockLocationIterator() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit ScriptRelativeVolumeListBlockVolume(::std::optional<::Vec3> const& origin);

    MCNAPI explicit ScriptRelativeVolumeListBlockVolume(::Editor::RelativeVolumeListBlockVolume const& rhs);

    MCNAPI void add(::std::variant<::Vec3 const, ::std::vector<::Vec3> const, ::Scripting::StrongTypedObjectHandle<::Editor::ScriptModule::ScriptRelativeVolumeListBlockVolume> const, ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptSimpleBlockVolume> const, ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptBlockVolumeBase> const> const& toAdd);

    MCNAPI void clear();

    MCNAPI ::std::optional<::Vec3 const> getOrigin() const;

    MCNAPI int getVolumeCount() const;

    MCNAPI ::std::vector<::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptSimpleBlockVolume>> getVolumes(::Scripting::WeakLifetimeScope scope) const;

    MCNAPI bool hasAdjacent(::Vec3 const& pos, ::Vec3 const& offset) const;

    MCNAPI bool const isEmpty() const;

    MCNAPI void moveTo(::Vec3 const& location);

    MCNAPI void remove(::std::variant<::Vec3 const, ::std::vector<::Vec3> const, ::Scripting::StrongTypedObjectHandle<::Editor::ScriptModule::ScriptRelativeVolumeListBlockVolume> const, ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptSimpleBlockVolume> const, ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptBlockVolumeBase> const> const& toRemove);

    MCNAPI void set(::std::variant<::Vec3 const, ::std::vector<::Vec3> const, ::Scripting::StrongTypedObjectHandle<::Editor::ScriptModule::ScriptRelativeVolumeListBlockVolume> const, ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptSimpleBlockVolume> const, ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptBlockVolumeBase> const> const& toSet);

    MCNAPI void setOrigin(::std::optional<::Vec3 const>& optOrigin);

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
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptBlockLocationIterator> $getBlockLocationIterator(::Scripting::WeakLifetimeScope scope);

    MCNAPI ::std::unique_ptr<::BaseBlockLocationIterator> $createBlockLocationIterator();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND

};

}
