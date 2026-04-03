#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/scripting/lifetime_registry/StrongTypedObjectHandle.h"
#include "mc/deps/scripting/lifetime_registry/WeakHandleFromThis.h"
#include "mc/deps/scripting/runtime/Result_deprecated.h"
#include "mc/deps/scripting/script_engine/Promise.h"

// auto generated forward declare list
// clang-format off
namespace Editor::ScriptModule { class ScriptTransferBiomeConfigurationData; }
namespace Editor::ScriptModule { class ScriptTransferCollectionNameData; }
namespace Editor::ScriptModule { class ScriptTransferServiceCollectionSettingsIdentifiersDataResponse; }
namespace Editor::ScriptModule { class ScriptTransferServiceCreateSettingResponse; }
namespace Editor::ScriptModule { class ScriptTransferServiceDataResponse; }
namespace Editor::ScriptModule { class ScriptTransferServiceRequestDataOptions; }
namespace Editor::ScriptModule { class ScriptTransferServiceSendDataOptions; }
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
    MCNAPI ::Scripting::Result_deprecated<void> _changeBiomeMapping(
        ::std::string const& biomeIdentifier,
        ::std::string const& collectionName,
        ::std::string const& identifier
    );

    MCNAPI ::Scripting::Result_deprecated<void> _closeSession(::std::string const& collectionName);

    MCNAPI ::Scripting::Result_deprecated<::Scripting::Promise<
        ::Scripting::StrongTypedObjectHandle<::Editor::ScriptModule::ScriptTransferServiceCreateSettingResponse>,
        ::Scripting::Error>>
    _createSetting(
        ::Scripting::ScriptObjectFactory& factory,
        ::std::string const&              collectionName,
        ::std::string const&              identifier,
        ::std::string const&              jsonData,
        bool                              lockToBiome
    );

    MCNAPI ::Scripting::Result_deprecated<::std::vector<::Editor::ScriptModule::ScriptTransferCollectionNameData>>
    _getRegisteredAccessors();

    MCNAPI ::Scripting::Result_deprecated<bool> _isDeferredExperimentEnabled() const;

    MCNAPI ::Scripting::Result_deprecated<void> _openSession(::std::string const& collectionName);

    MCNAPI ::Scripting::Result_deprecated<::Scripting::Promise<
        ::Scripting::StrongTypedObjectHandle<::Editor::ScriptModule::ScriptTransferBiomeConfigurationData>,
        ::Scripting::Error>>
    _requestBiomeConfig(::Scripting::ScriptObjectFactory& factory, ::std::string const& biomeIdentifier);

    MCNAPI ::Scripting::Result_deprecated<::Scripting::Promise<
        ::Scripting::StrongTypedObjectHandle<
            ::Editor::ScriptModule::ScriptTransferServiceCollectionSettingsIdentifiersDataResponse>,
        ::Scripting::Error>>
    _requestCollectionIdentifiers(::Scripting::ScriptObjectFactory& factory, ::std::string const& collectionName);

    MCNAPI ::Scripting::Result_deprecated<::Scripting::Promise<
        ::Scripting::StrongTypedObjectHandle<::Editor::ScriptModule::ScriptTransferServiceDataResponse>,
        ::Scripting::Error>>
    _requestData(
        ::Scripting::ScriptObjectFactory&                                                factory,
        ::std::string const&                                                             collectionName,
        ::std::optional<::Editor::ScriptModule::ScriptTransferServiceRequestDataOptions> mRequestDataOptions
    );

    MCNAPI ::Scripting::Result_deprecated<void> _sendData(
        ::std::string const&                                                          collectionName,
        ::std::string const&                                                          jsonData,
        ::std::optional<::Editor::ScriptModule::ScriptTransferServiceSendDataOptions> options
    );

    MCNAPI ::Scripting::Result_deprecated<void> _sendDataToClipboard(::std::string const& jsonData);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::ClassBinding bindScript();
    // NOLINTEND
};

} // namespace Editor::ScriptModule
