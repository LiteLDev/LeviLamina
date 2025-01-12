#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"

// auto generated forward declare list
// clang-format off
class LevelData;
class PackCapability;
namespace Bedrock { class ActivationArguments; }
namespace Core { class Result; }
// clang-format on

class EditorBootstrapper : public ::Bedrock::EnableNonOwnerReferences {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 1> mUnk9a3eaa;
    ::ll::UntypedStorage<1, 1> mUnk42942f;
    // NOLINTEND

public:
    // prevent constructor by default
    EditorBootstrapper& operator=(EditorBootstrapper const&);
    EditorBootstrapper(EditorBootstrapper const&);
    EditorBootstrapper();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~EditorBootstrapper() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCFOLD bool isEditorModeEnabled() const;

    MCAPI void processActivationArguments(::Bedrock::ActivationArguments const& args);

    MCAPI void processLoadedLevel(::LevelData& levelData, ::Core::Result const& levelLoadResult);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::PackCapability getPackCapability(::std::optional<bool> creator_editor_override);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::std::string const& EDITOR_MODE_ARGUMENT_KEY();

    MCAPI static ::std::string const& EDITOR_MODE_ARGUMENT_VALUE();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
