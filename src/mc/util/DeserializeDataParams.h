#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/resources/JsonBetaState.h"

// auto generated forward declare list
// clang-format off
class MinEngineVersion;
class SemVersion;
namespace Json { class Value; }
// clang-format on

struct DeserializeDataParams {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8>   mUnk407f0e;
    ::ll::UntypedStorage<8, 112> mUnk8a0b4a;
    ::ll::UntypedStorage<8, 120> mUnke19b37;
    ::ll::UntypedStorage<1, 1>   mUnk84bd48;
    ::ll::UntypedStorage<1, 1>   mUnka7eaee;
    // NOLINTEND

public:
    // prevent constructor by default
    DeserializeDataParams& operator=(DeserializeDataParams const&);
    DeserializeDataParams();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI DeserializeDataParams(::DeserializeDataParams const&);

    MCAPI DeserializeDataParams(
        ::Json::Value&            value,
        ::SemVersion const&       formatVersion,
        ::MinEngineVersion const& minEngineVersion,
        bool                      isBaseGamePack,
        ::JsonBetaState           canUseBeta
    );

    MCAPI ~DeserializeDataParams();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::DeserializeDataParams const&);

    MCAPI void* $ctor(
        ::Json::Value&            value,
        ::SemVersion const&       formatVersion,
        ::MinEngineVersion const& minEngineVersion,
        bool                      isBaseGamePack,
        ::JsonBetaState           canUseBeta
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
