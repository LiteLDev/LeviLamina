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
    // symbol: ??1NpcDialogueScene@@QEAA@XZ
    MCAPI ~NpcDialogueScene();

    // symbol:
    // ?parse@NpcDialogueScene@@SA?AU1@AEBVValue@Json@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@H@Z
    MCAPI static struct NpcDialogueScene
    parse(class Json::Value const&, std::string const& fileName, int packCommandVersion);

    // NOLINTEND
};
