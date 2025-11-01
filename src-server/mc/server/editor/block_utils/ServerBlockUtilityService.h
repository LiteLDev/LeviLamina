#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/scripting/runtime/Result_deprecated.h"
#include "mc/editor/block_utils/CommonBlockUtilityService.h"
#include "mc/editor/script/ServerBlockUtilityServiceProvider.h"

// auto generated forward declare list
// clang-format off
class Block;
class BlockVolumeBase;
class CompoundBlockVolume;
namespace Editor { class RelativeVolumeListBlockVolume; }
namespace Editor::BlockUtils { class CommonBlockUtilityServiceProvider; }
// clang-format on

namespace Editor::BlockUtils {

class ServerBlockUtilityService : public ::Editor::BlockUtils::CommonBlockUtilityService, public ::Editor::BlockUtils::ServerBlockUtilityServiceProvider {
public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ServerBlockUtilityService() /*override*/ = default;

    // vIndex: 1
    virtual ::Editor::BlockUtils::CommonBlockUtilityServiceProvider& getCommonInterface() /*override*/;

    // vIndex: 2
    virtual void fillVolume(::std::variant<::BlockVolumeBase const*, ::CompoundBlockVolume const*, ::Editor::RelativeVolumeListBlockVolume const*> const volume, ::std::optional<::Block const*> const optBlock) /*override*/;

    // vIndex: 7
    virtual ::Scripting::Result_deprecated<void> _implInit() /*override*/;

    // vIndex: 8
    virtual ::Scripting::Result_deprecated<void> _implReady() /*override*/;

    // vIndex: 9
    virtual ::Scripting::Result_deprecated<void> _implQuit() /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::Editor::BlockUtils::CommonBlockUtilityServiceProvider& $getCommonInterface();

    MCNAPI void $fillVolume(::std::variant<::BlockVolumeBase const*, ::CompoundBlockVolume const*, ::Editor::RelativeVolumeListBlockVolume const*> const volume, ::std::optional<::Block const*> const optBlock);

    MCNAPI ::Scripting::Result_deprecated<void> $_implInit();

    MCNAPI ::Scripting::Result_deprecated<void> $_implReady();

    MCNAPI ::Scripting::Result_deprecated<void> $_implQuit();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();

    MCNAPI static void** $vftableForCommonBlockUtilityServiceProvider();

    MCNAPI static void** $vftableForIEditorService();
    // NOLINTEND

};

}
