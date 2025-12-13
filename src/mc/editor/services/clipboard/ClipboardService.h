#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/scripting/runtime/Result_deprecated.h"
#include "mc/editor/serviceproviders/ClipboardServiceProvider.h"
#include "mc/editor/services/IEditorService.h"
#include "mc/server/editor/services/structures/IStructureDataProvider.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
class BlockVolumeBase;
class StructureTemplate;
class Vec3;
namespace Bedrock::PubSub { class Subscription; }
namespace Editor { class EditorStructureTemplate; }
namespace Editor { class RelativeVolumeListBlockVolume; }
namespace Editor { class ServiceProviderCollection; }
namespace Editor::Services { class ClipboardItem; }
namespace Editor::Services { struct ClipboardWriteOptions; }
namespace mce { class UUID; }
// clang-format on

namespace Editor::Services {

class ClipboardService : public ::Editor::Services::IEditorService,
                         public ::Editor::Services::ClipboardServiceProvider,
                         public ::Editor::StructureDataCache::IStructureDataProvider {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnk77bff1;
    ::ll::UntypedStorage<8, 24> mUnk1b2191;
    ::ll::UntypedStorage<8, 48> mUnka57520;
    ::ll::UntypedStorage<8, 16> mUnk71522b;
    // NOLINTEND

public:
    // prevent constructor by default
    ClipboardService& operator=(ClipboardService const&);
    ClipboardService(ClipboardService const&);
    ClipboardService();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ClipboardService() /*override*/;

    virtual ::Scripting::Result_deprecated<void> init() /*override*/;

    virtual ::Scripting::Result_deprecated<void> ready() /*override*/;

    virtual ::Scripting::Result_deprecated<void> quit() /*override*/;

    virtual ::std::string_view getServiceName() const /*override*/;

    virtual ::mce::UUID const& getPrimaryItemId() /*override*/;

    virtual ::mce::UUID const& create() /*override*/;

    virtual bool destroy(::mce::UUID const& id) /*override*/;

    virtual void setPrimaryItem(::mce::UUID const& id) /*override*/;

    virtual ::Editor::Services::ClipboardItem* getPrimaryItem() /*override*/;

    virtual ::Scripting::Result_deprecated<void>
    readFromWorld(::mce::UUID const& itemId, ::Editor::RelativeVolumeListBlockVolume const& volume) /*override*/;

    virtual ::Scripting::Result_deprecated<void>
    readFromWorld(::mce::UUID const& itemId, ::BlockVolumeBase const& volume) /*override*/;

    virtual ::Scripting::Result_deprecated<void> readFromEditorStructure(
        ::mce::UUID const&                       itemId,
        ::Editor::EditorStructureTemplate const& editorStructure
    ) /*override*/;

    virtual ::Scripting::Result_deprecated<bool> writeToWorld(
        ::mce::UUID const&                               itemId,
        ::BlockPos const&                                position,
        ::Editor::Services::ClipboardWriteOptions const* options
    ) const /*override*/;

    virtual ::Scripting::Result_deprecated<::Editor::RelativeVolumeListBlockVolume> getPredictedWriteVolume(
        ::mce::UUID const&                               itemId,
        ::BlockPos const&                                position,
        ::Editor::Services::ClipboardWriteOptions const* options
    ) const /*override*/;

    virtual ::Scripting::Result_deprecated<void> clear(::mce::UUID const& itemId) /*override*/;

    virtual bool isEmpty(::mce::UUID const& itemId) const /*override*/;

    virtual ::BlockPos getSize(::mce::UUID const& itemId) const /*override*/;

    virtual ::Vec3 const& getNormalizedOrigin(::mce::UUID const& itemId) const /*override*/;

    virtual ::Vec3 getOriginalWorldLocation(::mce::UUID const& itemId) const /*override*/;

    virtual ::Bedrock::PubSub::Subscription
    listenForClipboardItemChanges(::std::function<void(::mce::UUID const&, bool)> callback) /*override*/;

    virtual bool hasStructureData(::mce::UUID const& id) const /*override*/;

    virtual ::Scripting::Result_deprecated<::std::variant<
        ::StructureTemplate const*,
        ::Editor::EditorStructureTemplate const*,
        ::std::shared_ptr<::StructureTemplate const>,
        ::std::shared_ptr<::Editor::EditorStructureTemplate const>>>
    getStructureData(::mce::UUID const& id) const /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit ClipboardService(::Editor::ServiceProviderCollection& providers);

    MCNAPI void _onItemChanged(::Editor::Services::ClipboardItem const& item) const;
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::Editor::ServiceProviderCollection& providers);
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

    MCNAPI ::Vec3 const& $getNormalizedOrigin(::mce::UUID const& itemId) const;

    MCNAPI ::Vec3 $getOriginalWorldLocation(::mce::UUID const& itemId) const;

    MCNAPI ::Bedrock::PubSub::Subscription
    $listenForClipboardItemChanges(::std::function<void(::mce::UUID const&, bool)> callback);

    MCNAPI bool $hasStructureData(::mce::UUID const& id) const;

    MCNAPI ::Scripting::Result_deprecated<::std::variant<
        ::StructureTemplate const*,
        ::Editor::EditorStructureTemplate const*,
        ::std::shared_ptr<::StructureTemplate const>,
        ::std::shared_ptr<::Editor::EditorStructureTemplate const>>>
    $getStructureData(::mce::UUID const& id) const;


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftableForClipboardServiceProvider();

    MCNAPI static void** $vftableForIEditorService();

    MCNAPI static void** $vftableForIStructureDataProvider();
    // NOLINTEND
};

} // namespace Editor::Services
