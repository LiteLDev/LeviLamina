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
    // ?getId@LevelSoundEventMap@@SA?AW4LevelSoundEvent@Legacy@Puv@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCAPI static ::Puv::Legacy::LevelSoundEvent getId(std::string const& type);

    // symbol:
    // ?getName@LevelSoundEventMap@@SAAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@W4LevelSoundEvent@Legacy@Puv@@@Z
    MCAPI static std::string const& getName(::Puv::Legacy::LevelSoundEvent);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol:
    // ?map@LevelSoundEventMap@@0V?$BidirectionalUnorderedMap@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@W4LevelSoundEvent@Legacy@Puv@@@@B
    MCAPI static class BidirectionalUnorderedMap<std::string, ::Puv::Legacy::LevelSoundEvent> const map;

    // NOLINTEND
};
