#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/editor/EditorJigsawServiceProvider.h"
#include "mc/common/editor/JigsawJsonType.h"
#include "mc/deps/core/file/PathBuffer.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/scripting/runtime/Result_deprecated.h"
#include "mc/editor/services/IEditorService.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
class FeatureRegistry;
class IStructureTemplateManager;
class JigsawStructureRegistry;
class WeakEntityRef;
namespace Bedrock::PubSub { class Subscription; }
namespace Editor { class IEditorPlayer; }
namespace Editor { class ServiceProviderCollection; }
namespace Editor::ScriptModule { class ScriptClipboardItem; }
namespace Editor::Services { struct EditorJigsawSection; }
namespace Editor::Services { struct EditorRegistryFile; }
// clang-format on

namespace Editor::Services {

class EditorJigsawService : public ::Editor::Services::IEditorService,
                            public ::Editor::Services::EditorJigsawServiceProvider {
public:
    // EditorJigsawService inner types declare
    // clang-format off
    struct TemplatePoolData;
    // clang-format on

    // EditorJigsawService inner types define
    struct TemplatePoolData {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 32> mUnk1fb459;
        ::ll::UntypedStorage<8, 16> mUnk579187;
        ::ll::UntypedStorage<8, 16> mUnkd32fc7;
        // NOLINTEND

    public:
        // prevent constructor by default
        TemplatePoolData& operator=(TemplatePoolData const&);
        TemplatePoolData(TemplatePoolData const&);
        TemplatePoolData();

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI ~TemplatePoolData();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI void $dtor();
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 48>  mUnk4fe173;
    ::ll::UntypedStorage<8, 48>  mUnkfffe35;
    ::ll::UntypedStorage<8, 520> mUnkdb7f4c;
    ::ll::UntypedStorage<8, 16>  mUnkfbc0d2;
    ::ll::UntypedStorage<8, 24>  mUnk2bc7d3;
    ::ll::UntypedStorage<8, 16>  mUnk16bb69;
    ::ll::UntypedStorage<8, 32>  mUnkecbd5c;
    ::ll::UntypedStorage<8, 16>  mUnkbab63e;
    // NOLINTEND

public:
    // prevent constructor by default
    EditorJigsawService& operator=(EditorJigsawService const&);
    EditorJigsawService(EditorJigsawService const&);
    EditorJigsawService();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~EditorJigsawService() /*override*/;

    // vIndex: 1
    virtual ::Scripting::Result_deprecated<void> init() /*override*/;

    // vIndex: 3
    virtual ::Scripting::Result_deprecated<void> quit() /*override*/;

    // vIndex: 2
    virtual ::Scripting::Result_deprecated<void> ready() /*override*/;

    // vIndex: 4
    virtual ::std::string_view getServiceName() const /*override*/;

    // vIndex: 1
    virtual ::std::string getJigsawExportDirectory() /*override*/;

    // vIndex: 2
    virtual ::std::map<::Editor::Services::JigsawJsonType, ::std::string> getEmptyJigsawFiles() /*override*/;

    // vIndex: 3
    virtual ::std::vector<::std::string> getJigsawRegistryList() /*override*/;

    // vIndex: 4
    virtual ::JigsawStructureRegistry* getJigsawRegistry(::std::string const& registryName) /*override*/;

    // vIndex: 6
    virtual ::std::map<::Editor::Services::JigsawJsonType, ::std::vector<::Editor::Services::EditorRegistryFile>>
    getJigsawRegistryJson(::std::string const& registryName) /*override*/;

    // vIndex: 5
    virtual void setJigsawRegistry(
        ::std::string const& registryName,
        ::std::map<::Editor::Services::JigsawJsonType, ::std::vector<::Editor::Services::EditorRegistryFile>> data,
        bool shouldSaveFiles
    ) /*override*/;

    // vIndex: 7
    virtual void generateJigsawPreview(
        ::std::string const&                               registryName,
        ::std::string const&                               startPool,
        ::std::string const&                               startTarget,
        ::BlockPos const&                                  seed,
        int const                                          depth,
        int const                                          maxHorizontalDistanceFromCenter,
        bool const                                         validateRegistry,
        ::Editor::ScriptModule::ScriptClipboardItem const& clipboardItem,
        ::WeakEntityRef                                    playerRef
    ) /*override*/;

    // vIndex: 8
    virtual ::Bedrock::PubSub::Subscription
    listenForSetJigsawRegistry(::std::function<void(::std::vector<::std::string>)> callback) /*override*/;

    // vIndex: 9
    virtual ::Bedrock::PubSub::Subscription listenForGenerateJigsawPreview(
        ::std::function<void(::std::vector<::Editor::Services::EditorJigsawSection>)> callback
    ) /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit EditorJigsawService(::Editor::ServiceProviderCollection& providers);

    MCNAPI void _bootstrapJigsawRegistry(
        ::Bedrock::NotNullNonOwnerPtr<::IStructureTemplateManager> structureManager,
        ::FeatureRegistry&                                         featureRegistry,
        ::JigsawStructureRegistry&                                 jigsawStructureRegistry
    );

    MCNAPI void _saveFile(
        ::Editor::Services::EditorRegistryFile& regFile,
        ::Core::PathBuffer<::std::string>       jigsawPath,
        ::Editor::Services::JigsawJsonType      fileType,
        ::std::vector<::std::string>&           outErrors
    );

    MCNAPI void _saveJigsawRegistryFiles(::std::string const& registryName);

    MCNAPI bool
    _validateRegistry(::std::string registryName, ::Bedrock::NonOwnerPointer<::Editor::IEditorPlayer> editorPlayer);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::Editor::ServiceProviderCollection& providers);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::Scripting::Result_deprecated<void> $init();

    MCNAPI ::Scripting::Result_deprecated<void> $quit();

    MCNAPI ::Scripting::Result_deprecated<void> $ready();

    MCNAPI ::std::string_view $getServiceName() const;

    MCNAPI ::std::string $getJigsawExportDirectory();

    MCNAPI ::std::map<::Editor::Services::JigsawJsonType, ::std::string> $getEmptyJigsawFiles();

    MCNAPI ::std::vector<::std::string> $getJigsawRegistryList();

    MCNAPI ::JigsawStructureRegistry* $getJigsawRegistry(::std::string const& registryName);

    MCNAPI ::std::map<::Editor::Services::JigsawJsonType, ::std::vector<::Editor::Services::EditorRegistryFile>>
    $getJigsawRegistryJson(::std::string const& registryName);

    MCNAPI void $setJigsawRegistry(
        ::std::string const& registryName,
        ::std::map<::Editor::Services::JigsawJsonType, ::std::vector<::Editor::Services::EditorRegistryFile>> data,
        bool shouldSaveFiles
    );

    MCNAPI void $generateJigsawPreview(
        ::std::string const&                               registryName,
        ::std::string const&                               startPool,
        ::std::string const&                               startTarget,
        ::BlockPos const&                                  seed,
        int const                                          depth,
        int const                                          maxHorizontalDistanceFromCenter,
        bool const                                         validateRegistry,
        ::Editor::ScriptModule::ScriptClipboardItem const& clipboardItem,
        ::WeakEntityRef                                    playerRef
    );

    MCNAPI ::Bedrock::PubSub::Subscription
    $listenForSetJigsawRegistry(::std::function<void(::std::vector<::std::string>)> callback);

    MCNAPI ::Bedrock::PubSub::Subscription $listenForGenerateJigsawPreview(
        ::std::function<void(::std::vector<::Editor::Services::EditorJigsawSection>)> callback
    );
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftableForEditorJigsawServiceProvider();

    MCNAPI static void** $vftableForIEditorService();
    // NOLINTEND
};

} // namespace Editor::Services
