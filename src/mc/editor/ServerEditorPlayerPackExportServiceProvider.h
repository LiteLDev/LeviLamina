#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/resource/PackType.h"

// auto generated forward declare list
// clang-format off
namespace Editor { struct PackExportFileEntry; }
// clang-format on

namespace Editor {

class ServerEditorPlayerPackExportServiceProvider {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ServerEditorPlayerPackExportServiceProvider() = default;

    virtual void writePackFiles(
        ::PackType                                                                        packType,
        ::std::string const&                                                              packName,
        ::std::vector<::Editor::PackExportFileEntry> const&                               filesToWrite,
        ::std::function<void(bool, ::std::string const&, ::std::optional<::std::string>)> callback
    ) = 0;
    // NOLINTEND
};

} // namespace Editor
