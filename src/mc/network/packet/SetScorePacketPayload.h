#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/network/packet/ChangeEntityScore.h"
#include "mc/network/packet/ChangeFakePlayerScore.h"
#include "mc/network/packet/ChangePlayerScore.h"
#include "mc/network/packet/RemoveScore.h"

// auto generated forward declare list
// clang-format off
class Objective;
struct ScoreboardId;
// clang-format on

struct SetScorePacketPayload {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<
        8,
        24,
        ::std::vector<::std::variant<::RemoveScore, ::ChangePlayerScore, ::ChangeEntityScore, ::ChangeFakePlayerScore>>>
        mScoreInfo;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::SetScorePacketPayload change(
        ::std::vector<::std::variant<::RemoveScore, ::ChangePlayerScore, ::ChangeEntityScore, ::ChangeFakePlayerScore>>
            info
    );

    MCAPI static ::SetScorePacketPayload change(::ScoreboardId const& id, ::Objective const& objective);

    MCAPI static ::SetScorePacketPayload remove(::ScoreboardId const& id, ::Objective const& objective);
    // NOLINTEND
};
