#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/resources/JsonBetaState.h"
#include "mc/util/DeserializeDataSettings.h"

// auto generated forward declare list
// clang-format off
class MinEngineVersion;
class SemVersion;
namespace Json { class Value; }
// clang-format on

struct DeserializeDataParams : public ::DeserializeDataSettings {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::Json::Value&> mValue;
    // NOLINTEND

public:
    // prevent constructor by default
    DeserializeDataParams& operator=(DeserializeDataParams const&);
    DeserializeDataParams(DeserializeDataParams const&);
    DeserializeDataParams();

public:
    // member functions
    // NOLINTBEGIN
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
    MCFOLD void $dtor();
    // NOLINTEND
};
