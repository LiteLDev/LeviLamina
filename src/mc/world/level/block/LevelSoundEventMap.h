#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/puv/LevelSoundEvent.h"
#include "mc/util/BidirectionalUnorderedMap.h"

class LevelSoundEventMap {
public:
    // prevent constructor by default
    LevelSoundEventMap& operator=(LevelSoundEventMap const&);
    LevelSoundEventMap(LevelSoundEventMap const&);
    LevelSoundEventMap();

public:
    // NOLINTBEGIN
    MCAPI static ::Puv::Legacy::LevelSoundEvent getId(std::string const& type);

    MCAPI static std::string const& getName(::Puv::Legacy::LevelSoundEvent type);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static class BidirectionalUnorderedMap<std::string, ::Puv::Legacy::LevelSoundEvent> const& map();

    // NOLINTEND
};
