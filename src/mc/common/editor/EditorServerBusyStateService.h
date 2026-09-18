#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/editor/EditorBusyStateServiceBase.h"

namespace Editor::Services {

class EditorServerBusyStateService : public ::Editor::Services::EditorBusyStateServiceBase {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ::std::string_view getServiceName() const /*override*/;

    virtual bool _writeCursor(bool shown) /*override*/;
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::std::string_view const& ServiceName();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::std::string_view $getServiceName() const;

    MCNAPI bool $_writeCursor(bool shown);


    // NOLINTEND
};

} // namespace Editor::Services
