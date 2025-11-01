#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/resources/JsonBetaState.h"

// auto generated forward declare list
// clang-format off
class MinEngineVersion;
class SemVersion;
// clang-format on

struct DeserializeDataSettings {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnk921597;
    ::ll::UntypedStorage<8, 32> mUnk31758d;
    ::ll::UntypedStorage<1, 1> mUnk66d3bd;
    ::ll::UntypedStorage<1, 1> mUnk3e4fc5;
    // NOLINTEND

public:
    // prevent constructor by default
    DeserializeDataSettings& operator=(DeserializeDataSettings const&);
    DeserializeDataSettings();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI DeserializeDataSettings(::DeserializeDataSettings const&);

    MCNAPI DeserializeDataSettings(::SemVersion const& formatVersion, ::MinEngineVersion const& minEngineVersion, bool isBaseGamePack, ::JsonBetaState canUseBeta);

    MCNAPI ~DeserializeDataSettings();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::DeserializeDataSettings const&);

    MCNAPI void* $ctor(::SemVersion const& formatVersion, ::MinEngineVersion const& minEngineVersion, bool isBaseGamePack, ::JsonBetaState canUseBeta);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

};
