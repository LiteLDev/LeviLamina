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
namespace Editor { class ServiceProviderCollection; }
namespace Editor::BlockUtils { class CommonBlockUtilityServiceProvider; }
// clang-format on

namespace Editor::BlockUtils {

class ServerBlockUtilityService : public ::Editor::BlockUtils::CommonBlockUtilityService,
                                  public ::Editor::BlockUtils::ServerBlockUtilityServiceProvider {
public:
    // prevent constructor by default
    ServerBlockUtilityService();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ServerBlockUtilityService() /*override*/ = default;

    virtual ::Editor::BlockUtils::CommonBlockUtilityServiceProvider& getCommonInterface() /*override*/;

    virtual void fillVolume(
        ::std::variant<
            ::BlockVolumeBase const*,
            ::CompoundBlockVolume const*,
            ::Editor::RelativeVolumeListBlockVolume const*> const volume,
        ::std::optional<::Block const*> const                     optBlock
    ) /*override*/;

    virtual ::Scripting::Result_deprecated<void> _implInit() /*override*/;

    virtual ::Scripting::Result_deprecated<void> _implReady() /*override*/;

    virtual ::Scripting::Result_deprecated<void> _implQuit() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit ServerBlockUtilityService(::Editor::ServiceProviderCollection& providers);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::Editor::ServiceProviderCollection& providers);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::Editor::BlockUtils::CommonBlockUtilityServiceProvider& $getCommonInterface();

    MCNAPI void $fillVolume(
        ::std::variant<
            ::BlockVolumeBase const*,
            ::CompoundBlockVolume const*,
            ::Editor::RelativeVolumeListBlockVolume const*> const volume,
        ::std::optional<::Block const*> const                     optBlock
    );

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

} // namespace Editor::BlockUtils
