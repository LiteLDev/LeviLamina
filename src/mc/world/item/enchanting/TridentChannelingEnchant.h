#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/item/enchanting/Enchant.h"

class TridentChannelingEnchant {

public:
    // prevent constructor by default
    TridentChannelingEnchant& operator=(TridentChannelingEnchant const&) = delete;
    TridentChannelingEnchant(TridentChannelingEnchant const&)            = delete;
    TridentChannelingEnchant()                                           = delete;

public:
    // NOLINTBEGIN
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?isCompatibleWith\@TridentChannelingEnchant\@\@UEBA_NW4Type\@Enchant\@\@\@Z
     */
    virtual bool isCompatibleWith(enum class Enchant::Type) const;
    /**
     * @vftbl 2
     * @symbol ?getMinCost\@TridentChannelingEnchant\@\@UEBAHH\@Z
     */
    virtual int getMinCost(int) const;
    /**
     * @vftbl 3
     * @symbol ?getMaxCost\@TridentChannelingEnchant\@\@UEBAHH\@Z
     */
    virtual int getMaxCost(int) const;
    /**
     * @vftbl 4
     * @symbol ?getMaxLevel\@TridentChannelingEnchant\@\@UEBAHXZ
     */
    virtual int getMaxLevel() const;
    /**
     * @symbol
     * ??0TridentChannelingEnchant\@\@QEAA\@W4Type\@Enchant\@\@W4Frequency\@2\@V?$basic_string_view\@DU?$char_traits\@D\@std\@\@\@std\@\@2H_NH\@Z
     */
    MCAPI TridentChannelingEnchant(
        enum class Enchant::Type,
        enum class Enchant::Frequency,
        std::string_view,
        std::string_view,
        int,
        bool,
        int
    );
    // NOLINTEND
};
