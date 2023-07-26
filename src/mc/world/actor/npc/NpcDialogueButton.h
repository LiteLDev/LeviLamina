#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

struct NpcDialogueButton {

public:
    // prevent constructor by default
    NpcDialogueButton& operator=(NpcDialogueButton const&) = delete;
    NpcDialogueButton(NpcDialogueButton const&)            = delete;

public:
    /**
     * @symbol ??0NpcDialogueButton\@\@QEAA\@XZ
     */
    MCAPI NpcDialogueButton(); // NOLINT
    /**
     * @symbol ??1NpcDialogueButton\@\@QEAA\@XZ
     */
    MCAPI ~NpcDialogueButton(); // NOLINT
    /**
     * @symbol
     * ?parse\@NpcDialogueButton\@\@SA?AU1\@AEBVValue\@Json\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@H\@Z
     */
    MCAPI static struct NpcDialogueButton parse(class Json::Value const&, std::string const&, int); // NOLINT
};
