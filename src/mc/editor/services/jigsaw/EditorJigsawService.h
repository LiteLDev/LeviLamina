#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/editor/JigsawJsonType.h"
#include "mc/deps/core/file/PathBuffer.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/scripting/runtime/Result_deprecated.h"
#include "mc/editor/serviceproviders/EditorJigsawServiceProvider.h"
#include "mc/editor/services/IEditorService.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
class FeatureRegistry;
class IStructureTemplateManager;
class JigsawEditorData;
class JigsawStructureRegistry;
class ResourcePackManager;
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
        // constructor thunks
        // NOLINTBEGIN
        MCNAPI_S void* $ctor(
            ::std::string const&                                        templateId,
            ::std::set<::std::string> const&                            structNames,
            ::std::map<::std::string, ::std::set<::std::string>> const& structTargetNames
        );
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
    virtual ~EditorJigsawService() /*override*/;

    virtual ::Scripting::Result_deprecated<void> init() /*override*/;

    virtual ::Scripting::Result_deprecated<void> quit() /*override*/;

    virtual ::Scripting::Result_deprecated<void> ready() /*override*/;

    virtual ::std::string_view getServiceName() const /*override*/;

    virtual ::std::string getJigsawExportDirectory() /*override*/;

    virtual ::std::map<::Editor::Services::JigsawJsonType, ::std::string> getEmptyJigsawFiles() /*override*/;

    virtual ::std::vector<::std::string> getJigsawRegistryList() /*override*/;

    virtual ::JigsawStructureRegistry* getJigsawRegistry(::std::string const& registryName) /*override*/;

    virtual ::std::map<::Editor::Services::JigsawJsonType, ::std::vector<::Editor::Services::EditorRegistryFile>>
    getJigsawRegistryJson(::std::string const& registryName) /*override*/;

    virtual void setJigsawRegistry(
        ::std::string const& registryName,
        ::std::map<::Editor::Services::JigsawJsonType, ::std::vector<::Editor::Services::EditorRegistryFile>> data,
        bool shouldSaveFiles
    ) /*override*/;

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

    virtual ::JigsawEditorData const getJigsawBlockData(::BlockPos& pos, ::WeakEntityRef playerRef) /*override*/;

    virtual void
    setJigsawBlockData(::BlockPos& pos, ::WeakEntityRef playerRef, ::JigsawEditorData jigsawData) /*override*/;

    virtual ::Bedrock::PubSub::Subscription
    listenForSetJigsawRegistry(::std::function<void(::std::vector<::std::string>)> callback) /*override*/;

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

    MCNAPI void _loadBehaviorPackJigsawRegistries(::ResourcePackManager& packManager);

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
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::std::string_view const& SERVICE_NAME();
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

    MCNAPI ::JigsawEditorData const $getJigsawBlockData(::BlockPos& pos, ::WeakEntityRef playerRef);

    MCNAPI void $setJigsawBlockData(::BlockPos& pos, ::WeakEntityRef playerRef, ::JigsawEditorData jigsawData);

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
