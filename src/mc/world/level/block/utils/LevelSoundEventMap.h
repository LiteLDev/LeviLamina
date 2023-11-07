#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/data/BidirectionalUnorderedMap.h"
#include "mc/events/LevelSoundEvent.h"

class LevelSoundEventMap {
public:
    // prevent constructor by default
    LevelSoundEventMap& operator=(LevelSoundEventMap const&);
    LevelSoundEventMap(LevelSoundEventMap const&);
    LevelSoundEventMap();

public:
    // NOLINTBEGIN
    // symbol:
    // ?getId@LevelSoundEventMap@@SA?AW4LevelSoundEvent@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCAPI static ::LevelSoundEvent getId(std::string const&);

    // symbol:
    // ?getName@LevelSoundEventMap@@SAAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@W4LevelSoundEvent@@@Z
    MCAPI static std::string const& getName(::LevelSoundEvent);

    // symbol:
    // ?initializerData@LevelSoundEventMap@@2V?$initializer_list@U?$pair@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@W4LevelSoundEvent@@@std@@@std@@B
    MCAPI static std::initializer_list<std::pair<std::string, ::LevelSoundEvent>> const initializerData;

    // NOLINTEND

private:
    // NOLINTBEGIN
    // symbol:
    // ?map@LevelSoundEventMap@@0V?$BidirectionalUnorderedMap@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@W4LevelSoundEvent@@@@B
    MCAPI static class BidirectionalUnorderedMap<std::string, ::LevelSoundEvent> const map;

    // NOLINTEND

    // member accessor
public:
    // NOLINTBEGIN
    static auto& $map() { return map; }

    // NOLINTEND
};
