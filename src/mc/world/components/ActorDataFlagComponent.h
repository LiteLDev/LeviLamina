#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/entity/utilities/ActorFlags.h"

struct ActorDataFlagComponent {
public:
    // prevent constructor by default
    ActorDataFlagComponent& operator=(ActorDataFlagComponent const&);
    ActorDataFlagComponent(ActorDataFlagComponent const&);
    ActorDataFlagComponent();

public:
    // NOLINTBEGIN
    // symbol: ?getFlags@ActorDataFlagComponent@@QEBA_KH@Z
    MCAPI uint64 getFlags(int) const;

    // symbol: ?getStatusFlag@ActorDataFlagComponent@@QEBA_NW4ActorFlags@@@Z
    MCAPI bool getStatusFlag(::ActorFlags) const;

    // symbol: ?ALL_HIGHER_ONES@ActorDataFlagComponent@@2V?$bitset@$0HG@@std@@B
    MCAPI static std::bitset<118> const ALL_HIGHER_ONES;

    // symbol: ?ALL_LOWER_ONES@ActorDataFlagComponent@@2V?$bitset@$0HG@@std@@B
    MCAPI static std::bitset<118> const ALL_LOWER_ONES;

    // NOLINTEND

    // protected:
    // NOLINTBEGIN
    // symbol: ?setFlags@ActorDataFlagComponent@@IEAA?AV?$optional@V?$bitset@$0HG@@std@@@std@@_KH@Z
    MCAPI std::optional<std::bitset<118>> setFlags(uint64, int);

    // symbol: ?setStatusFlag@ActorDataFlagComponent@@IEAAXW4ActorFlags@@_N@Z
    MCAPI void setStatusFlag(::ActorFlags, bool);

    // NOLINTEND
};
