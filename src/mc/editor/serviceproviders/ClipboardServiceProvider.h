#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/game_refs/WeakRef.h"
#include "mc/external/scripting/runtime/Result.h"
#include "mc/external/scripting/runtime/Result_deprecated.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
class CompoundBlockVolume;
namespace Bedrock::PubSub { class Subscription; }
namespace Editor { class EditorStructureTemplate; }
namespace Editor::Selection { class SelectionContainer; }
namespace Editor::Services { class ClipboardItem; }
namespace Editor::Services { struct ClipboardWriteOptions; }
namespace mce { class UUID; }
// clang-format on

namespace Editor::Services {

class ClipboardServiceProvider {
public:
    // prevent constructor by default
    ClipboardServiceProvider& operator=(ClipboardServiceProvider const&);
    ClipboardServiceProvider(ClipboardServiceProvider const&);
    ClipboardServiceProvider();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ClipboardServiceProvider();

    // vIndex: 1
    virtual ::mce::UUID const& getPrimaryItemId() = 0;

    // vIndex: 2
    virtual ::mce::UUID const& create() = 0;

    // vIndex: 3
    virtual bool destroy(::mce::UUID const&) = 0;

    // vIndex: 4
    virtual void setPrimaryItem(::mce::UUID const&) = 0;

    // vIndex: 5
    virtual ::Editor::Services::ClipboardItem* getPrimaryItem() = 0;

    // vIndex: 6
    virtual ::Scripting::Result<void>
    readFromSelection(::mce::UUID const&, ::Editor::Selection::SelectionContainer const&) = 0;

    // vIndex: 7
    virtual ::Scripting::Result<void> readFromVolume(::mce::UUID const&, ::CompoundBlockVolume const&) = 0;

    // vIndex: 8
    virtual ::Scripting::Result<void> readFromWorld(::mce::UUID const&, ::BlockPos const&, ::BlockPos const&) = 0;

    // vIndex: 9
    virtual ::Scripting::Result<void>
    readFromEditorStructure(::mce::UUID const&, ::Editor::EditorStructureTemplate const&) = 0;

    // vIndex: 10
    virtual ::Scripting::Result_deprecated<bool>
    writeToWorld(::mce::UUID const&, ::BlockPos const&, ::Editor::Services::ClipboardWriteOptions const*) const = 0;

    // vIndex: 11
    virtual ::Scripting::Result_deprecated<::WeakRef<::Editor::Selection::SelectionContainer>>
    getPredictedWriteAsSelection(::mce::UUID const&, ::BlockPos const&, ::Editor::Services::ClipboardWriteOptions const*)
        const = 0;

    // vIndex: 12
    virtual ::Scripting::Result_deprecated<::CompoundBlockVolume>
    getPredictedWriteAsCompoundBlockVolume(::mce::UUID const&, ::BlockPos const&, ::Editor::Services::ClipboardWriteOptions const*)
        const = 0;

    // vIndex: 13
    virtual ::Scripting::Result<void> clear(::mce::UUID const&) = 0;

    // vIndex: 14
    virtual ::Scripting::Result_deprecated<bool> isEmpty(::mce::UUID const&) const = 0;

    // vIndex: 15
    virtual ::Scripting::Result_deprecated<::BlockPos> getSize(::mce::UUID const&) const = 0;

    // vIndex: 16
    virtual ::Scripting::Result_deprecated<::Bedrock::PubSub::Subscription>
        listenForClipboardItemChanges(::std::function<void(::mce::UUID const&, bool)>) = 0;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace Editor::Services
