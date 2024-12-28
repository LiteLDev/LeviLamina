#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/game_refs/WeakRef.h"
#include "mc/external/scripting/binding_type/ClassBindingBuilder.h"
#include "mc/external/scripting/lifetime_registry/WeakHandleFromThis.h"
#include "mc/external/scripting/runtime/Result.h"
#include "mc/external/scripting/runtime/Result_deprecated.h"
#include "mc/world/level/block/CompoundBlockVolumePositionRelativity.h"

// auto generated forward declare list
// clang-format off
class BoundingBox;
class Vec3;
namespace Editor::Selection { class SelectionContainer; }
namespace ScriptModuleMinecraft { class ScriptCompoundBlockVolumeItem; }
namespace ScriptModuleMinecraft { class ScriptRGBA; }
namespace Scripting { class WeakLifetimeScope; }
// clang-format on

namespace Editor::ScriptModule {

class ScriptSelectionContainer
: public ::Scripting::WeakHandleFromThis<::Editor::ScriptModule::ScriptSelectionContainer> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnk59bf9f;
    ::ll::UntypedStorage<8, 16> mUnk3ef2db;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptSelectionContainer& operator=(ScriptSelectionContainer const&);
    ScriptSelectionContainer(ScriptSelectionContainer const&);
    ScriptSelectionContainer();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ScriptSelectionContainer(::Editor::ScriptModule::ScriptSelectionContainer&&);

    MCAPI ScriptSelectionContainer(
        ::WeakRef<::Editor::Selection::SelectionContainer> containerObjectRef,
        ::Scripting::WeakLifetimeScope const&              scope
    );

    MCAPI ::Scripting::Result<void> clearContainer();

    MCAPI ::Scripting::Result_deprecated<::BoundingBox> containerBoundingBox();

    MCAPI ::Scripting::Result_deprecated<::ScriptModuleMinecraft::ScriptRGBA> getFillColor() const;

    MCAPI ::WeakRef<::Editor::Selection::SelectionContainer> getNativeContainerRef() const;

    MCAPI ::Scripting::Result_deprecated<::ScriptModuleMinecraft::ScriptRGBA> getOutlineColor() const;

    MCAPI ::Scripting::Result_deprecated<bool> isVisible() const;

    MCAPI ::Scripting::Result_deprecated<::Vec3> moveBy(::Vec3 const& delta);

    MCAPI ::Scripting::Result_deprecated<::Vec3> moveTo(::Vec3 const& position);

    MCAPI ::Editor::ScriptModule::ScriptSelectionContainer&
    operator=(::Editor::ScriptModule::ScriptSelectionContainer&&);

    MCAPI ::std::optional<::ScriptModuleMinecraft::ScriptCompoundBlockVolumeItem>
    peekLastVolume(::std::optional<::CompoundBlockVolumePositionRelativity> optRelativity);

    MCAPI ::Scripting::Result<void> popVolume();

    MCAPI ::Scripting::Result<void> pushVolume(::ScriptModuleMinecraft::ScriptCompoundBlockVolumeItem const& item);

    MCAPI ::Scripting::Result<void> setFillColor(::ScriptModuleMinecraft::ScriptRGBA const& color);

    MCAPI ::Scripting::Result<void> setOutlineColor(::ScriptModuleMinecraft::ScriptRGBA const& color);

    MCAPI ::Scripting::Result<void> setVisible(bool visible);

    MCAPI ~ScriptSelectionContainer();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::Scripting::ClassBindingBuilder<::Editor::ScriptModule::ScriptSelectionContainer> bindScript();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::Editor::ScriptModule::ScriptSelectionContainer&&);

    MCAPI void* $ctor(
        ::WeakRef<::Editor::Selection::SelectionContainer> containerObjectRef,
        ::Scripting::WeakLifetimeScope const&              scope
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace Editor::ScriptModule
