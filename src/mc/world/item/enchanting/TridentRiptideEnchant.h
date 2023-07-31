#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/item/enchanting/Enchant.h"

class TridentRiptideEnchant {

public:
    // prevent constructor by default
    TridentRiptideEnchant& operator=(TridentRiptideEnchant const&) = delete;
    TridentRiptideEnchant(TridentRiptideEnchant const&)            = delete;
    TridentRiptideEnchant()                                        = delete;

public:
    // NOLINTBEGIN
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?isCompatibleWith\@TridentRiptideEnchant\@\@UEBA_NW4Type\@Enchant\@\@\@Z
     */
    virtual bool isCompatibleWith(enum class Enchant::Type) const;
    /**
     * @vftbl 2
     * @symbol ?getMinCost\@TridentRiptideEnchant\@\@UEBAHH\@Z
     */
    virtual int getMinCost(int) const;
    /**
     * @vftbl 3
     * @symbol ?getMaxCost\@TridentRiptideEnchant\@\@UEBAHH\@Z
     */
    virtual int getMaxCost(int) const;
    /**
     * @vftbl 4
     * @symbol __unk_vfn_4
     */
    virtual void __unk_vfn_4();
    /**
     * @vftbl 5
     * @symbol ?getMaxLevel\@TridentRiptideEnchant\@\@UEBAHXZ
     */
    virtual int getMaxLevel() const;
    /**
     * @symbol
     * ??0TridentRiptideEnchant\@\@QEAA\@W4Type\@Enchant\@\@W4Frequency\@2\@V?$basic_string_view\@DU?$char_traits\@D\@std\@\@\@std\@\@2H_NH\@Z
     */
    MCAPI TridentRiptideEnchant(
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
