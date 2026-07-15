#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"
#include "mc/network/EditorConnectionJoinIntent.h"

// auto generated forward declare list
// clang-format off
class LevelData;
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
    virtual ~EditorBootstrapper() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#ifdef LL_PLAT_S
    MCNAPI void logLoadedLevelType(::LevelData const& levelData, bool levelLoadSucceeded) const;
#endif

    MCNAPI void processActivationArguments(::Bedrock::ActivationArguments const& args);

#ifdef LL_PLAT_S
    MCNAPI void processLoadedLevel(::LevelData& levelData, bool levelLoadSucceeded, bool convertWorldToEditorProject);
#endif
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::std::optional<::EditorConnectionJoinIntent>& msGlobalEditorJoinIntentOverride();
    // NOLINTEND
};
