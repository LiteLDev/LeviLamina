#pragma once

#include "mc/_HeaderOutputPredefine.h"

class CommandItem {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_COMMANDITEM
public:
    CommandItem& operator=(CommandItem const&) = delete;
    CommandItem(CommandItem const&)            = delete;
#endif

public:
    /**
     * @symbol ??0CommandItem\@\@QEAA\@XZ
     */
    MCAPI CommandItem();
    /**
     * @symbol ??0CommandItem\@\@QEAA\@HF_N\@Z
     */
    MCAPI CommandItem(int, short, bool);
    /**
     * @symbol ?createInstance\@CommandItem\@\@QEBA?AV?$optional\@VItemInstance\@\@\@std\@\@HHPEAVCommandOutput\@\@_N\@Z
     */
    MCAPI class std::optional<class ItemInstance> createInstance(int, int, class CommandOutput*, bool) const;
    /**
     * @symbol ?getId\@CommandItem\@\@QEBAHXZ
     */
    MCAPI int getId() const;
    /**
     * @symbol ??BCommandItem\@\@QEBA_NXZ
     */
    MCAPI operator bool() const;
};
