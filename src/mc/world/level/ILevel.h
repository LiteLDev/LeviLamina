#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/EnableNonOwnerReferences.h"

// auto generated forward declare list
// clang-format off
namespace Bedrock { class EnableNonOwnerReferences; }
// clang-format on

class ILevel : public ::Bedrock::EnableNonOwnerReferences {
public:
    // prevent constructor by default
    ILevel& operator=(ILevel const&);
    ILevel(ILevel const&);
    ILevel();

public:
    // NOLINTBEGIN
    // symbol: ?asLevel@ILevel@@UEAAPEAVLevel@@XZ
    MCVAPI class Level* asLevel();

    // symbol: ?asMultiPlayerLevel@ILevel@@UEAAPEAVMultiPlayerLevel@@XZ
    MCVAPI class MultiPlayerLevel* asMultiPlayerLevel();

    // symbol: ?getTradeTables@ILevel@@UEAAPEAVTradeTables@@XZ
    MCVAPI class TradeTables* getTradeTables();

    // symbol: ??1ILevel@@UEAA@XZ
    MCVAPI ~ILevel();

    // NOLINTEND
};
