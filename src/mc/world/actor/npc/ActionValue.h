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
    ActionValue();

public:
    // NOLINTBEGIN
    MCAPI struct npc::ActionValue& operator=(std::string_view newName);

    MCAPI std::string_view rawValue() const;

    MCAPI ~ActionValue();

    // NOLINTEND
};

}; // namespace npc
