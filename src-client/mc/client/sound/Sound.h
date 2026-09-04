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
    MCAPI Sound(::Json::Value const& root, ::std::string const& name, float vmin, float vmax, float pmin, float pmax);

    MCAPI float getPitch(::Random& random) const;

    MCAPI float getVolume(::Random& random) const;

    MCAPI ~Sound();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void*
    $ctor(::Json::Value const& root, ::std::string const& name, float vmin, float vmax, float pmin, float pmax);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};
