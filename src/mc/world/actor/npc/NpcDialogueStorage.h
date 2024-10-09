#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/server/commands/CurrentCmdVersion.h"

class NpcDialogueStorage {
public:
    // prevent constructor by default
    NpcDialogueStorage& operator=(NpcDialogueStorage const&);
    NpcDialogueStorage(NpcDialogueStorage const&);
    NpcDialogueStorage();

public:
    // NOLINTBEGIN
    MCAPI struct NpcDialogueScene const* getScene(std::string const& sceneName) const;

    MCAPI void init(class ResourcePackManager& resourcePackManager);

    MCAPI bool
    parseFile(std::string const& fileData, std::string const& fileName, ::CurrentCmdVersion packCommandVersion);

    // NOLINTEND
};
