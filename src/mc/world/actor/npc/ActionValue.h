#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace npc {

struct ActionValue {
public:
    std::string mRawText;
    std::string mText;

    // prevent constructor by default
    ActionValue& operator=(ActionValue const&);
    ActionValue(ActionValue const&);

public:
    // NOLINTBEGIN
    // symbol: ??0ActionValue@npc@@QEAA@XZ
    MCAPI ActionValue();

    // symbol: ??4ActionValue@npc@@QEAAAEAU01@V?$basic_string_view@DU?$char_traits@D@std@@@std@@@Z
    MCAPI struct npc::ActionValue& operator=(std::string_view newName);

    // symbol: ?rawValue@ActionValue@npc@@QEBA?AV?$basic_string_view@DU?$char_traits@D@std@@@std@@XZ
    MCAPI std::string_view rawValue() const;

    // symbol: ??1ActionValue@npc@@QEAA@XZ
    MCAPI ~ActionValue();

    // NOLINTEND
};

}; // namespace npc
