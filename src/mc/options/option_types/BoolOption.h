#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/options/option_types/Option.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

class BoolOption : public ::Option {

public:
    // prevent constructor by default
    BoolOption& operator=(BoolOption const&) = delete;
    BoolOption(BoolOption const&)            = delete;
    BoolOption()                             = delete;

public:
    // NOLINTBEGIN
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol
     * ?save\@BoolOption\@\@UEAAXAEAV?$vector\@U?$pair\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V12\@\@std\@\@V?$allocator\@U?$pair\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V12\@\@std\@\@\@2\@\@std\@\@\@Z
     */
    virtual void save(std::vector<std::pair<std::string, std::string>>&);
    /**
     * @vftbl 2
     * @symbol ?load\@BoolOption\@\@UEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    virtual void load(std::string const&);
    // NOLINTEND

    // private:
    // NOLINTBEGIN
    /**
     * @symbol ?_set\@BoolOption\@\@AEAAX_N0\@Z
     */
    MCAPI void _set(bool, bool);
    // NOLINTEND
};
