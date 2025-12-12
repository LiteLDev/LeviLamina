#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/legacy/LevelSoundEvent.h"
#include "mc/util/BidirectionalUnorderedMap.h"

class LevelSoundEventMap {
public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::SharedTypes::Legacy::LevelSoundEvent getId(::std::string const& type);

    MCNAPI static ::std::string const& getName(::SharedTypes::Legacy::LevelSoundEvent type);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::BidirectionalUnorderedMap<::std::string, ::SharedTypes::Legacy::LevelSoundEvent> const& map();
    // NOLINTEND
};
