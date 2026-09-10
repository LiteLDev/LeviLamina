#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/editor/EditorPackManagerServiceProvider.h"
#include "mc/deps/core/file/PathBuffer.h"
#include "mc/deps/core/resource/PackOrigin.h"
#include "mc/deps/core/resource/PackType.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/script_core/runtime/scripting/Result_deprecated.h"
#include "mc/editor/services/IEditorService.h"

// auto generated forward declare list
// clang-format off
class IContentKeyProvider;
class IPackIOProvider;
class IPackManifestFactory;
class PackSourceReport;
namespace Core { class Path; }
namespace Editor { class ServiceProviderCollection; }
// clang-format on

namespace Editor::Services {

class EditorPackManagerService : public ::Editor::Services::IEditorService,
                                 public ::Editor::EditorPackManagerServiceProvider {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 64> mUnk2c2745;
    ::ll::UntypedStorage<8, 8>  mUnk87b3c3;
    ::ll::UntypedStorage<8, 24> mUnk483d60;
    ::ll::UntypedStorage<8, 8>  mUnk1c5f19;
    ::ll::UntypedStorage<8, 8>  mUnka7569c;
    // NOLINTEND

public:
    // prevent constructor by default
    EditorPackManagerService& operator=(EditorPackManagerService const&);
    EditorPackManagerService(EditorPackManagerService const&);
    EditorPackManagerService();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~EditorPackManagerService() /*override*/ = default;

    virtual ::Scripting::Result_deprecated<void> init() /*override*/;

    virtual ::Scripting::Result_deprecated<void> ready() /*override*/;

    virtual ::Scripting::Result_deprecated<void> quit() /*override*/;

    virtual ::std::string_view getServiceName() const /*override*/;

    virtual ::Scripting::Result_deprecated<::std::vector<::std::string>>
    getAvailablePackNames(::PackType const& packType) const /*override*/;

    virtual ::Scripting::Result_deprecated<bool> packExists(::PackType const& packType, ::std::string const& name) const
        /*override*/;

    virtual ::Scripting::Result_deprecated<void> createPack(
        ::PackType const&    packType,
        ::std::string const& name,
        ::std::string const& packDescription
    ) /*override*/;

    virtual ::Scripting::Result_deprecated<::std::string>
    getPackPath(::PackType const& packType, ::std::string const& name) const /*override*/;

    virtual ::Scripting::Result_deprecated<void> writePackFile(
        ::PackType const&    packType,
        ::std::string const& name,
        ::Core::Path const&  relativeFilePath,
        ::std::string const& content
    ) /*override*/;

    virtual ::Scripting::Result_deprecated<void> writePackFiles(
        ::PackType const&                                              packType,
        ::std::string const&                                           name,
        ::std::vector<::std::pair<::Core::Path, ::std::string>> const& filesToWrite
    ) /*override*/;

    virtual ::Scripting::Result_deprecated<::std::string>
    readPackFile(::PackType const& packType, ::std::string const& name, ::Core::Path const& relativeFilePath) const
        /*override*/;

    virtual ::Scripting::Result_deprecated<void> deletePackFile(
        ::PackType const&    packType,
        ::std::string const& name,
        ::Core::Path const&  relativeFilePath
    ) /*override*/;

    virtual ::Scripting::Result_deprecated<bool>
    packFileExists(::PackType const& packType, ::std::string const& name, ::Core::Path const& relativeFilePath) const
        /*override*/;

    virtual ::Scripting::Result_deprecated<::std::vector<::Core::Path>>
    listPackFiles(::PackType const& packType, ::std::string const& name, ::Core::Path const& relativeDirectory) const
        /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI EditorPackManagerService(
        ::Editor::ServiceProviderCollection&                    providers,
        ::IPackManifestFactory&                                 manifestFactory,
        ::Bedrock::NonOwnerPointer<::IContentKeyProvider const> keyProvider,
        ::std::unique_ptr<::IPackIOProvider>                    ioProvider
    );

    MCNAPI ::Scripting::Result_deprecated<void> _createEditorPackSource(
        ::Core::Path const& path,
        ::PackType          packType,
        ::PackOrigin        packOrigin,
        bool                isDeveloperDirectory
    );

    MCNAPI ::Scripting::Result_deprecated<::std::string>
    _ensurePack(::PackType const& packType, ::std::string const& name, ::std::string const& packDescription);

    MCNAPI ::std::string _formatPackErrors(::PackSourceReport const& report) const;

    MCNAPI ::Scripting::Result_deprecated<::Core::PathBuffer<::std::string>>
    _resolvePackPath(::PackType const& packType, ::std::string const& name) const;

    MCNAPI ::Scripting::Result_deprecated<void> addPackToSource(::PackType const& packType, ::std::string const& name);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
        ::Editor::ServiceProviderCollection&                    providers,
        ::IPackManifestFactory&                                 manifestFactory,
        ::Bedrock::NonOwnerPointer<::IContentKeyProvider const> keyProvider,
        ::std::unique_ptr<::IPackIOProvider>                    ioProvider
    );
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::Scripting::Result_deprecated<void> $init();

    MCNAPI ::Scripting::Result_deprecated<void> $ready();

    MCNAPI ::Scripting::Result_deprecated<void> $quit();

    MCNAPI ::std::string_view $getServiceName() const;

    MCNAPI ::Scripting::Result_deprecated<::std::vector<::std::string>>
    $getAvailablePackNames(::PackType const& packType) const;

    MCNAPI ::Scripting::Result_deprecated<bool>
    $packExists(::PackType const& packType, ::std::string const& name) const;

    MCNAPI ::Scripting::Result_deprecated<void>
    $createPack(::PackType const& packType, ::std::string const& name, ::std::string const& packDescription);

    MCNAPI ::Scripting::Result_deprecated<::std::string>
    $getPackPath(::PackType const& packType, ::std::string const& name) const;

    MCNAPI ::Scripting::Result_deprecated<void> $writePackFile(
        ::PackType const&    packType,
        ::std::string const& name,
        ::Core::Path const&  relativeFilePath,
        ::std::string const& content
    );

    MCNAPI ::Scripting::Result_deprecated<void> $writePackFiles(
        ::PackType const&                                              packType,
        ::std::string const&                                           name,
        ::std::vector<::std::pair<::Core::Path, ::std::string>> const& filesToWrite
    );

    MCNAPI ::Scripting::Result_deprecated<::std::string>
    $readPackFile(::PackType const& packType, ::std::string const& name, ::Core::Path const& relativeFilePath) const;

    MCNAPI ::Scripting::Result_deprecated<void>
    $deletePackFile(::PackType const& packType, ::std::string const& name, ::Core::Path const& relativeFilePath);

    MCNAPI ::Scripting::Result_deprecated<bool>
    $packFileExists(::PackType const& packType, ::std::string const& name, ::Core::Path const& relativeFilePath) const;

    MCNAPI ::Scripting::Result_deprecated<::std::vector<::Core::Path>>
    $listPackFiles(::PackType const& packType, ::std::string const& name, ::Core::Path const& relativeDirectory) const;


    // NOLINTEND
};

} // namespace Editor::Services
