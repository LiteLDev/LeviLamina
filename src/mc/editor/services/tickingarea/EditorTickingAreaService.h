#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/scripting/runtime/Result_deprecated.h"
#include "mc/editor/serviceproviders/EditorTickingAreaServiceProvider.h"
#include "mc/editor/services/IEditorService.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
// clang-format on

namespace Editor::Services {

class EditorTickingAreaService : public ::Editor::Services::IEditorService,
                                 public ::Editor::Services::EditorTickingAreaServiceProvider {
public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~EditorTickingAreaService() /*override*/ = default;

    // vIndex: 1
    virtual ::Scripting::Result_deprecated<void> init() /*override*/;

    // vIndex: 2
    virtual ::Scripting::Result_deprecated<void> ready() /*override*/;

    // vIndex: 3
    virtual ::Scripting::Result_deprecated<void> quit() /*override*/;

    // vIndex: 4
    virtual ::std::string_view getServiceName() const /*override*/;

    // vIndex: 1
    virtual ::Scripting::Result_deprecated<bool>
    requestTickingArea(::std::string const& areaIdentifier, ::BlockPos const& from, ::BlockPos const& to) /*override*/;

    // vIndex: 2
    virtual ::Scripting::Result_deprecated<bool> releaseTickingArea(::std::string const& areaIdentifier) /*override*/;

    // vIndex: 3
    virtual ::Scripting::Result_deprecated<bool> isTickingAreaActive(::std::string const& areaIdentifier) /*override*/;

    // vIndex: 4
    virtual ::Scripting::Result_deprecated<bool>
    purgeTickingAreas(::std::string const& areaIdentifierPrefix) /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::Scripting::Result_deprecated<void> $init();

    MCNAPI ::Scripting::Result_deprecated<void> $ready();

    MCNAPI ::Scripting::Result_deprecated<void> $quit();

    MCNAPI ::std::string_view $getServiceName() const;

    MCNAPI ::Scripting::Result_deprecated<bool>
    $requestTickingArea(::std::string const& areaIdentifier, ::BlockPos const& from, ::BlockPos const& to);

    MCNAPI ::Scripting::Result_deprecated<bool> $releaseTickingArea(::std::string const& areaIdentifier);

    MCNAPI ::Scripting::Result_deprecated<bool> $isTickingAreaActive(::std::string const& areaIdentifier);

    MCNAPI ::Scripting::Result_deprecated<bool> $purgeTickingAreas(::std::string const& areaIdentifierPrefix);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftableForIEditorService();

    MCNAPI static void** $vftableForEditorTickingAreaServiceProvider();
    // NOLINTEND
};

} // namespace Editor::Services
