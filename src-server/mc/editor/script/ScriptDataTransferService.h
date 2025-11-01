#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/scripting/lifetime_registry/StrongTypedObjectHandle.h"
#include "mc/deps/scripting/lifetime_registry/WeakHandleFromThis.h"
#include "mc/deps/scripting/runtime/Result_deprecated.h"
#include "mc/deps/scripting/script_engine/Promise.h"

// auto generated forward declare list
// clang-format off
namespace Editor::ScriptModule { class ScriptTransferCollectionNameData; }
namespace Editor::ScriptModule { class ScriptTransferServiceDataResponse; }
namespace Scripting { class ScriptObjectFactory; }
namespace Scripting { struct ClassBinding; }
namespace Scripting { struct Error; }
// clang-format on

namespace Editor::ScriptModule {

class ScriptDataTransferService
: public ::Scripting::WeakHandleFromThis<::Editor::ScriptModule::ScriptDataTransferService> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnk9261c5;
    ::ll::UntypedStorage<8, 8>  mUnkdc66d5;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptDataTransferService& operator=(ScriptDataTransferService const&);
    ScriptDataTransferService(ScriptDataTransferService const&);
    ScriptDataTransferService();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::Scripting::Result_deprecated<void> _closeSession(::std::string const& collectionName);

    MCNAPI ::Scripting::Result_deprecated<::std::vector<::Editor::ScriptModule::ScriptTransferCollectionNameData>>
    _getRegisteredAccessors();

    MCNAPI ::Scripting::Result_deprecated<void> _openSession(::std::string const& collectionName);

    MCNAPI ::Scripting::Result_deprecated<::Scripting::Promise<
        ::Scripting::StrongTypedObjectHandle<::Editor::ScriptModule::ScriptTransferServiceDataResponse>,
        ::Scripting::Error,
        void>>
    _requestData(::Scripting::ScriptObjectFactory& factory, ::std::string const& collectionName, bool useSnapshot);

    MCNAPI ::Scripting::Result_deprecated<void>
    _sendData(::std::string const& collectionName, ::std::string const& jsonData);

    MCNAPI ::Scripting::Result_deprecated<void> _sendDataToClipboard(::std::string const& jsonData);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::ClassBinding bindScript();
    // NOLINTEND
};

} // namespace Editor::ScriptModule
