#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/scripting/runtime/Result_deprecated.h"

// auto generated forward declare list
// clang-format off
namespace Editor::ScriptModule { class ScriptTransferCollectionNameData; }
// clang-format on

namespace Editor::Services {

class ServerDataTransferServiceProvider {
public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ServerDataTransferServiceProvider() = default;

    // vIndex: 1
    virtual void requestData(
        ::std::string const&,
        ::std::function<void(bool, ::std::string const&, ::std::string const&, ::std::string const&)> const&
    ) = 0;

    // vIndex: 2
    virtual ::Scripting::Result_deprecated<::std::string const> requestSchema(::std::string const&) = 0;

    // vIndex: 3
    virtual ::Scripting::Result_deprecated<void> sendData(::std::string const&, ::std::string const&) = 0;

    // vIndex: 4
    virtual ::Scripting::Result_deprecated<void> sendDataToClipboard(::std::string const&) = 0;

    // vIndex: 5
    virtual ::std::vector<::Editor::ScriptModule::ScriptTransferCollectionNameData>
    getRegisteredCollections() const = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace Editor::Services
