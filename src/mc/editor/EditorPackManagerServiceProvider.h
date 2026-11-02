#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/resource/PackType.h"
#include "mc/deps/script_core/runtime/scripting/Result_deprecated.h"

// auto generated forward declare list
// clang-format off
namespace Core { class Path; }
// clang-format on

namespace Editor {

class EditorPackManagerServiceProvider {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~EditorPackManagerServiceProvider() = default;

    virtual ::Scripting::Result_deprecated<::std::vector<::std::string>>
    getAvailablePackNames(::PackType const& packType) const = 0;

    virtual ::Scripting::Result_deprecated<bool>
    packExists(::PackType const& packType, ::std::string const& name) const = 0;

    virtual ::Scripting::Result_deprecated<void>
    createPack(::PackType const& packType, ::std::string const& name, ::std::string const& packDescription) = 0;

    virtual ::Scripting::Result_deprecated<::std::string>
    getPackPath(::PackType const& packType, ::std::string const& name) const = 0;

    virtual ::Scripting::Result_deprecated<void> writePackFile(
        ::PackType const&    packType,
        ::std::string const& name,
        ::Core::Path const&  relativeFilePath,
        ::std::string const& content
    ) = 0;

    virtual ::Scripting::Result_deprecated<void> writePackFiles(
        ::PackType const&                                              packType,
        ::std::string const&                                           name,
        ::std::vector<::std::pair<::Core::Path, ::std::string>> const& filesToWrite
    ) = 0;

    virtual ::Scripting::Result_deprecated<::std::string>
    readPackFile(::PackType const& packType, ::std::string const& name, ::Core::Path const& relativeFilePath) const = 0;

    virtual ::Scripting::Result_deprecated<void>
    deletePackFile(::PackType const& packType, ::std::string const& name, ::Core::Path const& relativeFilePath) = 0;

    virtual ::Scripting::Result_deprecated<bool> packFileExists(
        ::PackType const&    packType,
        ::std::string const& name,
        ::Core::Path const&  relativeFilePath
    ) const = 0;

    virtual ::Scripting::Result_deprecated<::std::vector<::Core::Path>> listPackFiles(
        ::PackType const&    packType,
        ::std::string const& name,
        ::Core::Path const&  relativeDirectory
    ) const = 0;
    // NOLINTEND
};

} // namespace Editor
