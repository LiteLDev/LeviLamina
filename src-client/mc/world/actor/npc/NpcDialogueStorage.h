#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/server/commands/CurrentCmdVersion.h"

// auto generated forward declare list
// clang-format off
struct NpcDialogueScene;
struct ResourcePackManager;
// clang-format on

class NpcDialogueStorage {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 64, ::std::unordered_map<::std::string, ::NpcDialogueScene>> mScenes;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCFOLD ::NpcDialogueScene const* getScene(::std::string const& sceneName) const;

    MCAPI void init(::ResourcePackManager& resourcePackManager);

    MCAPI bool
    parseFile(::std::string const& fileData, ::std::string const& fileName, ::CurrentCmdVersion packCommandVersion);
    // NOLINTEND
};
