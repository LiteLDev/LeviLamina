#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class BlockSource;
class Player;
// clang-format on

namespace br::spawn {

struct LocalMobCapCalc {
public:
    // LocalMobCapCalc inner types define
    using MobCounts = ::std::array<int, 8>;
    
    using PlayerList = ::std::vector<::Player const*>;
    
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::BlockSource*> mRegion;
    ::ll::TypedStorage<8, 24, ::std::vector<::std::tuple<int64, ::std::vector<::Player const*>>>> mPlayersNearChunk;
    ::ll::TypedStorage<8, 24, ::std::vector<::std::tuple<::Player const*, ::std::array<int, 8>>>> mMobCounts;
    // NOLINTEND

};

}
