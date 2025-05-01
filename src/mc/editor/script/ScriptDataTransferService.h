#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/scripting/binding_type/ClassBindingBuilder.h"
#include "mc/deps/scripting/lifetime_registry/StrongTypedObjectHandle.h"
#include "mc/deps/scripting/lifetime_registry/WeakHandleFromThis.h"
#include "mc/deps/scripting/runtime/Result.h"
#include "mc/deps/scripting/script_engine/Promise.h"

// auto generated forward declare list
// clang-format off
namespace Editor::ScriptModule { class ScriptTransferCollectionNameData; }
namespace Editor::ScriptModule { class ScriptTransferServiceDataResponse; }
namespace Scripting { class ScriptObjectFactory; }
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
    MCNAPI ::Scripting::
        Result<::std::vector<::Editor::ScriptModule::ScriptTransferCollectionNameData>, ::Scripting::Error>
        _getRegisteredAccessors();

    MCNAPI ::Scripting::Result<
        ::Scripting::Promise<
            ::Scripting::StrongTypedObjectHandle<::Editor::ScriptModule::ScriptTransferServiceDataResponse>,
            ::Scripting::Error,
            void>,
        ::Scripting::Error>
    _requestData(::Scripting::ScriptObjectFactory& factory, ::std::string const& collectionName);

    MCNAPI ::Scripting::Result<void> _sendData(::std::string const& collectionName, ::std::string const& jsonData);

    MCNAPI ::Scripting::Result<void> _sendDataToClipboard(::std::string const& jsonData);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::ClassBindingBuilder<::Editor::ScriptModule::ScriptDataTransferService> bindScript();
    // NOLINTEND
};

} // namespace Editor::ScriptModule
