#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class MinEngineVersion;
class SemVersion;
struct DeserializeDataParams;
namespace Json { class Value; }
// clang-format on

struct ConstDeserializeDataParams {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8>  mUnk53e6e0;
    ::ll::UntypedStorage<8, 24> mUnkcb3186;
    ::ll::UntypedStorage<8, 32> mUnk25c848;
    // NOLINTEND

public:
    // prevent constructor by default
    ConstDeserializeDataParams& operator=(ConstDeserializeDataParams const&);
    ConstDeserializeDataParams(ConstDeserializeDataParams const&);
    ConstDeserializeDataParams();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit ConstDeserializeDataParams(::DeserializeDataParams const& deserializeDataParams);

    MCNAPI_C ConstDeserializeDataParams(::Json::Value const& value, ::ConstDeserializeDataParams const& parent);

    MCNAPI_C ConstDeserializeDataParams(
        ::Json::Value const&      value,
        ::SemVersion const&       formatVersion,
        ::MinEngineVersion const& minEngineVersion
    );

    MCNAPI ~ConstDeserializeDataParams();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::DeserializeDataParams const& deserializeDataParams);

    MCNAPI_C void* $ctor(::Json::Value const& value, ::ConstDeserializeDataParams const& parent);

    MCNAPI_C void*
    $ctor(::Json::Value const& value, ::SemVersion const& formatVersion, ::MinEngineVersion const& minEngineVersion);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
