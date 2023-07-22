/**
 * @file  NpcGUIOffset.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "Json.hpp"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class NpcGUIOffset.
 *
 */
class NpcGUIOffset {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_NPCGUIOFFSET
public:
    class NpcGUIOffset& operator=(class NpcGUIOffset const &) = delete;
    NpcGUIOffset(class NpcGUIOffset const &) = delete;
    NpcGUIOffset() = delete;
#endif

public:
    /**
     * @symbol  ??0NpcGUIOffset\@\@QEAA\@AEBVValue\@Json\@\@\@Z
     */
    MCAPI NpcGUIOffset(class Json::Value const &);

};