#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/editor/ServerEditorPlayerPackExportServiceProvider.h"
#include "mc/deps/core/resource/PackType.h"
#include "mc/deps/script_core/runtime/scripting/Result_deprecated.h"
#include "mc/editor/services/IEditorService.h"
#include "mc/editor/services/PayloadStoreHelper.h"

// auto generated forward declare list
// clang-format off
namespace Editor { class ServiceProviderCollection; }
namespace Editor { struct PackExportFileEntry; }
namespace Editor::Network { class PackExportWriteFilesPayload; }
// clang-format on

namespace Editor::Services {

class ServerEditorPlayerPackExportService : public ::Editor::Services::IEditorService,
                                            public ::Editor::ServerEditorPlayerPackExportServiceProvider,
                                            public ::Editor::Services::PayloadStoreHelper {
public:
    // prevent constructor by default
    ServerEditorPlayerPackExportService();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ServerEditorPlayerPackExportService() /*override*/ = default;

    virtual ::Scripting::Result_deprecated<void> init() /*override*/;

    virtual ::Scripting::Result_deprecated<void> quit() /*override*/;

    virtual ::std::string_view getServiceName() const /*override*/;

    virtual void writePackFiles(
        ::PackType                                                                        packType,
        ::std::string const&                                                              packName,
        ::std::vector<::Editor::PackExportFileEntry> const&                               filesToWrite,
        ::std::function<void(bool, ::std::string const&, ::std::optional<::std::string>)> callback
    ) /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit ServerEditorPlayerPackExportService(::Editor::ServiceProviderCollection& providers);

    MCNAPI void _onWriteFilesPayloadReceived(::Editor::Network::PackExportWriteFilesPayload const& payload);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::std::string_view const& ServiceName();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::Editor::ServiceProviderCollection& providers);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::Scripting::Result_deprecated<void> $init();

    MCNAPI ::Scripting::Result_deprecated<void> $quit();

    MCNAPI ::std::string_view $getServiceName() const;

    MCNAPI void $writePackFiles(
        ::PackType                                                                        packType,
        ::std::string const&                                                              packName,
        ::std::vector<::Editor::PackExportFileEntry> const&                               filesToWrite,
        ::std::function<void(bool, ::std::string const&, ::std::optional<::std::string>)> callback
    );


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftableForIEditorService();

    MCNAPI static void** $vftableForServerEditorPlayerPackExportServiceProvider();
    // NOLINTEND
};

} // namespace Editor::Services
