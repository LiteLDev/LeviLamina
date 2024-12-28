#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Editor { class ServiceProviderCollection; }
// clang-format on

namespace Editor {

class EditorManagerServiceProvider {
public:
    // prevent constructor by default
    EditorManagerServiceProvider& operator=(EditorManagerServiceProvider const&);
    EditorManagerServiceProvider(EditorManagerServiceProvider const&);
    EditorManagerServiceProvider();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~EditorManagerServiceProvider();

    // vIndex: 1
    virtual ::Editor::ServiceProviderCollection& getServiceProviders() = 0;
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

} // namespace Editor
