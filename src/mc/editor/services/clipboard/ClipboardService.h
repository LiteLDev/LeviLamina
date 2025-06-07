#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/scripting/runtime/Result_deprecated.h"
#include "mc/editor/serviceproviders/ClipboardServiceProvider.h"
#include "mc/editor/services/IEditorService.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
class BlockVolumeBase;
namespace Bedrock::PubSub { class Subscription; }
namespace Editor { class EditorStructureTemplate; }
namespace Editor { class RelativeVolumeListBlockVolume; }
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
    ::ll::UntypedStorage<8, 48> mUnka57520;
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
    virtual ~ClipboardService() /*override*/;

    // vIndex: 1
    virtual ::Scripting::Result_deprecated<void> init() /*override*/;

    // vIndex: 2
    virtual ::Scripting::Result_deprecated<void> ready() /*override*/;

    // vIndex: 3
    virtual ::Scripting::Result_deprecated<void> quit() /*override*/;

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

    // vIndex: 7
    virtual ::Scripting::Result_deprecated<void>
    readFromWorld(::mce::UUID const& itemId, ::Editor::RelativeVolumeListBlockVolume const& volume) /*override*/;

    // vIndex: 6
    virtual ::Scripting::Result_deprecated<void>
    readFromWorld(::mce::UUID const& itemId, ::BlockVolumeBase const& volume) /*override*/;

    // vIndex: 8
    virtual ::Scripting::Result_deprecated<void> readFromEditorStructure(
        ::mce::UUID const&                       itemId,
        ::Editor::EditorStructureTemplate const& editorStructure
    ) /*override*/;

    // vIndex: 9
    virtual ::Scripting::Result_deprecated<bool> writeToWorld(
        ::mce::UUID const&                               itemId,
        ::BlockPos const&                                position,
        ::Editor::Services::ClipboardWriteOptions const* options
    ) const /*override*/;

    // vIndex: 10
    virtual ::Scripting::Result_deprecated<::Editor::RelativeVolumeListBlockVolume> getPredictedWriteVolume(
        ::mce::UUID const&                               itemId,
        ::BlockPos const&                                position,
        ::Editor::Services::ClipboardWriteOptions const* options
    ) const /*override*/;

    // vIndex: 11
    virtual ::Scripting::Result_deprecated<void> clear(::mce::UUID const& itemId) /*override*/;

    // vIndex: 12
    virtual bool isEmpty(::mce::UUID const& itemId) const /*override*/;

    // vIndex: 13
    virtual ::BlockPos getSize(::mce::UUID const& itemId) const /*override*/;

    // vIndex: 14
    virtual ::Bedrock::PubSub::Subscription
    listenForClipboardItemChanges(::std::function<void(::mce::UUID const&, bool)> callback) /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void _updateClient(::Editor::Services::ClipboardItem const& item) const;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::Scripting::Result_deprecated<void> $init();

    MCNAPI ::Scripting::Result_deprecated<void> $ready();

    MCNAPI ::Scripting::Result_deprecated<void> $quit();

    MCNAPI ::std::string_view $getServiceName() const;

    MCNAPI ::mce::UUID const& $getPrimaryItemId();

    MCNAPI ::mce::UUID const& $create();

    MCNAPI bool $destroy(::mce::UUID const& id);

    MCNAPI void $setPrimaryItem(::mce::UUID const& id);

    MCNAPI ::Editor::Services::ClipboardItem* $getPrimaryItem();

    MCNAPI ::Scripting::Result_deprecated<void>
    $readFromWorld(::mce::UUID const& itemId, ::Editor::RelativeVolumeListBlockVolume const& volume);

    MCNAPI ::Scripting::Result_deprecated<void>
    $readFromWorld(::mce::UUID const& itemId, ::BlockVolumeBase const& volume);

    MCNAPI ::Scripting::Result_deprecated<void>
    $readFromEditorStructure(::mce::UUID const& itemId, ::Editor::EditorStructureTemplate const& editorStructure);

    MCNAPI ::Scripting::Result_deprecated<bool> $writeToWorld(
        ::mce::UUID const&                               itemId,
        ::BlockPos const&                                position,
        ::Editor::Services::ClipboardWriteOptions const* options
    ) const;

    MCNAPI ::Scripting::Result_deprecated<::Editor::RelativeVolumeListBlockVolume> $getPredictedWriteVolume(
        ::mce::UUID const&                               itemId,
        ::BlockPos const&                                position,
        ::Editor::Services::ClipboardWriteOptions const* options
    ) const;

    MCNAPI ::Scripting::Result_deprecated<void> $clear(::mce::UUID const& itemId);

    MCNAPI bool $isEmpty(::mce::UUID const& itemId) const;

    MCNAPI ::BlockPos $getSize(::mce::UUID const& itemId) const;

    MCNAPI ::Bedrock::PubSub::Subscription
    $listenForClipboardItemChanges(::std::function<void(::mce::UUID const&, bool)> callback);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftableForClipboardServiceProvider();

    MCNAPI static void** $vftableForIEditorService();
    // NOLINTEND
};

} // namespace Editor::Services
