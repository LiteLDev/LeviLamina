#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/scripting/runtime/Result_deprecated.h"
#include "mc/editor/serviceproviders/EmptySampleServiceProvider.h"
#include "mc/editor/services/IEditorService.h"

namespace Editor::Services {

class EmptySampleService : public ::Editor::Services::IEditorService,
                           public ::Editor::Services::EmptySampleServiceProvider {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~EmptySampleService() /*override*/ = default;

    virtual ::Scripting::Result_deprecated<void> init() /*override*/;

    virtual ::Scripting::Result_deprecated<void> quit() /*override*/;

    virtual ::std::string_view getServiceName() const /*override*/;

    virtual void SampleMethod() const /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::Scripting::Result_deprecated<void> $init();

    MCNAPI ::Scripting::Result_deprecated<void> $quit();

    MCNAPI ::std::string_view $getServiceName() const;

    MCNAPI void $SampleMethod() const;


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftableForEmptySampleServiceProvider();

    MCNAPI static void** $vftableForIEditorService();
    // NOLINTEND
};

} // namespace Editor::Services
