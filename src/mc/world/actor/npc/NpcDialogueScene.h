#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

struct NpcDialogueScene {
public:
    // prevent constructor by default
    NpcDialogueScene& operator=(NpcDialogueScene const&);
    NpcDialogueScene(NpcDialogueScene const&);
    NpcDialogueScene();

public:
    // NOLINTBEGIN
    MCAPI ~NpcDialogueScene();

    MCAPI static struct NpcDialogueScene
    parse(class Json::Value const& sceneNode, std::string const& fileName, int packCommandVersion);

    // NOLINTEND
};
