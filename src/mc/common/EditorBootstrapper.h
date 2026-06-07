#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"

// auto generated forward declare list
// clang-format off
class LevelData;
class PackCapability;
namespace Bedrock { class ActivationArguments; }
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
    virtual ~EditorBootstrapper() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI bool isEditorModeEnabled() const;

    MCNAPI void processActivationArguments(::Bedrock::ActivationArguments const& args);

#ifdef LL_PLAT_S
    MCNAPI void processLoadedLevel(::LevelData& levelData, bool levelLoadSucceeded);
#endif
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::PackCapability getPackCapability(::std::optional<bool> creator_editor_override);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
