/**
 * @file  MC/CommandArea.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class CommandArea.
 *
 */
class CommandArea {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_COMMANDAREA
public:
    class CommandArea& operator=(class CommandArea const &) = delete;
    CommandArea(class CommandArea const &) = delete;
    CommandArea() = delete;
#endif

public:
    /**
     * @hash   -393660949
     * @symbol ??0CommandArea@@QEAA@V?$unique_ptr@VChunkViewSource@@U?$default_delete@VChunkViewSource@@@std@@@std@@@Z
     */
    MCAPI CommandArea(std::unique_ptr<class ChunkViewSource>);
    /**
     * @hash   -1104195068
     * @symbol ??1CommandArea@@QEAA@XZ
     */
    MCAPI ~CommandArea();

};