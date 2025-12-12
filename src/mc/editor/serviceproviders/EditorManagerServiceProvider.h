#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Editor { class ServiceProviderCollection; }
// clang-format on

namespace Editor {

class EditorManagerServiceProvider {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~EditorManagerServiceProvider() = default;

    virtual ::Editor::ServiceProviderCollection& getServiceProviders() = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace Editor
