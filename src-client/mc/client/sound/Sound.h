#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Random;
namespace Json { class Value; }
// clang-format on

struct Sound {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::std::string> mName;
    ::ll::TypedStorage<4, 4, float>          mVolumeMin;
    ::ll::TypedStorage<4, 4, float>          mPitchMin;
    ::ll::TypedStorage<4, 4, float>          mVolumeMax;
    ::ll::TypedStorage<4, 4, float>          mPitchMax;
    // NOLINTEND

public:
    // prevent constructor by default
    Sound();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI Sound(::Json::Value const& root, ::std::string const& name, float vmin, float vmax, float pmin, float pmax);

    MCNAPI float getPitch(::Random& random) const;

    MCNAPI float getVolume(::Random& random) const;

    MCNAPI ~Sound();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void*
    $ctor(::Json::Value const& root, ::std::string const& name, float vmin, float vmax, float pmin, float pmax);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
