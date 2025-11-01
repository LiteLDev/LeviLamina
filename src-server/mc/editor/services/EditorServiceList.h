#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/scripting/runtime/Result_deprecated.h"

// auto generated forward declare list
// clang-format off
namespace Editor { class ServiceProviderCollection; }
namespace Editor::Services { class IEditorService; }
// clang-format on

namespace Editor::Services {

class EditorServiceList {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnk55e0ee;
    // NOLINTEND

public:
    // prevent constructor by default
    EditorServiceList& operator=(EditorServiceList const&);
    EditorServiceList(EditorServiceList const&);
    EditorServiceList();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~EditorServiceList();

    // vIndex: 1
    virtual ::Editor::ServiceProviderCollection& getServiceProviders() = 0;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::Scripting::Result_deprecated<void> _destroyServices();

    MCNAPI ::Editor::Services::IEditorService* _findService(::std::string const& serviceName) const;

    MCNAPI ::Scripting::Result_deprecated<void> _initServices();

    MCNAPI ::Scripting::Result_deprecated<void> _readyServices();

    MCNAPI ::Scripting::Result_deprecated<void> _registerAndInitServiceList(::std::vector<::std::unique_ptr<::Editor::Services::IEditorService>> serviceList);

    MCNAPI ::Scripting::Result_deprecated<::Editor::Services::IEditorService*> _registerService(::std::unique_ptr<::Editor::Services::IEditorService> servicePtr);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND

};

}
