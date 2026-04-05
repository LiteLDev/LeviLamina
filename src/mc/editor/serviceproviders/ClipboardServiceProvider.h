#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/scripting/runtime/Result_deprecated.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
class BlockVolumeBase;
class Vec3;
namespace Bedrock::PubSub { class Subscription; }
namespace Editor { class EditorStructureTemplate; }
namespace Editor { class RelativeVolumeListBlockVolume; }
namespace Editor::Services { class ClipboardItem; }
namespace Editor::Services { struct ClipboardWriteOptions; }
namespace mce { class UUID; }
// clang-format on

namespace Editor::Services {

class ClipboardServiceProvider {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ClipboardServiceProvider() = default;

    virtual ::mce::UUID const& getPrimaryItemId() = 0;

    virtual ::mce::UUID const& create() = 0;

    virtual bool destroy(::mce::UUID const& id) = 0;

    virtual void setPrimaryItem(::mce::UUID const& id) = 0;

    virtual ::Editor::Services::ClipboardItem* getPrimaryItem() = 0;

    virtual ::Scripting::Result_deprecated<void>
    readFromWorld(::mce::UUID const& itemId, ::Editor::RelativeVolumeListBlockVolume const& volume) = 0;

    virtual ::Scripting::Result_deprecated<void>
    readFromWorld(::mce::UUID const& itemId, ::BlockVolumeBase const& volume) = 0;

    virtual ::Scripting::Result_deprecated<void>
    readFromEditorStructure(::mce::UUID const& itemId, ::Editor::EditorStructureTemplate const& editorStructure) = 0;

    virtual ::Scripting::Result_deprecated<bool> writeToWorld(
        ::mce::UUID const&                               itemId,
        ::BlockPos const&                                position,
        ::Editor::Services::ClipboardWriteOptions const* options
    ) const = 0;

    virtual ::Scripting::Result_deprecated<::Editor::RelativeVolumeListBlockVolume> getPredictedWriteVolume(
        ::mce::UUID const&                               itemId,
        ::BlockPos const&                                position,
        ::Editor::Services::ClipboardWriteOptions const* options
    ) const = 0;

    virtual ::Scripting::Result_deprecated<void> clear(::mce::UUID const& itemId) = 0;

    virtual bool isEmpty(::mce::UUID const& itemId) const = 0;

    virtual ::BlockPos getSize(::mce::UUID const& itemId) const = 0;

    virtual ::Vec3 const& getNormalizedOrigin(::mce::UUID const& itemId) const = 0;

    virtual ::Vec3 getOriginalWorldLocation(::mce::UUID const& itemId) const = 0;

    virtual ::Bedrock::PubSub::Subscription
    listenForClipboardItemChanges(::std::function<void(::mce::UUID const&, bool)> callback) = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace Editor::Services
