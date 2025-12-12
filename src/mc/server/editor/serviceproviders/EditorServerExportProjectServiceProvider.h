#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/file/PathBuffer.h"
#include "mc/deps/core/string/BasicStackString.h"

namespace Editor::Services {

class EditorServerExportProjectServiceProvider {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~EditorServerExportProjectServiceProvider() = default;

    virtual void addPreTaskFilePathCallBack(
        ::std::function<::std::function<void(::Core::PathBuffer<::Core::BasicStackString<char, 1024>> const&)>()>
    ) = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace Editor::Services
