#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/server/commands/CurrentCmdVersion.h"

// auto generated forward declare list
// clang-format off
class ResourcePackManager;
struct NpcDialogueScene;
// clang-format on

class NpcDialogueStorage {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 64> mUnkf24f0c;
    // NOLINTEND

public:
    // prevent constructor by default
    NpcDialogueStorage& operator=(NpcDialogueStorage const&);
    NpcDialogueStorage(NpcDialogueStorage const&);
    NpcDialogueStorage();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::NpcDialogueScene const* getScene(::std::string const& sceneName) const;

    MCNAPI void init(::ResourcePackManager& resourcePackManager);

    MCNAPI bool
    parseFile(::std::string const& fileData, ::std::string const& fileName, ::CurrentCmdVersion packCommandVersion);
    // NOLINTEND
};
