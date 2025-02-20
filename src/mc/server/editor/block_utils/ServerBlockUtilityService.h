#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/scripting/runtime/Result.h"
#include "mc/editor/block_utils/CommonBlockUtilityService.h"
#include "mc/editor/script/ServerBlockUtilityServiceProvider.h"

// auto generated forward declare list
// clang-format off
class Block;
class BlockVolumeBase;
class CompoundBlockVolume;
namespace Editor::BlockUtils { class CommonBlockUtilityServiceProvider; }
// clang-format on

namespace Editor::BlockUtils {

class ServerBlockUtilityService : public ::Editor::BlockUtils::CommonBlockUtilityService,
                                  public ::Editor::BlockUtils::ServerBlockUtilityServiceProvider {
public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ServerBlockUtilityService() /*override*/ = default;

    // vIndex: 1
    virtual ::Editor::BlockUtils::CommonBlockUtilityServiceProvider& getCommonInterface() /*override*/;

    // vIndex: 2
    virtual void fillVolume(
        ::std::variant<::BlockVolumeBase const*, ::CompoundBlockVolume const*> const volume,
        ::std::optional<::Block const*> const                                        optBlock
    ) /*override*/;

    // vIndex: 7
    virtual ::Scripting::Result<void> _implInit() /*override*/;

    // vIndex: 8
    virtual ::Scripting::Result<void> _implReady() /*override*/;

    // vIndex: 9
    virtual ::Scripting::Result<void> _implQuit() /*override*/;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::Editor::BlockUtils::CommonBlockUtilityServiceProvider& $getCommonInterface();

    MCAPI void $fillVolume(
        ::std::variant<::BlockVolumeBase const*, ::CompoundBlockVolume const*> const volume,
        ::std::optional<::Block const*> const                                        optBlock
    );

    MCFOLD ::Scripting::Result<void> $_implInit();

    MCFOLD ::Scripting::Result<void> $_implReady();

    MCFOLD ::Scripting::Result<void> $_implQuit();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();

    MCAPI static void** $vftableForCommonBlockUtilityServiceProvider();

    MCAPI static void** $vftableForIEditorService();
    // NOLINTEND
};

} // namespace Editor::BlockUtils
