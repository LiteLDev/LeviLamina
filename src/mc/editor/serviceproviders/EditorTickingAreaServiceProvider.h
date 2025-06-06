#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/scripting/runtime/Result_deprecated.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
// clang-format on

namespace Editor::Services {

class EditorTickingAreaServiceProvider {
public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~EditorTickingAreaServiceProvider() = default;

    // vIndex: 1
    virtual ::Scripting::Result_deprecated<bool>
    requestTickingArea(::std::string const&, ::BlockPos const&, ::BlockPos const&) = 0;

    // vIndex: 2
    virtual ::Scripting::Result_deprecated<bool> releaseTickingArea(::std::string const&) = 0;

    // vIndex: 3
    virtual ::Scripting::Result_deprecated<bool> isTickingAreaActive(::std::string const&) = 0;

    // vIndex: 4
    virtual ::Scripting::Result_deprecated<bool> purgeTickingAreas(::std::string const&) = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace Editor::Services
