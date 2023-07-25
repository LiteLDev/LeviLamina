#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

struct NpcDialogueScene {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_NPCDIALOGUESCENE
public:
    NpcDialogueScene& operator=(NpcDialogueScene const&) = delete;
    NpcDialogueScene(NpcDialogueScene const&)            = delete;
    NpcDialogueScene()                                   = delete;
#endif

public:
    /**
     * @symbol ??1NpcDialogueScene\@\@QEAA\@XZ
     */
    MCAPI ~NpcDialogueScene();
    /**
     * @symbol
     * ?parse\@NpcDialogueScene\@\@SA?AU1\@AEBVValue\@Json\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@H\@Z
     */
    MCAPI static struct NpcDialogueScene parse(class Json::Value const&, std::string const&, int);
};
