#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace mce { class UUID; }
// clang-format on

class DenyList {
public:
    // DenyList inner types declare
    // clang-format off
    struct Entry;
    // clang-format on

    // DenyList inner types define
    enum class Duration {};

    struct Entry {
    public:
        // prevent constructor by default
        Entry& operator=(Entry const&);
        Entry();

    public:
        // NOLINTBEGIN
        // symbol: ??0Entry@DenyList@@QEAA@AEBU01@@Z
        MCAPI Entry(struct DenyList::Entry const&);

        // symbol:
        // ??0Entry@DenyList@@QEAA@AEBVUUID@mce@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
        MCAPI Entry(class mce::UUID const& uuid, std::string const& xuid);

        // symbol: ??1Entry@DenyList@@QEAA@XZ
        MCAPI ~Entry();

        // NOLINTEND
    };

public:
    // prevent constructor by default
    DenyList& operator=(DenyList const&);
    DenyList(DenyList const&);
    DenyList();

public:
    // NOLINTBEGIN
    // symbol: ?addEntry@DenyList@@QEAAXAEBUEntry@1@@Z
    MCAPI void addEntry(struct DenyList::Entry const& entry);

    // symbol: ?getDuration@DenyList@@QEBA?AW4Duration@1@AEBUEntry@1@@Z
    MCAPI ::DenyList::Duration getDuration(struct DenyList::Entry const& entry) const;

    // symbol: ?getMessage@DenyList@@QEBAAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBUEntry@1@@Z
    MCAPI std::string const& getMessage(struct DenyList::Entry const&) const;

    // symbol: ?isBlocked@DenyList@@QEBA_NAEBUEntry@1@@Z
    MCAPI bool isBlocked(struct DenyList::Entry const& entry) const;

    // symbol: ?removeEntry@DenyList@@QEAAXAEBUEntry@1@@Z
    MCAPI void removeEntry(struct DenyList::Entry const& entry);

    // symbol: ??1DenyList@@QEAA@XZ
    MCAPI ~DenyList();

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol:
    // ?isBlocked@DenyList@@AEBA_NAEBUEntry@1@AEAV?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@UEntry@DenyList@@@std@@@std@@@std@@@Z
    MCAPI bool
    isBlocked(struct DenyList::Entry const&, std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<struct DenyList::Entry>>>&)
        const;

    // NOLINTEND
};
