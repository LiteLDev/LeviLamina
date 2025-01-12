#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Actor;
class CompoundTag;
class DataLoadHelper;
class Level;
// clang-format on

class TimerComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4>  mUnkb4fff2;
    ::ll::UntypedStorage<8, 8>  mUnkeb854b;
    ::ll::UntypedStorage<1, 1>  mUnke61b8b;
    ::ll::UntypedStorage<1, 1>  mUnkc17464;
    ::ll::UntypedStorage<4, 4>  mUnk6e4789;
    ::ll::UntypedStorage<1, 1>  mUnk9d6738;
    ::ll::UntypedStorage<4, 4>  mUnk38df3b;
    ::ll::UntypedStorage<4, 4>  mUnke1c772;
    ::ll::UntypedStorage<8, 24> mUnk13f9a4;
    // NOLINTEND

public:
    // prevent constructor by default
    TimerComponent& operator=(TimerComponent const&);
    TimerComponent(TimerComponent const&);

public:
    // member functions
    // NOLINTBEGIN
    MCAPI TimerComponent();

    MCAPI void addAdditionalSaveData(::CompoundTag& tag) const;

    MCFOLD bool getHasExecuted() const;

    MCFOLD bool getLooping() const;

    MCAPI int getRandomTime(::Actor& actor);

    MCAPI uint64 getTimeStamp(::Level const& level);

    MCAPI void readAdditionalSaveData(::Actor& owner, ::CompoundTag const& tag, ::DataLoadHelper& dataLoadHelper);

    MCAPI void restartTimer(::Actor& actor);

    MCFOLD void setHasExecuted(bool hasExecuted);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();
    // NOLINTEND
};
