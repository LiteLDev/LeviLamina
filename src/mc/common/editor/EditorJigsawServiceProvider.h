#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/editor/JigsawJsonType.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
class JigsawStructureRegistry;
class WeakEntityRef;
namespace Bedrock::PubSub { class Subscription; }
namespace Editor::ScriptModule { class ScriptClipboardItem; }
namespace Editor::Services { struct EditorJigsawSection; }
namespace Editor::Services { struct EditorRegistryFile; }
// clang-format on

namespace Editor::Services {

class EditorJigsawServiceProvider {
public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~EditorJigsawServiceProvider() = default;

    // vIndex: 1
    virtual ::std::string getJigsawExportDirectory() = 0;

    // vIndex: 2
    virtual ::std::map<::Editor::Services::JigsawJsonType, ::std::string> getEmptyJigsawFiles() = 0;

    // vIndex: 3
    virtual ::std::vector<::std::string> getJigsawRegistryList() = 0;

    // vIndex: 4
    virtual ::JigsawStructureRegistry* getJigsawRegistry(::std::string const&) = 0;

    // vIndex: 5
    virtual void setJigsawRegistry(
        ::std::string const&,
        ::std::map<::Editor::Services::JigsawJsonType, ::std::vector<::Editor::Services::EditorRegistryFile>>,
        bool
    ) = 0;

    // vIndex: 6
    virtual ::std::map<::Editor::Services::JigsawJsonType, ::std::vector<::Editor::Services::EditorRegistryFile>>
    getJigsawRegistryJson(::std::string const&) = 0;

    // vIndex: 7
    virtual void generateJigsawPreview(
        ::std::string const&,
        ::std::string const&,
        ::std::string const&,
        ::BlockPos const&,
        int,
        int const,
        bool const,
        ::Editor::ScriptModule::ScriptClipboardItem const&,
        ::WeakEntityRef
    ) = 0;

    // vIndex: 8
    virtual ::Bedrock::PubSub::Subscription
        listenForSetJigsawRegistry(::std::function<void(::std::vector<::std::string>)>) = 0;

    // vIndex: 9
    virtual ::Bedrock::PubSub::Subscription listenForGenerateJigsawPreview(
        ::std::function<void(::std::vector<::Editor::Services::EditorJigsawSection>)>
    ) = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace Editor::Services
