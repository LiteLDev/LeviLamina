#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/editor/serviceproviders/EditorTickingAreaServiceProvider.h"
#include "mc/editor/services/IEditorService.h"
#include "mc/external/scripting/runtime/Result.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
namespace Editor { class ServiceProviderCollection; }
namespace Scripting { struct Error; }
// clang-format on

namespace Editor::Services {

class EditorTickingAreaService : public ::Editor::Services::IEditorService,
                                 public ::Editor::Services::EditorTickingAreaServiceProvider {
public:
    // prevent constructor by default
    EditorTickingAreaService& operator=(EditorTickingAreaService const&);
    EditorTickingAreaService(EditorTickingAreaService const&);
    EditorTickingAreaService();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~EditorTickingAreaService() /*override*/;

    // vIndex: 1
    virtual ::Scripting::Result<void> init() /*override*/;

    // vIndex: 2
    virtual ::Scripting::Result<void> ready() /*override*/;

    // vIndex: 3
    virtual ::Scripting::Result<void> quit() /*override*/;

    // vIndex: 4
    virtual ::std::string_view getServiceName() const /*override*/;

    // vIndex: 1
    virtual ::Scripting::Result<bool, ::Scripting::Error>
    requestTickingArea(::std::string const& areaIdentifier, ::BlockPos const& from, ::BlockPos const& to) /*override*/;

    // vIndex: 2
    virtual ::Scripting::Result<bool, ::Scripting::Error> releaseTickingArea(::std::string const& areaIdentifier
    ) /*override*/;

    // vIndex: 3
    virtual ::Scripting::Result<bool, ::Scripting::Error> isTickingAreaActive(::std::string const& areaIdentifier
    ) /*override*/;

    // vIndex: 4
    virtual ::Scripting::Result<bool, ::Scripting::Error> purgeTickingAreas(::std::string const& areaIdentifierPrefix
    ) /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit EditorTickingAreaService(::Editor::ServiceProviderCollection& providers);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::Editor::ServiceProviderCollection& providers);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::Scripting::Result<void> $init();

    MCAPI ::Scripting::Result<void> $ready();

    MCAPI ::Scripting::Result<void> $quit();

    MCAPI ::std::string_view $getServiceName() const;

    MCAPI ::Scripting::Result<bool, ::Scripting::Error>
    $requestTickingArea(::std::string const& areaIdentifier, ::BlockPos const& from, ::BlockPos const& to);

    MCAPI ::Scripting::Result<bool, ::Scripting::Error> $releaseTickingArea(::std::string const& areaIdentifier);

    MCAPI ::Scripting::Result<bool, ::Scripting::Error> $isTickingAreaActive(::std::string const& areaIdentifier);

    MCAPI ::Scripting::Result<bool, ::Scripting::Error> $purgeTickingAreas(::std::string const& areaIdentifierPrefix);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftableForIEditorService();

    MCAPI static void** $vftableForEditorTickingAreaServiceProvider();
    // NOLINTEND
};

} // namespace Editor::Services
