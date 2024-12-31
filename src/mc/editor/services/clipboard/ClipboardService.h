#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/game_refs/WeakRef.h"
#include "mc/editor/serviceproviders/ClipboardServiceProvider.h"
#include "mc/editor/services/IEditorService.h"
#include "mc/external/scripting/runtime/Result.h"
#include "mc/external/scripting/runtime/Result_deprecated.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
class CompoundBlockVolume;
namespace Bedrock::PubSub { class Subscription; }
namespace Editor { class EditorStructureTemplate; }
namespace Editor { class ServiceProviderCollection; }
namespace Editor::Selection { class SelectionContainer; }
namespace Editor::Services { class ClipboardItem; }
namespace Editor::Services { struct ClipboardWriteOptions; }
namespace mce { class UUID; }
// clang-format on

namespace Editor::Services {

class ClipboardService : public ::Editor::Services::IEditorService,
                         public ::Editor::Services::ClipboardServiceProvider {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnk77bff1;
    ::ll::UntypedStorage<8, 24> mUnk1b2191;
    ::ll::UntypedStorage<8, 48> mUnk5ac402;
    // NOLINTEND

public:
    // prevent constructor by default
    ClipboardService& operator=(ClipboardService const&);
    ClipboardService(ClipboardService const&);
    ClipboardService();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ClipboardService() /*override*/ = default;

    // vIndex: 1
    virtual ::Scripting::Result<void> init() /*override*/;

    // vIndex: 2
    virtual ::Scripting::Result<void> ready() /*override*/;

    // vIndex: 3
    virtual ::Scripting::Result<void> quit() /*override*/;

    // vIndex: 4
    virtual ::std::string_view getServiceName() const /*override*/;

    // vIndex: 1
    virtual ::mce::UUID const& getPrimaryItemId() /*override*/;

    // vIndex: 2
    virtual ::mce::UUID const& create() /*override*/;

    // vIndex: 3
    virtual bool destroy(::mce::UUID const& id) /*override*/;

    // vIndex: 4
    virtual void setPrimaryItem(::mce::UUID const& id) /*override*/;

    // vIndex: 5
    virtual ::Editor::Services::ClipboardItem* getPrimaryItem() /*override*/;

    // vIndex: 6
    virtual ::Scripting::Result<void>
    readFromSelection(::mce::UUID const& itemId, ::Editor::Selection::SelectionContainer const& selection) /*override*/;

    // vIndex: 7
    virtual ::Scripting::Result<void>
    readFromVolume(::mce::UUID const& itemId, ::CompoundBlockVolume const& volume) /*override*/;

    // vIndex: 8
    virtual ::Scripting::Result<void>
    readFromWorld(::mce::UUID const& itemId, ::BlockPos const& from, ::BlockPos const& to) /*override*/;

    // vIndex: 9
    virtual ::Scripting::Result<void> readFromEditorStructure(
        ::mce::UUID const&                       itemId,
        ::Editor::EditorStructureTemplate const& editorStructure
    ) /*override*/;

    // vIndex: 10
    virtual ::Scripting::Result_deprecated<bool> writeToWorld(
        ::mce::UUID const&                               itemId,
        ::BlockPos const&                                position,
        ::Editor::Services::ClipboardWriteOptions const* options
    ) const /*override*/;

    // vIndex: 11
    virtual ::Scripting::Result_deprecated<::WeakRef<::Editor::Selection::SelectionContainer>>
    getPredictedWriteAsSelection(
        ::mce::UUID const&                               itemId,
        ::BlockPos const&                                position,
        ::Editor::Services::ClipboardWriteOptions const* options
    ) const /*override*/;

    // vIndex: 12
    virtual ::Scripting::Result_deprecated<::CompoundBlockVolume> getPredictedWriteAsCompoundBlockVolume(
        ::mce::UUID const&                               itemId,
        ::BlockPos const&                                position,
        ::Editor::Services::ClipboardWriteOptions const* options
    ) const /*override*/;

    // vIndex: 13
    virtual ::Scripting::Result<void> clear(::mce::UUID const& itemId) /*override*/;

    // vIndex: 14
    virtual ::Scripting::Result_deprecated<bool> isEmpty(::mce::UUID const& itemId) const /*override*/;

    // vIndex: 15
    virtual ::Scripting::Result_deprecated<::BlockPos> getSize(::mce::UUID const& itemId) const /*override*/;

    // vIndex: 16
    virtual ::Scripting::Result_deprecated<::Bedrock::PubSub::Subscription>
    listenForClipboardItemChanges(::std::function<void(::mce::UUID const&, bool)> callback) /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit ClipboardService(::Editor::ServiceProviderCollection& providers);

    MCAPI void _updateClient(::Editor::Services::ClipboardItem const& item) const;
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::Editor::ServiceProviderCollection& providers);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::Scripting::Result<void> $init();

    MCAPI ::Scripting::Result<void> $ready();

    MCAPI ::Scripting::Result<void> $quit();

    MCAPI ::std::string_view $getServiceName() const;

    MCAPI ::mce::UUID const& $getPrimaryItemId();

    MCAPI ::mce::UUID const& $create();

    MCAPI bool $destroy(::mce::UUID const& id);

    MCAPI void $setPrimaryItem(::mce::UUID const& id);

    MCAPI ::Editor::Services::ClipboardItem* $getPrimaryItem();

    MCAPI ::Scripting::Result<void>
    $readFromSelection(::mce::UUID const& itemId, ::Editor::Selection::SelectionContainer const& selection);

    MCAPI ::Scripting::Result<void> $readFromVolume(::mce::UUID const& itemId, ::CompoundBlockVolume const& volume);

    MCAPI ::Scripting::Result<void>
    $readFromWorld(::mce::UUID const& itemId, ::BlockPos const& from, ::BlockPos const& to);

    MCAPI ::Scripting::Result<void>
    $readFromEditorStructure(::mce::UUID const& itemId, ::Editor::EditorStructureTemplate const& editorStructure);

    MCAPI ::Scripting::Result_deprecated<bool> $writeToWorld(
        ::mce::UUID const&                               itemId,
        ::BlockPos const&                                position,
        ::Editor::Services::ClipboardWriteOptions const* options
    ) const;

    MCAPI ::Scripting::Result_deprecated<::WeakRef<::Editor::Selection::SelectionContainer>>
    $getPredictedWriteAsSelection(
        ::mce::UUID const&                               itemId,
        ::BlockPos const&                                position,
        ::Editor::Services::ClipboardWriteOptions const* options
    ) const;

    MCAPI ::Scripting::Result_deprecated<::CompoundBlockVolume> $getPredictedWriteAsCompoundBlockVolume(
        ::mce::UUID const&                               itemId,
        ::BlockPos const&                                position,
        ::Editor::Services::ClipboardWriteOptions const* options
    ) const;

    MCAPI ::Scripting::Result<void> $clear(::mce::UUID const& itemId);

    MCAPI ::Scripting::Result_deprecated<bool> $isEmpty(::mce::UUID const& itemId) const;

    MCAPI ::Scripting::Result_deprecated<::BlockPos> $getSize(::mce::UUID const& itemId) const;

    MCAPI ::Scripting::Result_deprecated<::Bedrock::PubSub::Subscription>
    $listenForClipboardItemChanges(::std::function<void(::mce::UUID const&, bool)> callback);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftableForClipboardServiceProvider();

    MCAPI static void** $vftableForIEditorService();
    // NOLINTEND
};

} // namespace Editor::Services
