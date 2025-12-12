#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/scripting/lifetime_registry/WeakHandleFromThis.h"
#include "mc/deps/scripting/runtime/Result_deprecated.h"
#include "mc/deps/scripting/script_engine/Promise.h"

// auto generated forward declare list
// clang-format off
class Vec3;
namespace Editor { class EditorPlayerServiceProvider; }
namespace Editor::ScriptModule { class ScriptClipboardItem; }
namespace Editor::Services { class EditorJigsawServiceProvider; }
namespace Editor::Services { struct EditorJigsawSection; }
namespace Editor::Services { struct EditorRegistryFile; }
namespace Scripting { class ScriptObjectFactory; }
namespace Scripting { class WeakLifetimeScope; }
namespace Scripting { struct ClassBinding; }
namespace Scripting { struct EnumBinding; }
namespace Scripting { struct Error; }
namespace Scripting { struct InterfaceBinding; }
// clang-format on

namespace Editor::ScriptModule {

class ScriptJigsawService : public ::Scripting::WeakHandleFromThis<::Editor::ScriptModule::ScriptJigsawService> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnk938ed4;
    ::ll::UntypedStorage<8, 24> mUnkd0fe33;
    ::ll::UntypedStorage<8, 16> mUnk46598d;
    ::ll::UntypedStorage<8, 16> mUnk429e86;
    ::ll::UntypedStorage<8, 16> mUnk1e3220;
    ::ll::UntypedStorage<8, 16> mUnk3d5c5f;
    ::ll::UntypedStorage<8, 16> mUnk9f66df;
    ::ll::UntypedStorage<8, 8>  mUnk285082;
    ::ll::UntypedStorage<8, 24> mUnkb976de;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptJigsawService& operator=(ScriptJigsawService const&);
    ScriptJigsawService(ScriptJigsawService const&);
    ScriptJigsawService();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ScriptJigsawService(::Editor::ScriptModule::ScriptJigsawService&&);

    MCNAPI ScriptJigsawService(
        ::Editor::Services::EditorJigsawServiceProvider* jigsawService,
        ::Editor::EditorPlayerServiceProvider*           playerService,
        ::Scripting::WeakLifetimeScope const&            scope
    );

    MCNAPI ::Scripting::Result_deprecated<
        ::Scripting::Promise<::std::vector<::Editor::Services::EditorJigsawSection>, ::Scripting::Error, void>>
    generateJigsaw(
        ::std::string const&                               registryName,
        ::std::string const&                               startingPool,
        ::std::string const&                               startTarget,
        ::Vec3 const&                                      seed,
        int                                                depth,
        int                                                maxHorizontalDistanceFromCenter,
        bool                                               validateRegistry,
        ::Editor::ScriptModule::ScriptClipboardItem const& clipboardItem,
        ::Scripting::ScriptObjectFactory&                  factory
    );

    MCNAPI ::std::map<::std::string, ::std::string> getEmptyRegistryFiles();

    MCNAPI ::std::string getExportLocation();

    MCNAPI ::std::map<::std::string, ::std::vector<::Editor::Services::EditorRegistryFile>>
    getRegistryData(::std::string const& registryName);

    MCNAPI ::std::vector<::std::string> getRegistryList();

    MCNAPI ::Editor::ScriptModule::ScriptJigsawService& operator=(::Editor::ScriptModule::ScriptJigsawService&&);

    MCNAPI ::Scripting::Result_deprecated<::Scripting::Promise<::std::vector<::std::string>, ::Scripting::Error, void>>
    setRegistryData(
        ::std::string const&                                  registryName,
        ::std::vector<::Editor::Services::EditorRegistryFile> processorData,
        ::std::vector<::Editor::Services::EditorRegistryFile> structureData,
        ::std::vector<::Editor::Services::EditorRegistryFile> structureSetData,
        ::std::vector<::Editor::Services::EditorRegistryFile> templatePoolData,
        ::Scripting::ScriptObjectFactory&                     factory
    );

    MCNAPI ~ScriptJigsawService();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::InterfaceBinding bindEditorJigsawSection();

    MCNAPI static ::Scripting::InterfaceBinding bindEditorRegistryFile();

    MCNAPI static ::Scripting::EnumBinding bindJigsawJsonType();

    MCNAPI static ::Scripting::ClassBinding bindScript();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::Editor::ScriptModule::ScriptJigsawService&&);

    MCNAPI void* $ctor(
        ::Editor::Services::EditorJigsawServiceProvider* jigsawService,
        ::Editor::EditorPlayerServiceProvider*           playerService,
        ::Scripting::WeakLifetimeScope const&            scope
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace Editor::ScriptModule
