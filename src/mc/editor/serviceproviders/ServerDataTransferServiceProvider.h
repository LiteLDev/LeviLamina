#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/scripting/runtime/Result_deprecated.h"

// auto generated forward declare list
// clang-format off
class HashedString;
namespace Editor::ScriptModule { class ScriptTransferCollectionNameData; }
// clang-format on

namespace Editor::Services {

class ServerDataTransferServiceProvider {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ServerDataTransferServiceProvider() = default;

    virtual void requestBiomeConfigs(
        ::std::string const&,
        ::std::function<void(
            ::std::string const&,
            ::std::string const&,
            ::std::string const&,
            ::std::string const&,
            ::std::string const&,
            ::std::string const&
        )> const&
    ) = 0;

    virtual void requestData(
        ::std::string const&,
        ::std::function<void(bool, ::std::string const&, ::std::string const&, ::std::string const&)> const&,
        ::std::string const&,
        bool
    ) = 0;

    virtual void requestIdentifiersForCollection(
        ::std::string const&,
        ::std::function<void(
            ::std::string const&,
            ::std::vector<::HashedString> const&,
            bool,
            ::std::optional<::std::string>
        )> const&
    ) = 0;

    virtual ::Scripting::Result_deprecated<::std::string const> requestSchema(::std::string const&) = 0;

    virtual void createNewSetting(
        ::std::string const&,
        ::std::string const&,
        ::std::string const&,
        bool,
        ::std::function<void(bool, ::std::string const&, ::std::string const&, ::std::optional<::std::string>)> const&
    ) = 0;

    virtual ::Scripting::Result_deprecated<void>
    changeBiomeMapping(::std::string const&, ::std::string const&, ::std::string const&) = 0;

    virtual ::Scripting::Result_deprecated<void>
    sendData(::std::string const&, ::std::string const&, ::std::string const&, bool) = 0;

    virtual ::Scripting::Result_deprecated<void> sendDataToClipboard(::std::string const&) = 0;

    virtual ::std::vector<::Editor::ScriptModule::ScriptTransferCollectionNameData>
    getRegisteredCollections() const = 0;

    virtual ::Scripting::Result_deprecated<void> openSession(::std::string const&) = 0;

    virtual ::Scripting::Result_deprecated<void> closeSession(::std::string const&) = 0;

    virtual bool isDeferredExperimentEnabled() const = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace Editor::Services
