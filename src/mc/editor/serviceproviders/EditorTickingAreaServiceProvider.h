#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/runtime/Result.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
namespace Scripting { struct Error; }
// clang-format on

namespace Editor::Services {

class EditorTickingAreaServiceProvider {
public:
    // prevent constructor by default
    EditorTickingAreaServiceProvider& operator=(EditorTickingAreaServiceProvider const&);
    EditorTickingAreaServiceProvider(EditorTickingAreaServiceProvider const&);
    EditorTickingAreaServiceProvider();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~EditorTickingAreaServiceProvider();

    // vIndex: 1
    virtual ::Scripting::Result<bool, ::Scripting::Error>
    requestTickingArea(::std::string const&, ::BlockPos const&, ::BlockPos const&) = 0;

    // vIndex: 2
    virtual ::Scripting::Result<bool, ::Scripting::Error> releaseTickingArea(::std::string const&) = 0;

    // vIndex: 3
    virtual ::Scripting::Result<bool, ::Scripting::Error> isTickingAreaActive(::std::string const&) = 0;

    // vIndex: 4
    virtual ::Scripting::Result<bool, ::Scripting::Error> purgeTickingAreas(::std::string const&) = 0;
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
