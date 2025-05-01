#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"

// auto generated forward declare list
// clang-format off
class LevelData;
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
    virtual ~EditorBootstrapper() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void processActivationArguments(::Bedrock::ActivationArguments const& args);

    MCNAPI void processLoadedLevel(::LevelData& levelData, ::Core::Result const& levelLoadResult);
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

    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
