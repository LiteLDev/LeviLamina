#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/editor/JigsawJsonType.h"
#include "mc/deps/script_core/runtime/scripting/Result_deprecated.h"
#include "mc/editor/serviceproviders/EditorJigsawServiceProvider.h"
#include "mc/editor/services/IEditorService.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
class JigsawEditorData;
class JigsawStructureRegistry;
class WeakEntityRef;
namespace Bedrock::PubSub { class Subscription; }
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
        ::ll::UntypedStorage<8, 32> mUnk475f66;
        ::ll::UntypedStorage<8, 16> mUnka25480;
        ::ll::UntypedStorage<8, 16> mUnk86b2c4;
        // NOLINTEND

    public:
        // prevent constructor by default
        TemplatePoolData& operator=(TemplatePoolData const&);
        TemplatePoolData(TemplatePoolData const&);
        TemplatePoolData();
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 48>  mUnkcc05fa;
    ::ll::UntypedStorage<8, 48>  mUnk80d5a1;
    ::ll::UntypedStorage<8, 520> mUnkdb7f4c;
    ::ll::UntypedStorage<8, 16>  mUnk83e259;
    ::ll::UntypedStorage<8, 24>  mUnk2bc7d3;
    ::ll::UntypedStorage<8, 16>  mUnk16bb69;
    ::ll::UntypedStorage<8, 32>  mUnkfa092c;
    ::ll::UntypedStorage<8, 16>  mUnk23a1c7;
    // NOLINTEND

public:
    // prevent constructor by default
    EditorJigsawService& operator=(EditorJigsawService const&);
    EditorJigsawService(EditorJigsawService const&);
    EditorJigsawService();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~EditorJigsawService() /*override*/ = default;

    virtual ::Scripting::Result_deprecated<void> init() /*override*/;

    virtual ::Scripting::Result_deprecated<void> quit() /*override*/;

    virtual ::Scripting::Result_deprecated<void> ready() /*override*/;

    virtual ::std::string_view getServiceName() const /*override*/;

    virtual ::std::string getJigsawExportDirectory() /*override*/;

    virtual ::std::map<::Editor::Services::JigsawJsonType, ::std::string> getEmptyJigsawFiles() /*override*/;

    virtual ::std::vector<::std::string> getJigsawRegistryList() /*override*/;

    virtual ::JigsawStructureRegistry* getJigsawRegistry(::std::string const&) /*override*/;

    virtual ::std::map<::Editor::Services::JigsawJsonType, ::std::vector<::Editor::Services::EditorRegistryFile>>
    getJigsawRegistryJson(::std::string const&) /*override*/;

    virtual void setJigsawRegistry(
        ::std::string const&,
        ::std::map<::Editor::Services::JigsawJsonType, ::std::vector<::Editor::Services::EditorRegistryFile>>,
        bool
    ) /*override*/;

    virtual void deleteJigsawRegistry(::std::string const&) /*override*/;

    virtual void generateJigsawPreview(
        ::std::string const&,
        ::std::string const&,
        ::std::string const&,
        ::BlockPos const&,
        int const,
        int const,
        bool const,
        ::Editor::ScriptModule::ScriptClipboardItem const&,
        ::WeakEntityRef
    ) /*override*/;

    virtual ::JigsawEditorData const getJigsawBlockData(::BlockPos&, ::WeakEntityRef) /*override*/;

    virtual void setJigsawBlockData(::BlockPos&, ::WeakEntityRef, ::JigsawEditorData) /*override*/;

    virtual ::Bedrock::PubSub::Subscription
        listenForSetJigsawRegistry(::std::function<void(::std::vector<::std::string>)>) /*override*/;

    virtual ::Bedrock::PubSub::Subscription listenForGenerateJigsawPreview(
        ::std::function<void(::std::vector<::Editor::Services::EditorJigsawSection>)>
    ) /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit EditorJigsawService(::Editor::ServiceProviderCollection& providers);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::Editor::ServiceProviderCollection& providers);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace Editor::Services
