/**
 * @file  CommandArea.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

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
     * @symbol ?getDimensionBlockSource\@CommandArea\@\@QEAAAEAVBlockSource\@\@XZ
     */
    MCAPI class BlockSource & getDimensionBlockSource();
    /**
     * @symbol ??1CommandArea\@\@QEAA\@XZ
     */
    MCAPI ~CommandArea();

};
