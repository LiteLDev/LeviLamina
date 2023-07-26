#pragma once

#include "mc/_HeaderOutputPredefine.h"

class CommandItem {

public:
    // prevent constructor by default
    CommandItem& operator=(CommandItem const&) = delete;
    CommandItem(CommandItem const&)            = delete;

public:
    /**
     * @symbol ??0CommandItem\@\@QEAA\@XZ
     */
    MCAPI CommandItem(); // NOLINT
    /**
     * @symbol ??0CommandItem\@\@QEAA\@HF_N\@Z
     */
    MCAPI CommandItem(int, short, bool); // NOLINT
    /**
     * @symbol ?createInstance\@CommandItem\@\@QEBA?AV?$optional\@VItemInstance\@\@\@std\@\@HHPEAVCommandOutput\@\@_N\@Z
     */
    MCAPI class std::optional<class ItemInstance> createInstance(int, int, class CommandOutput*, bool) const; // NOLINT
    /**
     * @symbol ?getId\@CommandItem\@\@QEBAHXZ
     */
    MCAPI int getId() const; // NOLINT
    /**
     * @symbol ??BCommandItem\@\@QEBA_NXZ
     */
    MCAPI operator bool() const; // NOLINT
};
