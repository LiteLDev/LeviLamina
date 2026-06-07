#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/file/PathBuffer.h"

// auto generated forward declare list
// clang-format off
namespace Core { class Path; }
// clang-format on

class SoundItem {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool>                               mLoadFromMemory;
    ::ll::TypedStorage<8, 32, ::std::string>                     mResourceStream;
    ::ll::TypedStorage<8, 32, ::Core::PathBuffer<::std::string>> mSoundName;
    ::ll::TypedStorage<4, 4, float>                              mVolume;
    ::ll::TypedStorage<4, 4, float>                              mPitch;
    ::ll::TypedStorage<4, 4, float>                              mMinDistance;
    ::ll::TypedStorage<4, 4, float>                              mMaxDistance;
    ::ll::TypedStorage<4, 4, int>                                mWeight;
    ::ll::TypedStorage<1, 1, bool>                               mStream;
    ::ll::TypedStorage<1, 1, bool>                               mIs3D;
    ::ll::TypedStorage<1, 1, bool>                               mInterruptible;
    ::ll::TypedStorage<1, 1, bool>                               mUseLegacyMaxDistance;
    // NOLINTEND

public:
    // prevent constructor by default
    SoundItem& operator=(SoundItem const&);
    SoundItem();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI SoundItem(::SoundItem const&);

    MCNAPI SoundItem(
        ::Core::Path const& soundName,
        float               volume,
        float               pitch,
        float               minDistance,
        float               maxDistance,
        int                 weight,
        bool                stream,
        bool                is3D,
        bool                interruptible,
        bool                useLegacyMaxDistance
    );

    MCNAPI bool getLoadFromMemory() const;

    MCNAPI ::std::string const& getResourceStream() const;

    MCNAPI ::Core::PathBuffer<::std::string> const& getSoundName() const;

    MCNAPI bool isInterruptible() const;

    MCNAPI bool isStream() const;

    MCNAPI ~SoundItem();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::SoundItem const&);

    MCNAPI void* $ctor(
        ::Core::Path const& soundName,
        float               volume,
        float               pitch,
        float               minDistance,
        float               maxDistance,
        int                 weight,
        bool                stream,
        bool                is3D,
        bool                interruptible,
        bool                useLegacyMaxDistance
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
