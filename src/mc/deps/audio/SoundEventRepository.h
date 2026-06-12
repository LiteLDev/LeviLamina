#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class SoundEvent;
namespace Core { class PathView; }
class SoundItem;
// clang-format on

class SoundEventRepository {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 80, ::std::mutex>                                                         mSoundMapLock;
    ::ll::TypedStorage<8, 64, ::std::unordered_map<::std::string, ::std::shared_ptr<::SoundEvent>>> mSoundEventMap;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI void add(::std::string const& eventName, ::std::shared_ptr<::SoundEvent> soundEvent);

    MCNAPI void clearEventMap();

    MCNAPI ::std::shared_ptr<::SoundEvent> getEvent(::std::string const& eventName) const;

    MCNAPI bool getItem(::std::string const& eventName, ::SoundItem& soundItem) const;

    MCNAPI bool getItem(::std::string const& eventName, ::SoundItem& soundItem, uint& playOrder) const;

    MCNAPI bool getItem(::std::string const& eventName, ::Core::PathView soundName, ::SoundItem& soundItem) const;

    MCNAPI bool getItemInEvent(::SoundEvent const& soundEvent, ::SoundItem& item, uint& soundIdx) const;

    MCNAPI ~SoundEventRepository();
#endif
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI void $dtor();
#endif
    // NOLINTEND
};
