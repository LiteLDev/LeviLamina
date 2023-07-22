/**
 * @file  CommandItem.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class CommandItem.
 *
 */
class CommandItem {

#define AFTER_EXTRA
// Add Member There
    short mVersion; // 0
    bool mOverrideAux;           // 2
    int mId;           // 4

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_COMMANDITEM
public:
    class CommandItem& operator=(class CommandItem const &) = delete;
    CommandItem(class CommandItem const &) = delete;
#endif

public:
    /**
     * @symbol  ??0CommandItem\@\@QEAA\@XZ
     */
    MCAPI CommandItem();
    /**
     * @symbol  ??0CommandItem\@\@QEAA\@HF_N\@Z
     */
    MCAPI CommandItem(int, short, bool);
    /**
     * @symbol  ??0CommandItem\@\@QEAA\@_K\@Z
     */
    MCAPI CommandItem(unsigned __int64);
    /**
     * @symbol  ?createInstance\@CommandItem\@\@QEBA?AV?$optional\@VItemInstance\@\@\@std\@\@HHPEAVCommandOutput\@\@_N\@Z
     */
    MCAPI class std::optional<class ItemInstance> createInstance(int, int, class CommandOutput *, bool) const;
    /**
     * @symbol  ?getId\@CommandItem\@\@QEBAHXZ
     */
    MCAPI int getId() const;
    /**
     * @symbol  ??BCommandItem\@\@QEBA_NXZ
     */
    MCAPI operator bool() const;
    /**
     * @symbol  ??BCommandItem\@\@QEBA_KXZ
     */
    MCAPI operator unsigned __int64() const;

};