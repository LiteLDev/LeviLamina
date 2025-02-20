#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/scripting/runtime/Result.h"
#include "mc/editor/serviceproviders/EmptySampleServiceProvider.h"
#include "mc/editor/services/IEditorService.h"

namespace Editor::Services {

class EmptySampleService : public ::Editor::Services::IEditorService,
                           public ::Editor::Services::EmptySampleServiceProvider {
public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~EmptySampleService() /*override*/ = default;

    // vIndex: 1
    virtual ::Scripting::Result<void> init() /*override*/;

    // vIndex: 3
    virtual ::Scripting::Result<void> quit() /*override*/;

    // vIndex: 4
    virtual ::std::string_view getServiceName() const /*override*/;

    // vIndex: 1
    virtual void SampleMethod() const /*override*/;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCFOLD ::Scripting::Result<void> $init();

    MCFOLD ::Scripting::Result<void> $quit();

    MCAPI ::std::string_view $getServiceName() const;

    MCFOLD void $SampleMethod() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftableForEmptySampleServiceProvider();

    MCAPI static void** $vftableForIEditorService();
    // NOLINTEND
};

} // namespace Editor::Services
