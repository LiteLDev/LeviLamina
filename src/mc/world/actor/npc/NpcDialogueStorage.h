#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class ResourcePackManager;
struct NpcDialogueScene;
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

    MCFOLD ::NpcDialogueScene* getScene(::std::string const& sceneName);

    MCAPI void init(::ResourcePackManager& resourcePackManager);
    // NOLINTEND
};
